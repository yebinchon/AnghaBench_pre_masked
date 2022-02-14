
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setlist {int dummy; } ;
struct domainset {int dummy; } ;
struct domainlist {int dummy; } ;
struct cpuset {struct domainset* cs_domain; int cs_mask; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 struct cpuset* FUNC_0 (struct setlist*) ;
 int FUNC_1 (struct cpuset*,int ) ;
 int FUNC_2 (struct cpuset*,struct cpuset*,int const*,struct domainset*,int ) ;
 struct cpuset* FUNC_3 (struct cpuset*) ;
 int FUNC_4 (struct cpuset*,int const*,struct domainset const*) ;
 int VAR_1 ;
 struct domainset* FUNC_5 (struct domainset*,struct domainset const*,struct domainlist*) ;

__attribute__((used)) static int
FUNC_6(struct cpuset *VAR_2, struct cpuset **VAR_3,
   const cpuset_t *VAR_4, const struct domainset *VAR_5,
   struct setlist *VAR_6, struct domainlist *VAR_7)
{
 struct cpuset *VAR_8;
 struct cpuset *VAR_9;
 struct domainset *VAR_10;
 struct domainset *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_2, VAR_4, VAR_5);
 if (VAR_12)
  return (VAR_12);

 VAR_8 = FUNC_3(VAR_2);
 VAR_10 = VAR_8->cs_domain;
 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_2->cs_mask;
 if (VAR_5 != ((void*)0))
  VAR_11 = FUNC_5(VAR_10, VAR_5, VAR_7);
 else
  VAR_11 = VAR_2->cs_domain;
 VAR_9 = FUNC_0(VAR_6);
 VAR_12 = FUNC_2(VAR_9, VAR_8, VAR_4, VAR_11, VAR_0);
 if (VAR_12 == 0) {
  FUNC_1(VAR_9, VAR_1);
  *VAR_3 = VAR_9;
 }
 return (VAR_12);
}
