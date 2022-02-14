
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {int n_alloc; struct sfxge_intr_hdl* table; int type; } ;
struct sfxge_softc {struct sfxge_intr intr; int dev; } ;
struct sfxge_intr_hdl {int eih_rid; struct resource* eih_res; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_0 (int ,int ,int*,int) ;
 struct sfxge_intr_hdl* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct sfxge_softc *VAR_7)
{
 struct sfxge_intr_hdl *VAR_8;
 struct sfxge_intr *VAR_9;
 struct resource *VAR_10;
 device_t VAR_11;
 int VAR_12;

 VAR_11 = VAR_7->dev;
 VAR_9 = &VAR_7->intr;

 VAR_12 = 0;
 VAR_10 = FUNC_0(VAR_11, VAR_6, &VAR_12,
     VAR_5 | VAR_4);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_8 = FUNC_1(sizeof(struct sfxge_intr_hdl), VAR_2, VAR_3);
 VAR_8[0].eih_rid = VAR_12;
 VAR_8[0].eih_res = VAR_10;

 VAR_9->type = VAR_0;
 VAR_9->n_alloc = 1;
 VAR_9->table = VAR_8;

 return (0);
}
