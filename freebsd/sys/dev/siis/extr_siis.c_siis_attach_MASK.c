
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {char* rm_descr; int rm_type; int rm_end; int rm_start; } ;
struct siis_controller {int channels; TYPE_2__ sc_iomem; void* r_gmem; void* r_grid; void* r_mem; void* r_rid; int gctl; int quirks; int * dev; } ;
typedef int * device_t ;
struct TYPE_5__ {scalar_t__ id; int ports; int quirks; } ;


 int FUNC_0 (void*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int *,int ,void**,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,void*,void*) ;
 int * FUNC_5 (int *,char*,int) ;
 struct siis_controller* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int ,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_6)
{
 struct siis_controller *VAR_7 = FUNC_6(VAR_6);
 uint32_t VAR_8 = FUNC_10(VAR_6);
 device_t VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_7->dev = VAR_6;
 for (VAR_11 = 0; VAR_5[VAR_11].id != 0; VAR_11++) {
  if (VAR_5[VAR_11].id == VAR_8)
   break;
 }
 VAR_7->quirks = VAR_5[VAR_11].quirks;

 VAR_7->r_grid = FUNC_1(0);
 if (!(VAR_7->r_gmem = FUNC_2(VAR_6, VAR_4,
     &VAR_7->r_grid, VAR_1)))
  return (VAR_0);
 VAR_7->gctl = FUNC_0(VAR_7->r_gmem, VAR_3);

 VAR_7->r_rid = FUNC_1(2);
 if (!(VAR_7->r_mem = FUNC_2(VAR_6, VAR_4,
     &VAR_7->r_rid, VAR_1)))
  return (VAR_0);

 VAR_7->sc_iomem.rm_start = FUNC_13(VAR_7->r_mem);
 VAR_7->sc_iomem.rm_end = FUNC_12(VAR_7->r_mem);
 VAR_7->sc_iomem.rm_type = VAR_2;
 VAR_7->sc_iomem.rm_descr = "I/O memory addresses";
 if ((VAR_10 = FUNC_14(&VAR_7->sc_iomem)) != 0) {
  FUNC_4(VAR_6, VAR_4, VAR_7->r_rid, VAR_7->r_mem);
  FUNC_4(VAR_6, VAR_4, VAR_7->r_grid, VAR_7->r_gmem);
  return (VAR_10);
 }
 if ((VAR_10 = FUNC_15(&VAR_7->sc_iomem,
     FUNC_13(VAR_7->r_mem), FUNC_12(VAR_7->r_mem))) != 0) {
  FUNC_4(VAR_6, VAR_4, VAR_7->r_rid, VAR_7->r_mem);
  FUNC_4(VAR_6, VAR_4, VAR_7->r_grid, VAR_7->r_gmem);
  FUNC_11(&VAR_7->sc_iomem);
  return (VAR_10);
 }
 FUNC_9(VAR_6);

 FUNC_16(VAR_6);

 VAR_7->channels = VAR_5[VAR_11].ports;

 if (FUNC_17(VAR_6)) {
  FUNC_4(VAR_6, VAR_4, VAR_7->r_rid, VAR_7->r_mem);
  FUNC_4(VAR_6, VAR_4, VAR_7->r_grid, VAR_7->r_gmem);
  FUNC_11(&VAR_7->sc_iomem);
  return VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7->channels; VAR_12++) {
  VAR_9 = FUNC_5(VAR_6, "siisch", -1);
  if (VAR_9 == ((void*)0))
   FUNC_7(VAR_6, "failed to add channel device\n");
  else
   FUNC_8(VAR_9, (void *)(intptr_t)VAR_12);
 }
 FUNC_3(VAR_6);
 return 0;
}
