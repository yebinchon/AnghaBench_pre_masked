
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void *
FUNC_3 (bfd *VAR_1, file_ptr VAR_2, bfd_size_type VAR_3)
{
  void * VAR_4 = FUNC_0 (VAR_1, VAR_3);

  if (!VAR_4)
    return (((void*)0));
  if (FUNC_2 (VAR_1, VAR_2, VAR_0) != 0
      || FUNC_1 (VAR_4, VAR_3, VAR_1) != VAR_3)
    return (((void*)0));
  return (VAR_4);
}
