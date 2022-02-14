
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef int HOST_WIDE_INT ;
typedef int CUMULATIVE_ARGS ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_6 (tree VAR_2)
{
  int VAR_3 = sizeof (CUMULATIVE_ARGS) / sizeof (int);
  int *VAR_4 = (int *) &VAR_1;

  FUNC_3 (sizeof (CUMULATIVE_ARGS) % sizeof (int) == 0);

  if (VAR_2 != 0)
    {
      if (!FUNC_4 (FUNC_1 (VAR_2), 0))
 FUNC_2 ("argument of %<__builtin_args_info%> must be constant");
      else
 {
   HOST_WIDE_INT VAR_5 = FUNC_5 (FUNC_1 (VAR_2), 0);

   if (VAR_5 < 0 || VAR_5 >= VAR_3)
     FUNC_2 ("argument of %<__builtin_args_info%> out of range");
   else
     return FUNC_0 (VAR_4[VAR_5]);
 }
    }
  else
    FUNC_2 ("missing argument in %<__builtin_args_info%>");

  return VAR_0;
}
