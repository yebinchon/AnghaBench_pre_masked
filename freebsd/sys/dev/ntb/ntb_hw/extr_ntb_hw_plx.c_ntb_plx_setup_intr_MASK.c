
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_plx_softc {int link; int int_tag; int * int_res; scalar_t__ int_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ntb_plx_softc*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,scalar_t__*,int) ;
 int FUNC_2 (int ,int *,int,int *,int ,int ,int *) ;
 struct ntb_plx_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 struct ntb_plx_softc *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;
 VAR_8->int_rid = 0;
 VAR_8->int_res = FUNC_1(VAR_7, VAR_5,
     &VAR_8->int_rid, VAR_4|VAR_3);
 if (VAR_8->int_res == ((void*)0)) {
  FUNC_4(VAR_7, "bus_alloc_resource failed\n");
  return (VAR_0);
 }
 VAR_9 = FUNC_2(VAR_7, VAR_8->int_res, VAR_1 | VAR_2,
     ((void*)0), VAR_6, VAR_7, &VAR_8->int_tag);
 if (VAR_9 != 0) {
  FUNC_4(VAR_7, "bus_setup_intr failed: %d\n", VAR_9);
  return (VAR_9);
 }

 if (!VAR_8->link) {
  FUNC_0(VAR_8, 0xfe0, 0xf);
  FUNC_0(VAR_8, 0xfe4, 0x0);
 }
 return (0);
}
