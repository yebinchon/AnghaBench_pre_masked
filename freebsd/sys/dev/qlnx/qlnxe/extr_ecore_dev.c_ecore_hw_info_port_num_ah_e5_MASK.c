
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int num_ports_in_engine; } ;


 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_3,
      struct ecore_ptt *VAR_4)
{
 struct ecore_dev *VAR_5 = VAR_3->p_dev;
 u32 VAR_6;
 int VAR_7;

 VAR_5->num_ports_in_engine = 0;


 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_2);
  switch ((VAR_6 & 0xf000) >> 12) {
  case 1:
   VAR_5->num_ports_in_engine = 1;
   break;
  case 3:
   VAR_5->num_ports_in_engine = 2;
   break;
  case 0xf:
   VAR_5->num_ports_in_engine = 4;
   break;
  default:
   FUNC_1(VAR_3, 0,
      "Unknown port mode in ECO_RESERVED %08x\n",
      VAR_6);
  }
 } else

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = FUNC_2(VAR_3, VAR_4,
    VAR_0 + (VAR_7 * 4));
  if (VAR_6 & 1)
   VAR_5->num_ports_in_engine++;
 }

 if (!VAR_5->num_ports_in_engine) {
  FUNC_1(VAR_3, 1, "All NIG ports are inactive\n");


  VAR_5->num_ports_in_engine = 1;
 }
}
