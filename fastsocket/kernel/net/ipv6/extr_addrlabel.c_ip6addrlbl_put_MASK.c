
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6addrlbl_entry {int rcu; int refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct ip6addrlbl_entry *VAR_1)
{
 if (FUNC_0(&VAR_1->refcnt))
  FUNC_1(&VAR_1->rcu, VAR_0);
}
