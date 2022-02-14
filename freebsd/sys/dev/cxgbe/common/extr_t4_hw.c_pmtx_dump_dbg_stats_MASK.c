
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct adapter*,char*,int,scalar_t__,int ) ;
 int FUNC_2 (struct adapter*,int ,int ,int *,int,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct adapter *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;
 u32 VAR_7[17];

 FUNC_2(VAR_3, VAR_0, VAR_1, &VAR_7[0],
     FUNC_0(VAR_7), VAR_2);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); VAR_6++) {
  FUNC_1(VAR_3, "  - PM_TX_DBG_STAT%u (0x%x) = 0x%08x\n", VAR_6,
      VAR_2 + VAR_6, VAR_7[VAR_6]);
 }

 return (0);
}
