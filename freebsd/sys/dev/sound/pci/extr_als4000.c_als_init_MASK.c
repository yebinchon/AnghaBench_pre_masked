
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*,int) ;
 int FUNC_3 (struct sc_info*,int,int) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (struct sc_info*,int ,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(struct sc_info *VAR_4)
{
 u_int32_t VAR_5, VAR_6;


 if (FUNC_1(VAR_4)) {
  return 1;
 }


 VAR_6 = FUNC_4(VAR_4, VAR_2);
 FUNC_5(VAR_4, VAR_2, VAR_6 | 0x80);


 FUNC_5(VAR_4, VAR_3, 0x01);


 FUNC_5(VAR_4, VAR_2, VAR_6 & 0x7f);


 VAR_6 = FUNC_2(VAR_4, VAR_1);
 FUNC_3(VAR_4, VAR_1, VAR_6 | 0x28000);


 for (VAR_5 = 0x91; VAR_5 <= 0x96; VAR_5++) {
  FUNC_3(VAR_4, VAR_5, 0);
 }


 VAR_6 = FUNC_2(VAR_4, VAR_0);
 FUNC_3(VAR_4, VAR_0, VAR_6);
 FUNC_0(FUNC_6("GCR_DMA_EMULATION 0x%08x\n", VAR_6));
 return 0;
}
