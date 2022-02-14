
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {int n_alloc; struct sfxge_intr_hdl* table; } ;
struct sfxge_softc {int dev; struct sfxge_intr intr; } ;
struct sfxge_intr_hdl {int eih_tag; int eih_res; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct sfxge_softc *VAR_0)
{
 struct sfxge_intr *VAR_1;
 struct sfxge_intr_hdl *VAR_2;
 int VAR_3;

 VAR_1 = &VAR_0->intr;
 VAR_2 = VAR_1->table;


 for (VAR_3 = 0; VAR_3 < VAR_1->n_alloc; VAR_3++)
  FUNC_0(VAR_0->dev, VAR_2[VAR_3].eih_res,
      VAR_2[VAR_3].eih_tag);
}
