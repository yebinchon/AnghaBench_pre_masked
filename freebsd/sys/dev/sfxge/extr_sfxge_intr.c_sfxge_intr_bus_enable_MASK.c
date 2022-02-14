
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {int type; int n_alloc; struct sfxge_intr_hdl* table; } ;
struct sfxge_softc {int dev; int * evq; struct sfxge_intr intr; } ;
struct sfxge_intr_hdl {int eih_tag; int eih_res; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,int,int *,int *,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct sfxge_softc *VAR_6)
{
 struct sfxge_intr *VAR_7;
 struct sfxge_intr_hdl *VAR_8;
 driver_filter_t *VAR_9;
 driver_intr_t *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = &VAR_6->intr;
 VAR_8 = VAR_7->table;

 switch (VAR_7->type) {
 case 128:
  VAR_9 = ((void*)0);
  VAR_10 = VAR_5;
  break;

 case 129:
  VAR_9 = VAR_4;
  VAR_10 = VAR_3;
  break;

 default:
  FUNC_0(0, ("Invalid interrupt type"));
  return (VAR_0);
 }


 for (VAR_11 = 0; VAR_11 < VAR_7->n_alloc; VAR_11++) {
  if ((VAR_12 = FUNC_3(VAR_6->dev, VAR_8[VAR_11].eih_res,
       VAR_1|VAR_2, VAR_9, VAR_10,
       VAR_6->evq[VAR_11], &VAR_8[VAR_11].eih_tag)) != 0) {
   goto fail;
  }
  FUNC_1(VAR_6->dev, VAR_8[VAR_11].eih_res, VAR_11);


 }

 return (0);

fail:

 while (--VAR_11 >= 0)
  FUNC_4(VAR_6->dev, VAR_8[VAR_11].eih_res,
      VAR_8[VAR_11].eih_tag);

 return (VAR_12);
}
