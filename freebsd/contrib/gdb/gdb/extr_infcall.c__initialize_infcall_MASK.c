
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int *,char*,char*,int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_1 (void)
{
  FUNC_0 ("coerce-float-to-double", VAR_0,
      &VAR_1, "Set coercion of floats to doubles when calling functions\nVariables of type float should generally be converted to doubles before\ncalling an unprototyped function, and left alone when calling a prototyped\nfunction.  However, some older debug info formats do not provide enough\ninformation to determine that a function is prototyped.  If this flag is\nset, GDB will perform the conversion for a function it considers\nunprototyped.\nThe default is to perform the conversion.\n", "Show coercion of floats to doubles when calling functions\nVariables of type float should generally be converted to doubles before\ncalling an unprototyped function, and left alone when calling a prototyped\nfunction.  However, some older debug info formats do not provide enough\ninformation to determine that a function is prototyped.  If this flag is\nset, GDB will perform the conversion for a function it considers\nunprototyped.\nThe default is to perform the conversion.\n",
      ((void*)0), ((void*)0), &VAR_3, &VAR_4);

  FUNC_0 ("unwindonsignal", VAR_2,
      &VAR_5, "Set unwinding of stack if a signal is received while in a call dummy.\nThe unwindonsignal lets the user determine what gdb should do if a signal\nis received while in a function called from gdb (call dummy).  If set, gdb\nunwinds the stack and restore the context to what as it was before the call.\nThe default is to stop in the frame where the signal was received.", "Set unwinding of stack if a signal is received while in a call dummy.\nThe unwindonsignal lets the user determine what gdb should do if a signal\nis received while in a function called from gdb (call dummy).  If set, gdb\nunwinds the stack and restore the context to what as it was before the call.\nThe default is to stop in the frame where the signal was received.",
      ((void*)0), ((void*)0), &VAR_3, &VAR_4);
}
