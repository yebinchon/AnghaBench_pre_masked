
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hpt_iop_hba {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct hpt_iop_hba*) ;
 int FUNC_5 (struct hpt_iop_hba*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct hpt_iop_hba * VAR_4)
{
 u_int32_t VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_2);

 if (VAR_5)
  FUNC_2(VAR_2, ~VAR_5);

 if (VAR_5 & VAR_0) {
  u_int32_t VAR_7 = FUNC_1(VAR_3);
  FUNC_3(("hptiop: received outbound msg %x\n", VAR_7));
  FUNC_5(VAR_4, VAR_7);
  VAR_6 = 1;
 }

 if (VAR_5 & VAR_1) {
  FUNC_4(VAR_4);
  VAR_6 = 1;
 }

 return VAR_6;
}
