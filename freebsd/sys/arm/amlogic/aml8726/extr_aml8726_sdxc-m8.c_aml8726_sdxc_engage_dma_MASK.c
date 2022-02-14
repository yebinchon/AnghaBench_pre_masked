
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_data {scalar_t__ len; int flags; } ;
struct aml8726_sdxc_softc {int auto_fill_flush; int dev; TYPE_1__* cmd; } ;
struct TYPE_2__ {struct mmc_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_1 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_2 (struct aml8726_sdxc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct aml8726_sdxc_softc *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 struct mmc_data *VAR_11;

 VAR_11 = VAR_7->cmd->data;

 if (VAR_11 == ((void*)0) || VAR_11->len == 0)
  return;
 VAR_9 = FUNC_1(VAR_7, VAR_1);

 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_0;

 if (VAR_7->auto_fill_flush == 1) {
  FUNC_2(VAR_7, VAR_1, VAR_9);
  FUNC_0(VAR_7, VAR_1);
  return;
 }

 if ((VAR_11->flags & VAR_6) != 0) {
  VAR_9 |= VAR_2;
  FUNC_2(VAR_7, VAR_1, VAR_9);
  FUNC_0(VAR_7, VAR_1);
 } else {
  VAR_9 |= VAR_3;
  FUNC_2(VAR_7, VAR_1, VAR_9);
  FUNC_0(VAR_7, VAR_1);




  for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
   VAR_10 = FUNC_1(VAR_7, VAR_4);
   if ((VAR_10 & VAR_5) != 0)
    break;
   FUNC_3(1);
  }
  if (VAR_8 >= 100)
   FUNC_4(VAR_7->dev, "TX FIFO fill timeout\n");
 }
}
