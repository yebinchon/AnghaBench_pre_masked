
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ state; int n_alloc; int type; struct sfxge_intr_hdl* table; int * msix_res; int status; } ;
struct sfxge_softc {struct sfxge_intr intr; int dev; } ;
struct sfxge_intr_hdl {scalar_t__ eih_rid; int eih_res; } ;
typedef int efsys_mem_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (struct sfxge_intr_hdl*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sfxge_softc*) ;

void
FUNC_6(struct sfxge_softc *VAR_5)
{
 struct sfxge_intr_hdl *VAR_6;
 struct sfxge_intr *VAR_7;
 efsys_mem_t *VAR_8;
 device_t VAR_9;
 int VAR_10;

 VAR_9 = VAR_5->dev;
 VAR_7 = &VAR_5->intr;
 VAR_8 = &VAR_7->status;
 VAR_6 = VAR_7->table;

 FUNC_0(VAR_7->state == VAR_2,
     ("intr->state != SFXGE_INTR_INITIALIZED"));


 FUNC_4(VAR_8);


 for (VAR_10 = 0; VAR_10 < VAR_7->n_alloc; VAR_10++)
  FUNC_1(VAR_9, VAR_4,
      VAR_6[VAR_10].eih_rid, VAR_6[VAR_10].eih_res);

 if (VAR_6[0].eih_rid != 0)
  FUNC_3(VAR_9);

 if (VAR_7->msix_res != ((void*)0))
  FUNC_5(VAR_5);


 FUNC_2(VAR_6, VAR_1);
 VAR_7->table = ((void*)0);
 VAR_7->n_alloc = 0;


 VAR_7->type = VAR_0;

 VAR_7->state = VAR_3;
}
