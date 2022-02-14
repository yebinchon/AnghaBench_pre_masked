
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ahci_channel {int r_mem; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_4(struct ahci_channel *VAR_11)
{
 u_int32_t VAR_12;
 int VAR_13, VAR_14 = 0;


 for (VAR_13 = 0; VAR_13 < 1000 ; VAR_13++) {
  VAR_12 = FUNC_0(VAR_11->r_mem, VAR_1);
  if ((VAR_12 & VAR_2) != VAR_3)
   VAR_14 = 1;
  if (((VAR_12 & VAR_2) == VAR_5) &&
      ((VAR_12 & VAR_8) != VAR_9) &&
      ((VAR_12 & VAR_7) == VAR_6))
   break;
  if ((VAR_12 & VAR_2) == VAR_4) {
   if (VAR_10) {
    FUNC_3(VAR_11->dev, "SATA offline status=%08x\n",
        VAR_12);
   }
   return (0);
  }
  if (VAR_14 == 0 && VAR_13 >= 100)
   break;
  FUNC_2(100);
 }
 if (VAR_13 >= 1000 || !VAR_14) {
  if (VAR_10) {
   FUNC_3(VAR_11->dev,
       "SATA connect timeout time=%dus status=%08x\n",
       VAR_13 * 100, VAR_12);
  }
  return (0);
 }
 if (VAR_10) {
  FUNC_3(VAR_11->dev, "SATA connect time=%dus status=%08x\n",
      VAR_13 * 100, VAR_12);
 }

 FUNC_1(VAR_11->r_mem, VAR_0, 0xffffffff);
 return (1);
}
