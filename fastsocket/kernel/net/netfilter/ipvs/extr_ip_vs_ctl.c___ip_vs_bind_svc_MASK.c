
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {int refcnt; } ;
struct ip_vs_dest {struct ip_vs_service* svc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct ip_vs_dest *VAR_0, struct ip_vs_service *VAR_1)
{
 FUNC_0(&VAR_1->refcnt);
 VAR_0->svc = VAR_1;
}
