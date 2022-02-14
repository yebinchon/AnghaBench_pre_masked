
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setlist {int dummy; } ;
struct domainset {int dummy; } ;
struct domainlist {int dummy; } ;
struct cpuset {struct domainset* cs_domain; int cs_mask; } ;
typedef int cpuset_t ;


 struct cpuset* FUNC_0 (struct cpuset*) ;
 int FUNC_1 (struct cpuset*,struct cpuset**,int *,struct domainset*,struct setlist*,struct domainlist*) ;

__attribute__((used)) static int
FUNC_2(struct cpuset *VAR_0, cpuset_t *VAR_1,
    struct domainset *VAR_2, struct cpuset **VAR_3,
    struct setlist *VAR_4, struct domainlist *VAR_5)
{
 struct cpuset *VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  VAR_1 = &VAR_0->cs_mask;
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0->cs_domain;
 return FUNC_1(VAR_6, VAR_3, VAR_1, VAR_2, VAR_4,
     VAR_5);
}
