
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ichwd_softc {scalar_t__ smi_enabled; scalar_t__ gc_res; int gc_rid; scalar_t__ gcs_res; int gcs_rid; int ich; scalar_t__ smi_res; int smi_rid; scalar_t__ tco_res; int tco_rid; int * ev_tag; scalar_t__ active; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 struct ichwd_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct ichwd_softc*) ;
 int FUNC_4 (struct ichwd_softc*) ;
 int FUNC_5 (struct ichwd_softc*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct ichwd_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);


 if (VAR_4->active)
  FUNC_5(VAR_4);


 if (VAR_4->smi_enabled != 0)
  FUNC_3(VAR_4);


 if (VAR_4->ev_tag != ((void*)0))
  FUNC_0(VAR_2, VAR_4->ev_tag);
 VAR_4->ev_tag = ((void*)0);


 FUNC_4(VAR_4);


 FUNC_1(VAR_3, VAR_0, VAR_4->tco_rid, VAR_4->tco_res);
 FUNC_1(VAR_3, VAR_0, VAR_4->smi_rid, VAR_4->smi_res);


 if (VAR_4->gcs_res)
  FUNC_1(VAR_4->ich, VAR_1, VAR_4->gcs_rid,
      VAR_4->gcs_res);
 if (VAR_4->gc_res)
  FUNC_1(VAR_3, VAR_1, VAR_4->gc_rid,
      VAR_4->gc_res);

 return (0);
}
