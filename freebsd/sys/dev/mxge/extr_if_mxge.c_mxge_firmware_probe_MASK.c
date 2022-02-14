
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int tx_boundary; int dev; int fw_name; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int
FUNC_7(mxge_softc_t *VAR_6)
{
 device_t VAR_7 = VAR_6->dev;
 int VAR_8, VAR_9;
 uint16_t VAR_10;

 VAR_6->tx_boundary = 4096;




 if (FUNC_4(VAR_7, VAR_4, &VAR_8) == 0) {
  VAR_10 = FUNC_6(VAR_7, VAR_8 + 0x8, 2);
  if ((VAR_10 & (5 << 12)) != (5 << 12)) {
   FUNC_0(VAR_7, "Max Read Req. size != 4k (0x%x\n",
          VAR_10);
   VAR_6->tx_boundary = 2048;
  }
 }





 VAR_6->fw_name = VAR_5;
 VAR_9 = FUNC_3(VAR_6, 1);
 if (VAR_9 != 0) {
  return VAR_9;
 }




 FUNC_2(VAR_6);





 if (FUNC_5(VAR_6->dev) >= VAR_3)
  return 0;
 VAR_9 = FUNC_1(VAR_6, VAR_2);
 if (VAR_9 == 0)
  return 0;

 if (VAR_9 != VAR_0)
  FUNC_0(VAR_7, "DMA test failed: %d\n", VAR_9);
 if (VAR_9 == VAR_1)
  FUNC_0(VAR_7, "Falling back to ethp! "
         "Please install up to date fw\n");
 return VAR_9;
}
