
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cpumask_var_t ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int VAR_13 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(int VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 int VAR_18 = -1;
 cpumask_var_t VAR_19;


 if (VAR_10 == VAR_1) {
  FUNC_1(VAR_6, "Module para disable listen-spawn feature\n");
  return -VAR_5;
 }

 if ((VAR_14 >= 0) && (VAR_14 > FUNC_8())) {
  FUNC_1(VAR_6, "Requested CPU %d is greater than system available CPU core %d\n", VAR_14, FUNC_8());
  return -VAR_2;
 }



 if (VAR_14 >= 0)
  return VAR_14;

 if (!FUNC_2(&VAR_19, VAR_7))
  return -VAR_4;

 FUNC_9(VAR_9->pid, VAR_19);
 VAR_15 = FUNC_5(VAR_19);
 VAR_16 = FUNC_6(VAR_15, VAR_19);
 FUNC_7(VAR_19);

 FUNC_0(VAR_0, "Current process ccpu(%d) ncpu(%d)\n", VAR_15, VAR_16);

 if (VAR_15 >= VAR_13) {
  FUNC_0(VAR_0, "Current process affinity is messed up\n");
  return -VAR_2;
 }

 if (VAR_16 >= VAR_13) {
  FUNC_0(VAR_8, "Current process already binds to CPU %d\n", VAR_15);
  return VAR_15;
 }

 if (VAR_10 != VAR_3) {
  FUNC_1(VAR_6, "Module para disable autoset affinity for listen-spawn\n");
  return -VAR_5;
 }



 for (VAR_17 = VAR_11; VAR_17 < FUNC_8(); VAR_17++) {
  if (!FUNC_3(VAR_17, VAR_12)) {
   FUNC_0(VAR_8, "CPU %d is available for process affinity\n", VAR_17);
   VAR_18 = VAR_17;
   break;
  }
 }

 if (VAR_18 >= 0) {
  FUNC_4(VAR_17, VAR_12);
  VAR_11++;
 } else {
  FUNC_1(VAR_6, "Process number is more than CPU number\n");
  return -VAR_2;
 }

 FUNC_0(VAR_8, "Target process affinity: %d\n", VAR_18);

 return VAR_18;
}
