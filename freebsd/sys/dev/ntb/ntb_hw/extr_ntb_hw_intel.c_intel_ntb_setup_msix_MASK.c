
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ntb_softc {int device; TYPE_1__* int_info; int * msix_vec; int allocated_interrupts; } ;
struct TYPE_2__ {size_t rid; int * tag; int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,size_t*,int ) ;
 int FUNC_1 (int ,int *,int,int *,int ,int *,int **) ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct ntb_softc *VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_7->int_info[VAR_9].rid = VAR_9 + 1;
  VAR_7->int_info[VAR_9].res = FUNC_0(VAR_7->device,
      VAR_5, &VAR_7->int_info[VAR_9].rid, VAR_4);
  if (VAR_7->int_info[VAR_9].res == ((void*)0)) {
   FUNC_2(VAR_7->device,
       "bus_alloc_resource failed\n");
   return (VAR_0);
  }
  VAR_7->int_info[VAR_9].tag = ((void*)0);
  VAR_7->allocated_interrupts++;
  VAR_10 = FUNC_1(VAR_7->device, VAR_7->int_info[VAR_9].res,
      VAR_2 | VAR_3, ((void*)0), VAR_6,
      &VAR_7->msix_vec[VAR_9], &VAR_7->int_info[VAR_9].tag);
  if (VAR_10 != 0) {
   FUNC_2(VAR_7->device, "bus_setup_intr failed\n");
   return (VAR_1);
  }
 }
 return (0);
}
