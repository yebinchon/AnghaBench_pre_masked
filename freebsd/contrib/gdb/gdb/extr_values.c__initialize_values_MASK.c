
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1 (void)
{
  FUNC_0 ("convenience", VAR_0, VAR_1,
    "Debugger convenience (\"$foo\") variables.\nThese variables are created when you assign them values;\nthus, \"print $foo=1\" gives \"$foo\" the value 1.  Values may be any type.\n\nA few convenience variables are given values automatically:\n\"$_\"holds the last address examined with \"x\" or \"info lines\",\n\"$__\" holds the contents of the last address examined with \"x\".",





    &VAR_3);

  FUNC_0 ("values", VAR_0, VAR_2,
    "Elements of value history around item number IDX (or last ten).",
    &VAR_3);
}
