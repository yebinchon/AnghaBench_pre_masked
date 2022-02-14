
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hpt_iop_hba {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct hpt_iop_hba * VAR_4, u_int32_t VAR_5)
{
 u_int32_t VAR_6=0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_0(VAR_1);
  if (VAR_6 != VAR_0)
   break;
  FUNC_2(1000);
 }

 if (VAR_6!=VAR_0) {
  FUNC_1(VAR_3, VAR_6);
  FUNC_0(VAR_2);
  return 0;
 }

 return -1;
}
