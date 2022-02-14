
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {struct sfxge_intr_hdl* table; } ;
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
 struct resource* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;
 int FUNC_2 (int ,char*,int) ;
 struct sfxge_intr_hdl* FUNC_3 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct sfxge_softc *VAR_6, int VAR_7)
{
 device_t VAR_8;
 struct sfxge_intr_hdl *VAR_9;
 struct sfxge_intr *VAR_10;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = VAR_6->dev;
 VAR_10 = &VAR_6->intr;
 VAR_13 = 0;

 VAR_9 = FUNC_3(VAR_7 * sizeof(struct sfxge_intr_hdl),
     VAR_1, VAR_2);
 VAR_10->table = VAR_9;

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_12 = VAR_14 + 1;
  VAR_11 = FUNC_0(VAR_8, VAR_5, &VAR_12,
      VAR_4 | VAR_3);
  if (VAR_11 == ((void*)0)) {
   FUNC_2(VAR_8, "Couldn't allocate interrupts for "
       "message %d\n", VAR_12);
   VAR_13 = VAR_0;
   break;
  }
  VAR_9[VAR_14].eih_rid = VAR_12;
  VAR_9[VAR_14].eih_res = VAR_11;
 }

 if (VAR_13 != 0) {
  VAR_7 = VAR_14 - 1;
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
   FUNC_1(VAR_8, VAR_5,
       VAR_9[VAR_14].eih_rid, VAR_9[VAR_14].eih_res);
 }

 return (VAR_13);
}
