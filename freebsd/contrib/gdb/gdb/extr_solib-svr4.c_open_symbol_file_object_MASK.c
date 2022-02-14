
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_map_offsets {scalar_t__ l_name_offset; int l_name_size; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 struct link_map_offsets* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct cleanup*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 struct cleanup* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (scalar_t__,char**,scalar_t__,int*) ;
 int FUNC_11 (char*,int ) ;
 int VAR_3 ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13 (void *VAR_4)
{
  CORE_ADDR VAR_5, VAR_6;
  char *VAR_7;
  int VAR_8;
  int VAR_9 = *(int *)VAR_4;
  struct link_map_offsets *VAR_10 = FUNC_0 ();
  char *VAR_11 = FUNC_12 (VAR_10->l_name_size);
  struct cleanup *VAR_12 = FUNC_5 (VAR_3, VAR_11);

  if (VAR_2)
    if (!FUNC_6 ("Attempt to reload symbols from process? "))
      return 0;

  if ((VAR_1 = FUNC_4 ()) == 0)
    return 0;


  if ((VAR_5 = FUNC_3 ()) == 0)
    return 0;


  FUNC_7 (VAR_5 + VAR_10->l_name_offset, VAR_11, VAR_10->l_name_size);



  VAR_6 = FUNC_2 (VAR_11, VAR_10->l_name_size);


  FUNC_1 (VAR_12);

  if (VAR_6 == 0)
    return 0;


  FUNC_10 (VAR_6, &VAR_7, VAR_0 - 1, &VAR_8);

  if (VAR_8)
    {
      FUNC_11 ("failed to read exec filename from attached file: %s",
        FUNC_8 (VAR_8));
      return 0;
    }

  FUNC_5 (VAR_3, VAR_7);

  FUNC_9 (VAR_7, VAR_9);

  return 1;
}
