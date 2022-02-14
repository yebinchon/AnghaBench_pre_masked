
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct domainset {scalar_t__ ds_policy; int ds_mask; } ;
struct domainlist {int dummy; } ;
struct cpuset {int cs_flags; struct domainset* cs_domain; } ;
struct TYPE_3__ {int td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpuset* FUNC_1 (struct cpuset*) ;
 int VAR_5 ;
 int FUNC_2 (struct cpuset*,struct domainset*,struct domainset*,int*,int ) ;
 int FUNC_3 (struct cpuset*,struct domainset*,struct domainset*,struct domainlist*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (struct domainset*,struct domainset*) ;
 struct domainset* FUNC_5 (struct domainset*) ;
 int FUNC_6 (struct domainlist*,int) ;
 int FUNC_7 (struct domainlist*) ;
 int FUNC_8 (struct domainlist*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct domainset*,struct domainset*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_15(struct cpuset *VAR_7, struct domainset *VAR_8)
{
 struct domainlist VAR_9;
 struct domainset VAR_10;
 struct domainset *VAR_11;
 struct cpuset *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_14(VAR_6, VAR_4);
 if (VAR_15)
  return (VAR_15);






 if (FUNC_11(VAR_6->td_ucred) &&
     VAR_7->cs_flags & VAR_0)
  return (VAR_3);
 FUNC_8(&VAR_9, 0);
 VAR_8 = FUNC_5(VAR_8);
 VAR_13 = VAR_14 = 0;
 do {
  if (VAR_13 < VAR_14) {
   FUNC_6(&VAR_9, VAR_14 - VAR_13);
   VAR_13 = VAR_14;
  }
  VAR_12 = FUNC_1(VAR_7);
  FUNC_12(&VAR_5);
  VAR_11 = VAR_12->cs_domain;



  if (!FUNC_10(VAR_11, VAR_8)) {
   VAR_15 = VAR_2;
   goto out;
  }



  if (VAR_8->ds_policy == VAR_1)
   FUNC_0(&VAR_7->cs_domain->ds_mask,
       &VAR_8->ds_mask);




  FUNC_4(VAR_8, &VAR_10);
  VAR_14 = 0;
  VAR_15 = FUNC_2(VAR_7, &VAR_10, VAR_7->cs_domain,
      &VAR_14, 0);
  if (VAR_15)
   goto out;
 } while (VAR_13 < VAR_14);
 VAR_11 = VAR_7->cs_domain;
 FUNC_3(VAR_7, VAR_8, VAR_11, &VAR_9);
out:
 FUNC_13(&VAR_5);
 FUNC_7(&VAR_9);
 if (VAR_15 == 0)
  FUNC_9();

 return (VAR_15);
}
