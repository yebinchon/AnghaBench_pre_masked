
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 struct frame_info* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct frame_info*) ;
 struct frame_info* FUNC_4 (struct frame_info*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6 (bfd_vma *VAR_2, bfd_vma *VAR_3)
{
  struct frame_info *VAR_4, *VAR_5;

  FUNC_1 (VAR_2);
  FUNC_1 (VAR_3);


  if (!VAR_1 || !VAR_0)
    return 0;


  VAR_4 = FUNC_2 ();
  if (VAR_4 == ((void*)0))
    return 0;


  *VAR_3 = FUNC_3 (VAR_4);

  if (FUNC_0 (FUNC_5 (), *VAR_3))
    *VAR_3 = FUNC_5 ();


  while ((VAR_5 = FUNC_4 (VAR_4)) != ((void*)0))
    VAR_4 = VAR_5;


  *VAR_2 = FUNC_3 (VAR_4);



  if (*VAR_2 > *VAR_3)
    {
      bfd_vma VAR_6;

      VAR_6 = *VAR_3;
      *VAR_3 = *VAR_2;
      *VAR_2 = VAR_6;
    }

  return 1;
}
