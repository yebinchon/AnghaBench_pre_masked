
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hptiop_adapter_ops {int dummy; } ;
struct hpt_iop_hba {struct hptiop_adapter_ops* ops; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hpt_iop_hba*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 struct hptiop_adapter_ops VAR_1 ;
 struct hptiop_adapter_ops VAR_2 ;
 struct hptiop_adapter_ops VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*,int,char*) ;

__attribute__((used)) static int FUNC_12(device_t VAR_4)
{
 struct hpt_iop_hba *VAR_5;
 u_int32_t VAR_6;
 static char VAR_7[256];
 int VAR_8 = 0;
 struct hptiop_adapter_ops *VAR_9;

 if (FUNC_10(VAR_4) != 0x1103)
  return (VAR_0);

 VAR_6 = FUNC_6(VAR_4);

 switch (VAR_6) {
  case 0x4520:
  case 0x4521:
  case 0x4522:
   VAR_8 = 1;
  case 0x3620:
  case 0x3622:
  case 0x3640:
   VAR_9 = &VAR_3;
   break;
  case 0x4210:
  case 0x4211:
  case 0x4310:
  case 0x4311:
  case 0x4320:
  case 0x4321:
   case 0x4322:
   VAR_8 = 1;
  case 0x3220:
  case 0x3320:
  case 0x3410:
  case 0x3520:
  case 0x3510:
  case 0x3511:
  case 0x3521:
  case 0x3522:
  case 0x3530:
  case 0x3540:
  case 0x3560:
   VAR_9 = &VAR_1;
   break;
  case 0x3020:
  case 0x3120:
  case 0x3122:
   VAR_9 = &VAR_2;
   break;
  default:
   return (VAR_0);
 }

 FUNC_3(VAR_4, "adapter at PCI %d:%d:%d, IRQ %d\n",
  FUNC_5(VAR_4), FUNC_9(VAR_4),
  FUNC_7(VAR_4), FUNC_8(VAR_4));

 FUNC_11(VAR_7, "RocketRAID %x %s Controller\n",
    VAR_6, VAR_8 ? "SAS" : "SATA");
 FUNC_4(VAR_4, VAR_7);

 VAR_5 = (struct hpt_iop_hba *)FUNC_2(VAR_4);
 FUNC_1(VAR_5, sizeof(struct hpt_iop_hba));
 VAR_5->ops = VAR_9;

 FUNC_0(("hba->ops=%p\n", VAR_5->ops));
 return 0;
}
