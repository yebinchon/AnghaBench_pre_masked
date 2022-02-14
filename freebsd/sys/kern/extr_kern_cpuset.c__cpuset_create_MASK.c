
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int dummy; } ;
struct cpuset {scalar_t__ cs_id; int cs_children; int cs_parent; int cs_mask; struct domainset* cs_domain; scalar_t__ cs_flags; int cs_ref; } ;
typedef scalar_t__ cpusetid_t ;
typedef int cpuset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct cpuset*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct cpuset*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct domainset*,struct domainset*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int
FUNC_10(struct cpuset *VAR_6, struct cpuset *VAR_7,
    const cpuset_t *VAR_8, struct domainset *VAR_9, cpusetid_t VAR_10)
{

 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_7->cs_domain;
 if (VAR_8 == ((void*)0))
  VAR_8 = &VAR_7->cs_mask;
 if (!FUNC_2(&VAR_7->cs_mask, VAR_8))
  return (VAR_1);

 if (!FUNC_6(VAR_7->cs_domain, VAR_9))
  return (VAR_1);
 FUNC_1(VAR_8, &VAR_6->cs_mask);
 FUNC_3(&VAR_6->cs_children);
 FUNC_9(&VAR_6->cs_ref, 1);
 VAR_6->cs_flags = 0;
 FUNC_7(&VAR_3);
 VAR_6->cs_domain = VAR_9;
 FUNC_0(&VAR_6->cs_mask, &VAR_7->cs_mask);
 VAR_6->cs_id = VAR_10;
 VAR_6->cs_parent = FUNC_5(VAR_7);
 FUNC_4(&VAR_7->cs_children, VAR_6, VAR_5);
 if (VAR_6->cs_id != VAR_0)
  FUNC_4(&VAR_2, VAR_6, VAR_4);
 FUNC_8(&VAR_3);

 return (0);
}
