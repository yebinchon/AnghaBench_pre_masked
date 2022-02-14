
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ stopped; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();
  FUNC_1 (VAR_0, "show stopped");
  FUNC_2 ("The inferior process %s stopped.\n",
       VAR_2->stopped ? "is" : "isn't");
}
