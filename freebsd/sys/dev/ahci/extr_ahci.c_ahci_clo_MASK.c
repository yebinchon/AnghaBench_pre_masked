
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ahci_channel {int caps; int dev; int r_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct ahci_channel *VAR_3)
{
 u_int32_t VAR_4;
 int VAR_5;


 if (VAR_3->caps & VAR_0) {
  VAR_4 = FUNC_0(VAR_3->r_mem, VAR_1);
  VAR_4 |= VAR_2;
  FUNC_1(VAR_3->r_mem, VAR_1, VAR_4);
  VAR_5 = 0;
  do {
   FUNC_2(10);
   if (VAR_5++ > 50000) {
       FUNC_3(VAR_3->dev, "executing CLO failed\n");
       break;
   }
  } while (FUNC_0(VAR_3->r_mem, VAR_1) & VAR_2);
 }
}
