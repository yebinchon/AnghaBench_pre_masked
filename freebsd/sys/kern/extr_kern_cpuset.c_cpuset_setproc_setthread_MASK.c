
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setlist {int dummy; } ;
struct domainset {int dummy; } ;
struct domainlist {int dummy; } ;
struct cpuset {scalar_t__ cs_id; } ;
typedef int cpuset_t ;


 scalar_t__ VAR_0 ;
 struct cpuset* FUNC_0 (struct cpuset*) ;
 int FUNC_1 (struct cpuset*,struct cpuset*,int *,struct domainset*) ;
 int FUNC_2 (struct cpuset*,struct cpuset**,int *,struct domainset*,struct setlist*,struct domainlist*) ;

__attribute__((used)) static int
FUNC_3(struct cpuset *VAR_1, struct cpuset *VAR_2,
    struct cpuset **VAR_3, struct setlist *VAR_4,
    struct domainlist *VAR_5)
{
 struct domainset VAR_6;
 cpuset_t VAR_7;
 int VAR_8;





 if (VAR_1->cs_id != VAR_0) {
  *VAR_3 = FUNC_0(VAR_2);
  return (0);
 }
 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_7, &VAR_6);
 if (VAR_8)
  return (VAR_8);

 return FUNC_2(VAR_1, VAR_3, &VAR_7, &VAR_6, VAR_4,
     VAR_5);
}
