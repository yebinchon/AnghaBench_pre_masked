
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_ngroups; int * cr_groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct ucred*) ;
 scalar_t__ FUNC_1 (struct ucred*,int ) ;
 int VAR_2 ;

int
FUNC_2(struct ucred *VAR_3, struct ucred *VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_2) {
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_3->cr_ngroups; VAR_5++) {
   if (FUNC_0(VAR_3->cr_groups[VAR_5], VAR_4))
    VAR_6 = 1;
   if (VAR_6)
    break;
  }
  if (!VAR_6) {
   if (FUNC_1(VAR_3, VAR_1) != 0)
    return (VAR_0);
  }
 }
 return (0);
}
