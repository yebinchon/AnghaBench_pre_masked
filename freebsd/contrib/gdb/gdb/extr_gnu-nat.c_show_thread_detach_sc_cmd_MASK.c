
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int detach_sc; } ;


 int FUNC_0 (char*,char*) ;
 struct proc* FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct proc*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  struct proc *VAR_2 = FUNC_1 ();
  FUNC_0 (VAR_0, "show thread detach-suspend-count");
  FUNC_2 ("Thread %s will be left with a suspend count"
       " of %d when detaching.\n",
       FUNC_3 (VAR_2),
       VAR_2->detach_sc);
}
