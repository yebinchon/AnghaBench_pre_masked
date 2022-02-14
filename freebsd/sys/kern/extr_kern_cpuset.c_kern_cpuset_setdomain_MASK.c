
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct thread {int td_cpuset; } ;
struct proc {int dummy; } ;
struct domainset {int ds_policy; int ds_mask; scalar_t__ ds_prefer; } ;
struct cpuset {int dummy; } ;
typedef int id_t ;
struct TYPE_10__ {int __bits; } ;
typedef TYPE_1__ domainset_t ;
typedef int domain ;
typedef scalar_t__ cpuwhich_t ;
typedef int cpulevel_t ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct thread*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (int,int *,struct domainset*) ;
 TYPE_1__ VAR_11 ;
 int FUNC_7 (TYPE_1__ const*,TYPE_1__*,size_t) ;
 int FUNC_8 (struct cpuset*,struct domainset*) ;
 struct cpuset* FUNC_9 (int ) ;
 struct cpuset* FUNC_10 (struct cpuset*) ;
 struct cpuset* FUNC_11 (struct cpuset*) ;
 int FUNC_12 (struct cpuset*) ;
 int FUNC_13 (int,int *,int *,struct domainset*) ;
 int FUNC_14 (scalar_t__,int,struct proc**,struct thread**,struct cpuset**) ;
 int VAR_12 ;
 int FUNC_15 (int *,struct domainset*) ;
 scalar_t__ FUNC_16 (struct domainset*) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_18 (size_t,int ,int) ;
 int FUNC_19 (struct domainset*,int ,int) ;
 int FUNC_20 (struct thread*) ;
 int FUNC_21 (struct thread*) ;

int
FUNC_22(struct thread *VAR_13, cpulevel_t VAR_14, cpuwhich_t VAR_15,
    id_t VAR_16, size_t VAR_17, const domainset_t *VAR_18, int VAR_19)
{
 struct cpuset *VAR_20;
 struct cpuset *VAR_21;
 struct thread *VAR_22;
 struct proc *VAR_23;
 struct domainset VAR_24;
 domainset_t *VAR_25;
 int VAR_26;

 if (VAR_17 < sizeof(domainset_t) ||
     VAR_17 > VAR_0 / VAR_10)
  return (VAR_6);
 if (VAR_19 <= VAR_1 ||
     VAR_19 > VAR_2)
  return (VAR_5);

 if (FUNC_4(VAR_13)) {
  if (VAR_14 != 136)
   return (VAR_4);
  if (VAR_15 != 128 && VAR_15 != 129)
   return (VAR_4);
  if (VAR_16 != -1)
   return (VAR_4);
 }
 FUNC_19(&VAR_24, 0, sizeof(VAR_24));
 VAR_25 = FUNC_18(VAR_17, VAR_7, VAR_8 | VAR_9);
 VAR_26 = FUNC_7(VAR_18, VAR_25, VAR_17);
 if (VAR_26)
  goto out;



 if (VAR_17 > sizeof(domainset_t)) {
  char *VAR_27;
  char *VAR_28;

  VAR_27 = VAR_28 = (char *)&VAR_25->__bits;
  VAR_27 += VAR_17;
  VAR_28 += sizeof(domainset_t);
  while (VAR_28 != VAR_27)
   if (*VAR_28++ != 0) {
    VAR_26 = VAR_5;
    goto out;
   }

 }
 FUNC_0(VAR_25, &VAR_24.ds_mask);
 VAR_24.ds_policy = VAR_19;




 if (!FUNC_3(&VAR_11, &VAR_24.ds_mask)) {
  VAR_26 = VAR_5;
  goto out;
 }


 if (VAR_19 == VAR_3) {

  if (FUNC_1(&VAR_24.ds_mask) != 1) {
   VAR_26 = VAR_5;
   goto out;
  }
  VAR_24.ds_prefer = FUNC_2(&VAR_24.ds_mask) - 1;

  FUNC_0(&VAR_11, &VAR_24.ds_mask);
 }





 if (FUNC_16(&VAR_24))
  FUNC_15(&VAR_12, &VAR_24);

 switch (VAR_14) {
 case 137:
 case 138:
  VAR_26 = FUNC_14(VAR_15, VAR_16, &VAR_23, &VAR_22, &VAR_21);
  if (VAR_26)
   break;
  switch (VAR_15) {
  case 128:
  case 129:
   FUNC_20(VAR_22);
   VAR_21 = FUNC_9(VAR_22->td_cpuset);
   FUNC_21(VAR_22);
   FUNC_5(VAR_23);
   break;
  case 135:
  case 130:
   break;
  case 132:
  case 133:
  case 131:
  case 134:
   VAR_26 = VAR_5;
   goto out;
  }
  if (VAR_14 == 137)
   VAR_20 = FUNC_11(VAR_21);
  else
   VAR_20 = FUNC_10(VAR_21);
  VAR_26 = FUNC_8(VAR_20, &VAR_24);
  FUNC_12(VAR_20);
  FUNC_12(VAR_21);
  break;
 case 136:
  switch (VAR_15) {
  case 128:
   VAR_26 = FUNC_6(VAR_16, ((void*)0), &VAR_24);
   break;
  case 129:
   VAR_26 = FUNC_13(VAR_16, ((void*)0), ((void*)0), &VAR_24);
   break;
  case 135:
  case 130:
   VAR_26 = FUNC_14(VAR_15, VAR_16, &VAR_23, &VAR_22, &VAR_21);
   if (VAR_26 == 0) {
    VAR_26 = FUNC_8(VAR_21, &VAR_24);
    FUNC_12(VAR_21);
   }
   break;
  case 132:
  case 133:
  case 131:
  default:
   VAR_26 = VAR_5;
   break;
  }
  break;
 default:
  VAR_26 = VAR_5;
  break;
 }
out:
 FUNC_17(VAR_25, VAR_7);
 return (VAR_26);
}
