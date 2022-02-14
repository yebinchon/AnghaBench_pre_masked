
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int dummy; } ;
struct cpuset {struct domainset* cs_domain; int cs_mask; } ;
typedef int cpuset_t ;


 int FUNC_0 (int *,int const*) ;
 int VAR_0 ;
 struct cpuset* FUNC_1 (struct cpuset*) ;
 int FUNC_2 (struct domainset*,struct domainset const*) ;

__attribute__((used)) static int
FUNC_3(struct cpuset *VAR_1, const cpuset_t *VAR_2,
    const struct domainset *VAR_3)
{
 struct cpuset *VAR_4;
 struct domainset *VAR_5;

 VAR_4 = FUNC_1(VAR_1);




 if (VAR_2 != ((void*)0) && !FUNC_0(&VAR_4->cs_mask, VAR_2))
  return (VAR_0);





 VAR_5 = VAR_4->cs_domain;
 if (VAR_3 != ((void*)0) && !FUNC_2(VAR_5, VAR_3))
  return (VAR_0);

 return (0);
}
