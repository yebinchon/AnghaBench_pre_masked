
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct thread {int td_cpuset; } ;
struct proc {int dummy; } ;
struct cpuset {int dummy; } ;
typedef int id_t ;
typedef scalar_t__ cpuwhich_t ;
struct TYPE_11__ {int __bits; } ;
typedef TYPE_1__ cpuset_t ;
typedef int cpulevel_t ;





 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__*,size_t) ;
 int FUNC_3 (struct cpuset*,TYPE_1__*) ;
 struct cpuset* FUNC_4 (int ) ;
 struct cpuset* FUNC_5 (struct cpuset*) ;
 struct cpuset* FUNC_6 (struct cpuset*) ;
 int FUNC_7 (struct cpuset*) ;
 int FUNC_8 (int,int *,TYPE_1__*,int *) ;
 int FUNC_9 (int,TYPE_1__*) ;
 int FUNC_10 (scalar_t__,int,struct proc**,struct thread**,struct cpuset**) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int,scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_13 (size_t,int ,int) ;
 int FUNC_14 (struct thread*) ;
 int FUNC_15 (struct thread*) ;

int
FUNC_16(struct thread *VAR_8, cpulevel_t VAR_9, cpuwhich_t VAR_10,
    id_t VAR_11, size_t VAR_12, const cpuset_t *VAR_13)
{
 struct cpuset *VAR_14;
 struct cpuset *VAR_15;
 struct thread *VAR_16;
 struct proc *VAR_17;
 cpuset_t *VAR_18;
 int VAR_19;

 if (VAR_12 < sizeof(cpuset_t) || VAR_12 > VAR_0 / VAR_7)
  return (VAR_3);

 if (FUNC_0(VAR_8)) {
  if (VAR_9 != 136)
   return (VAR_1);
  if (VAR_10 != 128 && VAR_10 != 129)
   return (VAR_1);
  if (VAR_11 != -1)
   return (VAR_1);
 }
 VAR_18 = FUNC_13(VAR_12, VAR_4, VAR_5 | VAR_6);
 VAR_19 = FUNC_2(VAR_13, VAR_18, VAR_12);
 if (VAR_19)
  goto out;



 if (VAR_12 > sizeof(cpuset_t)) {
  char *VAR_20;
  char *VAR_21;

  VAR_20 = VAR_21 = (char *)&VAR_18->__bits;
  VAR_20 += VAR_12;
  VAR_21 += sizeof(cpuset_t);
  while (VAR_21 != VAR_20)
   if (*VAR_21++ != 0) {
    VAR_19 = VAR_2;
    goto out;
   }

 }
 switch (VAR_9) {
 case 137:
 case 138:
  VAR_19 = FUNC_10(VAR_10, VAR_11, &VAR_17, &VAR_16, &VAR_15);
  if (VAR_19)
   break;
  switch (VAR_10) {
  case 128:
  case 129:
   FUNC_14(VAR_16);
   VAR_15 = FUNC_4(VAR_16->td_cpuset);
   FUNC_15(VAR_16);
   FUNC_1(VAR_17);
   break;
  case 135:
  case 130:
   break;
  case 132:
  case 133:
  case 131:
  case 134:
   VAR_19 = VAR_2;
   goto out;
  }
  if (VAR_9 == 137)
   VAR_14 = FUNC_6(VAR_15);
  else
   VAR_14 = FUNC_5(VAR_15);
  VAR_19 = FUNC_3(VAR_14, VAR_18);
  FUNC_7(VAR_14);
  FUNC_7(VAR_15);
  break;
 case 136:
  switch (VAR_10) {
  case 128:
   VAR_19 = FUNC_9(VAR_11, VAR_18);
   break;
  case 129:
   VAR_19 = FUNC_8(VAR_11, ((void*)0), VAR_18, ((void*)0));
   break;
  case 135:
  case 130:
   VAR_19 = FUNC_10(VAR_10, VAR_11, &VAR_17, &VAR_16, &VAR_15);
   if (VAR_19 == 0) {
    VAR_19 = FUNC_3(VAR_15, VAR_18);
    FUNC_7(VAR_15);
   }
   break;
  case 132:
  case 133:
  case 131:
   VAR_19 = FUNC_12(VAR_11, VAR_10, VAR_18);
   break;
  default:
   VAR_19 = VAR_2;
   break;
  }
  break;
 default:
  VAR_19 = VAR_2;
  break;
 }
out:
 FUNC_11(VAR_18, VAR_4);
 return (VAR_19);
}
