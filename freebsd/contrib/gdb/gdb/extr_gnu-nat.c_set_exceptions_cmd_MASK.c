
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int want_exceptions; scalar_t__ task; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();
  int VAR_3 = FUNC_1 (VAR_0, "set exceptions");

  if (VAR_2->task && VAR_2->want_exceptions != VAR_3)

              ;

  VAR_2->want_exceptions = VAR_3;
}
