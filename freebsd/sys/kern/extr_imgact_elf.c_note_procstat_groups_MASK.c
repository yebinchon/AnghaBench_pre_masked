
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int structsize ;
struct sbuf {int dummy; } ;
struct proc {TYPE_1__* p_ucred; } ;
typedef int gid_t ;
struct TYPE_2__ {int cr_ngroups; int* cr_groups; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sbuf*,int*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct sbuf *VAR_1, size_t *VAR_2)
{
 struct proc *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_3 = (struct proc *)VAR_0;
 VAR_4 = sizeof(VAR_5) + VAR_3->p_ucred->cr_ngroups * sizeof(gid_t);
 if (VAR_1 != ((void*)0)) {
  FUNC_0(*VAR_2 == VAR_4, ("invalid size"));
  VAR_5 = sizeof(gid_t);
  FUNC_1(VAR_1, &VAR_5, sizeof(VAR_5));
  FUNC_1(VAR_1, VAR_3->p_ucred->cr_groups, VAR_3->p_ucred->cr_ngroups *
      sizeof(gid_t));
 }
 *VAR_2 = VAR_4;
}
