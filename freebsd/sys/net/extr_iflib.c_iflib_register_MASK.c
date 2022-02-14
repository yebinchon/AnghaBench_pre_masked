
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int kobj_t ;
typedef int kobj_class_t ;
typedef int * if_t ;
typedef TYPE_1__* if_shared_ctx_t ;
typedef TYPE_2__* if_ctx_t ;
typedef int driver_t ;
typedef int device_t ;
struct TYPE_10__ {int * ifc_mediap; int ifc_media; void* ifc_vlan_detach_event; void* ifc_vlan_attach_event; int * ifc_ifp; int ifc_dev; TYPE_1__* ifc_sctx; } ;
struct TYPE_9__ {int isc_flags; int * isc_driver; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_19 (int *,int ,int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_22(if_ctx_t VAR_20)
{
 if_shared_ctx_t VAR_21 = VAR_20->ifc_sctx;
 driver_t *VAR_22 = VAR_21->isc_driver;
 device_t VAR_23 = VAR_20->ifc_dev;
 if_t VAR_24;

 FUNC_3(VAR_21);

 FUNC_0(VAR_20);
 FUNC_2(VAR_20, FUNC_5(VAR_20->ifc_dev));
 VAR_24 = VAR_20->ifc_ifp = FUNC_8(VAR_7);
 if (VAR_24 == ((void*)0)) {
  FUNC_7(VAR_23, "can not allocate ifnet structure\n");
  return (VAR_0);
 }




 FUNC_21((kobj_t) VAR_20, (kobj_class_t) VAR_22);
 FUNC_20((kobj_class_t) VAR_22);

 FUNC_9(VAR_24, FUNC_4(VAR_23), FUNC_6(VAR_23));
 FUNC_16(VAR_24, VAR_20);
 FUNC_10(VAR_24, VAR_23);
 FUNC_12(VAR_24, VAR_10);
 FUNC_13(VAR_24, VAR_11);





 FUNC_18(VAR_24, VAR_13);

 FUNC_14(VAR_24, VAR_12);
 FUNC_11(VAR_24, VAR_2 | VAR_4 | VAR_3);

 VAR_20->ifc_vlan_attach_event =
  FUNC_1(VAR_18, VAR_16, VAR_20,
         VAR_1);
 VAR_20->ifc_vlan_detach_event =
  FUNC_1(VAR_19, VAR_17, VAR_20,
         VAR_1);

 if ((VAR_21->isc_flags & VAR_5) == 0) {
  VAR_20->ifc_mediap = &VAR_20->ifc_media;
  FUNC_19(VAR_20->ifc_mediap, VAR_6,
      VAR_14, VAR_15);
 }
 return (0);
}
