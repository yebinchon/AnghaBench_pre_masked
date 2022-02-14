
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {char* rm_descr; int rm_type; int rm_end; int rm_start; } ;
struct mvs_controller {int channels; int quirks; int ccc; int cccc; TYPE_1__ sc_iomem; int r_mem; int r_rid; int mtx; int * dev; } ;
typedef int * device_t ;
struct TYPE_6__ {scalar_t__ id; scalar_t__ rev; int ports; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int * FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 struct mvs_controller* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int FUNC_11 (int *) ;
 TYPE_4__* VAR_8 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,char*,int*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_9)
{
 struct mvs_controller *VAR_10 = FUNC_6(VAR_9);
 device_t VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15 = FUNC_14(VAR_9);
 uint8_t VAR_16 = FUNC_15(VAR_9);

 VAR_10->dev = VAR_9;
 VAR_14 = 0;
 while (VAR_8[VAR_14].id != 0 &&
     (VAR_8[VAR_14].id != VAR_15 ||
      VAR_8[VAR_14].rev > VAR_16))
  VAR_14++;
 VAR_10->channels = VAR_8[VAR_14].ports;
 VAR_10->quirks = VAR_8[VAR_14].quirks;
 VAR_10->ccc = 0;
 FUNC_16(FUNC_5(VAR_9),
     FUNC_7(VAR_9), "ccc", &VAR_10->ccc);
 VAR_10->cccc = 8;
 FUNC_16(FUNC_5(VAR_9),
     FUNC_7(VAR_9), "cccc", &VAR_10->cccc);
 if (VAR_10->ccc == 0 || VAR_10->cccc == 0) {
  VAR_10->ccc = 0;
  VAR_10->cccc = 0;
 }
 if (VAR_10->ccc > 100000)
  VAR_10->ccc = 100000;
 FUNC_8(VAR_9,
     "Gen-%s, %d %sGbps ports, Port Multiplier %s%s\n",
     ((VAR_10->quirks & VAR_2) ? "I" :
      ((VAR_10->quirks & VAR_3) ? "II" : "IIe")),
     VAR_10->channels,
     ((VAR_10->quirks & VAR_2) ? "1.5" : "3"),
     ((VAR_10->quirks & VAR_2) ?
     "not supported" : "supported"),
     ((VAR_10->quirks & VAR_4) ?
     " with FBS" : ""));
 FUNC_10(&VAR_10->mtx, "MVS controller lock", ((void*)0), VAR_1);

 VAR_10->r_rid = FUNC_0(0);
 if (!(VAR_10->r_mem = FUNC_1(VAR_9, VAR_7,
     &VAR_10->r_rid, VAR_5)))
  return VAR_0;

 VAR_10->sc_iomem.rm_start = FUNC_19(VAR_10->r_mem);
 VAR_10->sc_iomem.rm_end = FUNC_18(VAR_10->r_mem);
 VAR_10->sc_iomem.rm_type = VAR_6;
 VAR_10->sc_iomem.rm_descr = "I/O memory addresses";
 if ((VAR_12 = FUNC_20(&VAR_10->sc_iomem)) != 0) {
  FUNC_3(VAR_9, VAR_7, VAR_10->r_rid, VAR_10->r_mem);
  return (VAR_12);
 }
 if ((VAR_12 = FUNC_21(&VAR_10->sc_iomem,
     FUNC_19(VAR_10->r_mem), FUNC_18(VAR_10->r_mem))) != 0) {
  FUNC_3(VAR_9, VAR_7, VAR_10->r_rid, VAR_10->r_mem);
  FUNC_17(&VAR_10->sc_iomem);
  return (VAR_12);
 }
 FUNC_13(VAR_9);
 FUNC_11(VAR_9);

 if (FUNC_12(VAR_9)) {
  FUNC_3(VAR_9, VAR_7, VAR_10->r_rid, VAR_10->r_mem);
  FUNC_17(&VAR_10->sc_iomem);
  return VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->channels; VAR_13++) {
  VAR_11 = FUNC_4(VAR_9, "mvsch", -1);
  if (VAR_11 == ((void*)0))
   FUNC_8(VAR_9, "failed to add channel device\n");
  else
   FUNC_9(VAR_11, (void *)(intptr_t)VAR_13);
 }
 FUNC_2(VAR_9);
 return 0;
}
