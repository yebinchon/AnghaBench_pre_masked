
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int pause_sc; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (struct inf*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();
  int VAR_3 = VAR_2->pause_sc;

  VAR_2->pause_sc = FUNC_2 (VAR_0, "set task pause");

  if (VAR_3 == 0 && VAR_2->pause_sc != 0)


    FUNC_1 (VAR_2);
}
