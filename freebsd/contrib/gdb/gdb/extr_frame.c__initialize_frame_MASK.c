
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int FUNC_1 (char*,int ,int ,int *,char*,int *) ;
 int FUNC_2 (char*,int ,int *,char*,char*,int *,int *,int *,int *) ;
 int FUNC_3 (char*,int ,int *,char*,char*,int *,int *,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_6 (void)
{
  FUNC_5 (&VAR_4);

  FUNC_0 ("backtrace", VAR_2, VAR_6, "Set backtrace specific variables.\nConfigure backtrace variables such as the backtrace limit",


    &VAR_7, "set backtrace ",
    0 , &VAR_9);
  FUNC_0 ("backtrace", VAR_2, VAR_10, "Show backtrace specific variables\nShow backtrace variables such as the backtrace limit",


    &VAR_11, "show backtrace ",
    0 , &VAR_13);

  FUNC_2 ("past-main", VAR_3,
      &VAR_1, "Set whether backtraces should continue past \"main\".\nNormally the caller of \"main\" is not of interest, so GDB will terminate\nthe backtrace at \"main\".  Set this variable if you need to see the rest\nof the stack trace.", "Show whether backtraces should continue past \"main\".\nNormally the caller of \"main\" is not of interest, so GDB will terminate\nthe backtrace at \"main\".  Set this variable if you need to see the rest\nof the stack trace.",
      ((void*)0), ((void*)0), &VAR_7,
      &VAR_11);

  FUNC_3 ("limit", VAR_3,
       &VAR_0, "Set an upper bound on the number of backtrace levels.\nNo more than the specified number of frames can be displayed or examined.\nZero is unlimited.", "Show the upper bound on the number of backtrace levels.",




       ((void*)0), ((void*)0), &VAR_7,
       &VAR_11);


  FUNC_4 (FUNC_1 ("frame", VAR_2, VAR_14,
      &VAR_5, "Set frame debugging.\nWhen non-zero, frame specific internal debugging is enabled.", &VAR_8),

       &VAR_12);
}
