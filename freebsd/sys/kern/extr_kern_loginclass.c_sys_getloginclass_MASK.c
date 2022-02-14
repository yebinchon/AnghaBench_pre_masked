
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; } ;
struct loginclass {int lc_name; } ;
struct getloginclass_args {size_t namelen; int namebuf; } ;
struct TYPE_2__ {struct loginclass* cr_loginclass; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct thread *VAR_1, struct getloginclass_args *VAR_2)
{
 struct loginclass *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1->td_ucred->cr_loginclass;
 VAR_4 = FUNC_1(VAR_3->lc_name) + 1;
 if (VAR_4 > VAR_2->namelen)
  return (VAR_0);
 return (FUNC_0(VAR_3->lc_name, VAR_2->namebuf, VAR_4));
}
