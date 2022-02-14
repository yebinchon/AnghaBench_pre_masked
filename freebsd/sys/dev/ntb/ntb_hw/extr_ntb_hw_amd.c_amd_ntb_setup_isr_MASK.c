
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct amd_ntb_softc {TYPE_1__* int_info; struct amd_ntb_softc* msix_vec; int device; int allocated_interrupts; } ;
struct TYPE_2__ {size_t rid; int * tag; int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;
 int * FUNC_1 (int ,int ,size_t*,int) ;
 int FUNC_2 (int ,int *,int,int *,int ,struct amd_ntb_softc*,int **) ;

__attribute__((used)) static int
FUNC_3(struct amd_ntb_softc *VAR_9, uint16_t VAR_10, bool VAR_11,
    bool VAR_12)
{
 uint16_t VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 VAR_14 |= VAR_4;
 if (VAR_12)
  VAR_14 |= VAR_5;

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {


  if (VAR_12)
   VAR_9->int_info[VAR_13].rid = VAR_13;
  else
   VAR_9->int_info[VAR_13].rid = VAR_13 + 1;

  VAR_9->int_info[VAR_13].res = FUNC_1(VAR_9->device,
      VAR_6, &VAR_9->int_info[VAR_13].rid, VAR_14);
  if (VAR_9->int_info[VAR_13].res == ((void*)0)) {
   FUNC_0(0, "bus_alloc_resource IRQ failed\n");
   return (VAR_0);
  }

  VAR_9->int_info[VAR_13].tag = ((void*)0);
  VAR_9->allocated_interrupts++;

  if (VAR_11 || VAR_12) {
   VAR_15 = FUNC_2(VAR_9->device, VAR_9->int_info[VAR_13].res,
       VAR_2 | VAR_3, ((void*)0), VAR_7,
       VAR_9, &VAR_9->int_info[VAR_13].tag);
  } else {
   VAR_15 = FUNC_2(VAR_9->device, VAR_9->int_info[VAR_13].res,
       VAR_2 | VAR_3, ((void*)0), VAR_8,
       &VAR_9->msix_vec[VAR_13], &VAR_9->int_info[VAR_13].tag);
  }

  if (VAR_15 != 0) {
   FUNC_0(0, "bus_setup_intr %d failed\n", VAR_13);
   return (VAR_1);
  }
 }

 return (0);
}
