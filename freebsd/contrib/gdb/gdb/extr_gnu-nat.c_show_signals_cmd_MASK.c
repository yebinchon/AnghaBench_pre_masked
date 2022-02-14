
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ want_signals; scalar_t__ traced; scalar_t__ task; } ;


 int FUNC_0 (char*,char*) ;
 struct inf* FUNC_1 () ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_1 ();
  FUNC_0 (VAR_0, "show signals");
  FUNC_2 ("The inferior process's signals %s intercepted.\n",
       VAR_2->task
       ? (VAR_2->traced ? "are" : "aren't")
       : (VAR_2->want_signals ? "will be" : "won't be"));
}
