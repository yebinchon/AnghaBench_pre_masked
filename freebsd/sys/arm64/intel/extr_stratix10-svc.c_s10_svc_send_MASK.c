
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct s10_svc_softc {int (* callfn ) (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;} ;
struct s10_svc_msg {int command; int payload_length; int payload; scalar_t__ flags; } ;
struct arm_smccc_res {int dummy; } ;
typedef scalar_t__ register_t ;
typedef int device_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct s10_svc_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct s10_svc_softc*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

int
FUNC_3(device_t VAR_2, struct s10_svc_msg *VAR_3)
{
 struct s10_svc_softc *VAR_4;
 struct arm_smccc_res VAR_5;
 register_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_4 = FUNC_0(VAR_2);

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = 0;

 switch (VAR_3->command) {
 case 130:
  VAR_6 = VAR_0;
  VAR_7 = VAR_3->flags;
  break;
 case 128:
  VAR_6 = VAR_1;
  VAR_7 = (uint64_t)VAR_3->payload;
  VAR_8 = (uint64_t)VAR_3->payload_length;
  break;
 case 129:
  VAR_9 = FUNC_1(VAR_4);
  return (VAR_9);
 default:
  return (-1);
 }

 VAR_9 = VAR_4->callfn(VAR_6, VAR_7, VAR_8, 0, 0, 0, 0, 0, &VAR_5);

 return (VAR_9);
}
