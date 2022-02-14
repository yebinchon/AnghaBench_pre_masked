
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_reader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_3 (cpp_reader *VAR_9, int VAR_10)
{
  FUNC_2 (VAR_9);

  if (!FUNC_0 (VAR_9, VAR_8)
      && (! FUNC_0 (VAR_9, VAR_7)
   || FUNC_0 (VAR_9, VAR_6)))
    FUNC_1 (VAR_9, "__STDC__ 1");

  if (FUNC_0 (VAR_9, VAR_3))
    FUNC_1 (VAR_9, "__cplusplus 1");
  else if (FUNC_0 (VAR_9, VAR_4) == VAR_0)
    FUNC_1 (VAR_9, "__ASSEMBLER__ 1");
  else if (FUNC_0 (VAR_9, VAR_4) == VAR_1)
    FUNC_1 (VAR_9, "__STDC_VERSION__ 199409L");
  else if (FUNC_0 (VAR_9, VAR_2))
    FUNC_1 (VAR_9, "__STDC_VERSION__ 199901L");

  if (VAR_10)
    FUNC_1 (VAR_9, "__STDC_HOSTED__ 1");
  else
    FUNC_1 (VAR_9, "__STDC_HOSTED__ 0");

  if (FUNC_0 (VAR_9, VAR_5))
    FUNC_1 (VAR_9, "__OBJC__ 1");
}
