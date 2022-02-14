
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_softc {struct bhndb_resources* bus_res; } ;
struct bhndb_resources {size_t dwa_count; struct bhndb_dw_alloc* dw_alloc; } ;
struct bhndb_dw_alloc {int target; int win; } ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct bhndb_softc*) ;
 scalar_t__ FUNC_3 (struct bhndb_resources*,struct bhndb_dw_alloc*) ;
 int FUNC_4 (int ) ;
 struct bhndb_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;

int
FUNC_7(device_t VAR_0)
{
 struct bhndb_softc *VAR_1;
 struct bhndb_resources *VAR_2;
 struct bhndb_dw_alloc *VAR_3;
 int VAR_4;

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = VAR_1->bus_res;



 FUNC_0(VAR_1);
 VAR_4 = 0;
 for (size_t VAR_5 = 0; VAR_5 < VAR_2->dwa_count; VAR_5++) {
  VAR_3 = &VAR_2->dw_alloc[VAR_5];


  if (FUNC_3(VAR_2, VAR_3) && VAR_3->target == 0x0)
   continue;



  VAR_4 = FUNC_1(VAR_0, VAR_3->win, VAR_3->target);
  if (VAR_4)
   break;
 }
 FUNC_2(VAR_1);


 if (VAR_4) {
  FUNC_6(VAR_0, "Unable to restore hardware configuration; "
      "cannot resume: %d\n", VAR_4);
  return (VAR_4);
 }

 return (FUNC_4(VAR_0));
}
