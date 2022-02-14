
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ want_exceptions; scalar_t__ task; } ;


 int FUNC_0 (char*,char*) ;
 struct inf* FUNC_1 () ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_1 ();
  FUNC_0 (VAR_0, "show exceptions");
  FUNC_2 ("Exceptions in the inferior %s trapped.\n",
       VAR_2->task
       ? (VAR_2->want_exceptions ? "are" : "aren't")
       : (VAR_2->want_exceptions ? "will be" : "won't be"));
}
