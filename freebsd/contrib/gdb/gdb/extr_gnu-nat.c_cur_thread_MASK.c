
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct inf {int dummy; } ;


 int FUNC_0 (int ) ;
 struct inf* FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct proc* FUNC_3 (struct inf*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct proc *
FUNC_4 (void)
{
  struct inf *VAR_1 = FUNC_1 ();
  struct proc *VAR_2 = FUNC_3 (VAR_1, FUNC_0 (VAR_0));
  if (!VAR_2)
    FUNC_2 ("No current thread.");
  return VAR_2;
}
