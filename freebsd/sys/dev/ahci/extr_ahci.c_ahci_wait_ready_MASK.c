
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ahci_channel {int dev; int r_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_4(struct ahci_channel *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 uint32_t VAR_9;

 while ((VAR_9 = FUNC_0(VAR_5->r_mem, VAR_0)) &
     (VAR_1 | VAR_2)) {
  if (VAR_8 > VAR_6) {
   if (VAR_6 != 0) {
    FUNC_3(VAR_5->dev,
        "AHCI reset: device not ready after %dms "
        "(tfd = %08x)\n",
        FUNC_2(VAR_6, 0) + VAR_7, VAR_9);
   }
   return (VAR_3);
  }
  FUNC_1(1000);
  VAR_8++;
 }
 if (VAR_4)
  FUNC_3(VAR_5->dev, "AHCI reset: device ready after %dms\n",
      VAR_8 + VAR_7);
 return (0);
}
