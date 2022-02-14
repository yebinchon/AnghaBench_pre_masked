
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {char* rm_descr; int rm_type; int rm_end; int rm_start; } ;
struct mvs_controller {int channels; int quirks; int ccc; int cccc; TYPE_1__ sc_iomem; int r_mem; scalar_t__ r_rid; int mtx; int * dev; } ;
typedef int * device_t ;
struct TYPE_6__ {scalar_t__ id; scalar_t__ rev; int ports; int quirks; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,scalar_t__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 int * FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 struct mvs_controller* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int *) ;
 TYPE_4__* VAR_10 ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,char*,int*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int ,int ) ;
 int FUNC_20 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_11)
{
 struct mvs_controller *VAR_12 = FUNC_7(VAR_11);
 device_t VAR_13;
 int VAR_14, VAR_15, VAR_16;
 uint32_t VAR_17, VAR_18;

 FUNC_20(&VAR_17, &VAR_18);
 VAR_12->dev = VAR_11;
 VAR_16 = 0;
 while (VAR_10[VAR_16].id != 0 &&
     (VAR_10[VAR_16].id != VAR_17 ||
      VAR_10[VAR_16].rev > VAR_18))
  VAR_16++;
 VAR_12->channels = VAR_10[VAR_16].ports;
 VAR_12->quirks = VAR_10[VAR_16].quirks;
 VAR_12->ccc = 0;
 FUNC_14(FUNC_6(VAR_11),
     FUNC_8(VAR_11), "ccc", &VAR_12->ccc);
 VAR_12->cccc = 8;
 FUNC_14(FUNC_6(VAR_11),
     FUNC_8(VAR_11), "cccc", &VAR_12->cccc);
 if (VAR_12->ccc == 0 || VAR_12->cccc == 0) {
  VAR_12->ccc = 0;
  VAR_12->cccc = 0;
 }
 if (VAR_12->ccc > 100000)
  VAR_12->ccc = 100000;
 FUNC_9(VAR_11,
     "Gen-%s, %d %sGbps ports, Port Multiplier %s%s\n",
     ((VAR_12->quirks & VAR_2) ? "I" :
      ((VAR_12->quirks & VAR_3) ? "II" : "IIe")),
     VAR_12->channels,
     ((VAR_12->quirks & VAR_2) ? "1.5" : "3"),
     ((VAR_12->quirks & VAR_2) ?
     "not supported" : "supported"),
     ((VAR_12->quirks & VAR_4) ?
     " with FBS" : ""));
 FUNC_11(&VAR_12->mtx, "MVS controller lock", ((void*)0), VAR_1);

 VAR_12->r_rid = 0;
 if (!(VAR_12->r_mem = FUNC_2(VAR_11, VAR_9,
     &VAR_12->r_rid, VAR_6)))
  return VAR_0;
 if (FUNC_0(VAR_12->r_mem, FUNC_1(0) + VAR_8) != 0)
  VAR_12->quirks |= VAR_5;

 VAR_12->sc_iomem.rm_start = FUNC_17(VAR_12->r_mem);
 VAR_12->sc_iomem.rm_end = FUNC_16(VAR_12->r_mem);
 VAR_12->sc_iomem.rm_type = VAR_7;
 VAR_12->sc_iomem.rm_descr = "I/O memory addresses";
 if ((VAR_14 = FUNC_18(&VAR_12->sc_iomem)) != 0) {
  FUNC_4(VAR_11, VAR_9, VAR_12->r_rid, VAR_12->r_mem);
  return (VAR_14);
 }
 if ((VAR_14 = FUNC_19(&VAR_12->sc_iomem,
     FUNC_17(VAR_12->r_mem), FUNC_16(VAR_12->r_mem))) != 0) {
  FUNC_4(VAR_11, VAR_9, VAR_12->r_rid, VAR_12->r_mem);
  FUNC_15(&VAR_12->sc_iomem);
  return (VAR_14);
 }
 FUNC_12(VAR_11);

 if (FUNC_13(VAR_11)) {
  FUNC_4(VAR_11, VAR_9, VAR_12->r_rid, VAR_12->r_mem);
  FUNC_15(&VAR_12->sc_iomem);
  return VAR_0;
 }

 for (VAR_15 = 0; VAR_15 < VAR_12->channels; VAR_15++) {
  VAR_13 = FUNC_5(VAR_11, "mvsch", -1);
  if (VAR_13 == ((void*)0))
   FUNC_9(VAR_11, "failed to add channel device\n");
  else
   FUNC_10(VAR_13, (void *)(intptr_t)VAR_15);
 }
 FUNC_3(VAR_11);
 return 0;
}
