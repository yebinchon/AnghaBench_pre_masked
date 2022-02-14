
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int caps; } ;
struct dwmmc_softc {int max_hz; int fifo_depth; int num_slots; scalar_t__ bus_hz; int dev; int * hwreset; scalar_t__ ciu; scalar_t__ biu; int vqmmc; int vmmc; TYPE_1__ host; } ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,char*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,char*,int **) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_12(struct dwmmc_softc *VAR_5)
{
 pcell_t VAR_6[3];
 phandle_t VAR_7;
 uint32_t VAR_8 = 0, VAR_9;
 int VAR_10;




 if ((VAR_7 = FUNC_10(VAR_5->dev)) == -1)
  return (VAR_2);


 if (FUNC_0(VAR_7, "bus-width", &VAR_9, sizeof(uint32_t)) <= 0)
  VAR_9 = 4;
 if (VAR_9 >= 4)
  VAR_5->host.caps |= VAR_3;
 if (VAR_9 >= 8)
  VAR_5->host.caps |= VAR_4;


 if (FUNC_0(VAR_7, "max-frequency", &VAR_5->max_hz, sizeof(uint32_t)) <= 0)
  VAR_5->max_hz = 200000000;


 if ((VAR_10 = FUNC_1(VAR_7, "fifo-depth")) > 0) {
  FUNC_0(VAR_7, "fifo-depth", VAR_6, VAR_10);
  VAR_5->fifo_depth = VAR_6[0];
 }


 VAR_5->num_slots = 1;
 if ((VAR_10 = FUNC_1(VAR_7, "num-slots")) > 0) {
  FUNC_6(VAR_5->dev, "num-slots property is deprecated\n");
  FUNC_0(VAR_7, "num-slots", VAR_6, VAR_10);
  VAR_5->num_slots = VAR_6[0];
 }


 if ((VAR_10 = FUNC_1(VAR_7, "clock-frequency")) > 0) {
  FUNC_0(VAR_7, "clock-frequency", VAR_6, VAR_10);
  VAR_8 = VAR_6[0];
 }
 if (VAR_5->bus_hz == 0) {
  FUNC_6(VAR_5->dev, "No bus speed provided\n");
  goto fail;
 }

 return (0);

fail:
 return (VAR_2);
}
