
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ichwd_softc {int * gc_res; int gc_rid; int * gcs_res; int gcs_rid; int ich; int * smi_res; int smi_rid; int * tco_res; int tco_rid; int smi_enabled; int ev_tag; int device; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ichwd_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct ichwd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct ichwd_softc*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ichwd_softc*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ichwd_softc*) ;
 int FUNC_9 (struct ichwd_softc*) ;
 int FUNC_10 (struct ichwd_softc*) ;
 int FUNC_11 (struct ichwd_softc*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct ichwd_softc *VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->device = VAR_7;

 if (FUNC_5(VAR_7) != 0 && FUNC_7(VAR_7) != 0)
  goto fail;

 if (FUNC_4(VAR_8) != 0)
  goto fail;






 if ((FUNC_6(VAR_8, VAR_3) & VAR_4) != 0)
  FUNC_3(VAR_7,
      "resuming after hardware watchdog timeout\n");


 FUNC_10(VAR_8);


 FUNC_11(VAR_8);


 VAR_8->ev_tag = FUNC_0(VAR_6, VAR_5, VAR_8, 0);


 VAR_8->smi_enabled = FUNC_9(VAR_8);
 FUNC_8(VAR_8);

 return (0);
 fail:
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8->tco_res != ((void*)0))
  FUNC_1(VAR_7, VAR_1,
      VAR_8->tco_rid, VAR_8->tco_res);
 if (VAR_8->smi_res != ((void*)0))
  FUNC_1(VAR_7, VAR_1,
      VAR_8->smi_rid, VAR_8->smi_res);
 if (VAR_8->gcs_res != ((void*)0))
  FUNC_1(VAR_8->ich, VAR_2,
      VAR_8->gcs_rid, VAR_8->gcs_res);
 if (VAR_8->gc_res != ((void*)0))
  FUNC_1(VAR_7, VAR_2,
      VAR_8->gc_rid, VAR_8->gc_res);

 return (VAR_0);
}
