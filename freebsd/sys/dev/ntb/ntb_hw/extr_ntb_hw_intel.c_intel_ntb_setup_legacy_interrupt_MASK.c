
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_softc {int allocated_interrupts; int device; TYPE_1__* int_info; } ;
struct TYPE_2__ {int * tag; int * res; scalar_t__ rid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct ntb_softc*,int **) ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(struct ntb_softc *VAR_8)
{
 int VAR_9;

 VAR_8->int_info[0].rid = 0;
 VAR_8->int_info[0].res = FUNC_0(VAR_8->device, VAR_6,
     &VAR_8->int_info[0].rid, VAR_5|VAR_4);
 if (VAR_8->int_info[0].res == ((void*)0)) {
  FUNC_2(VAR_8->device, "bus_alloc_resource failed\n");
  return (VAR_0);
 }

 VAR_8->int_info[0].tag = ((void*)0);
 VAR_8->allocated_interrupts = 1;

 VAR_9 = FUNC_1(VAR_8->device, VAR_8->int_info[0].res,
     VAR_2 | VAR_3, ((void*)0), VAR_7,
     VAR_8, &VAR_8->int_info[0].tag);
 if (VAR_9 != 0) {
  FUNC_2(VAR_8->device, "bus_setup_intr failed\n");
  return (VAR_1);
 }

 return (0);
}
