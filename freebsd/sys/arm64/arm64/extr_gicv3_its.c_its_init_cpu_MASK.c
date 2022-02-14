
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef size_t u_int ;
struct redist_pcpu {int lpi_enabled; int res; } ;
struct gicv3_its_softc {TYPE_1__** sc_its_cols; int sc_cpus; } ;
typedef int device_t ;
struct TYPE_3__ {size_t col_id; int col_target; } ;


 int FUNC_0 (size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gicv3_its_softc*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct redist_pcpu* FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*,int) ;
 int FUNC_10 (int ,struct gicv3_its_softc*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_5, struct gicv3_its_softc *VAR_6)
{
 device_t VAR_7;
 vm_paddr_t VAR_8;
 u_int VAR_9;
 struct redist_pcpu *VAR_10;

 VAR_7 = FUNC_3(VAR_5);
 VAR_9 = FUNC_2(VAR_9);
 if (!FUNC_0(VAR_9, &VAR_6->sc_cpus))
  return (0);


 if ((FUNC_5(VAR_7, VAR_1) & VAR_2) == 0)
  return (VAR_0);

 VAR_10 = FUNC_7(VAR_5);


 if (!VAR_10->lpi_enabled) {
  FUNC_10(VAR_5, VAR_6);
  VAR_10->lpi_enabled = 1;
 }

 if ((FUNC_4(VAR_6, VAR_3) & VAR_4) != 0) {

  VAR_8 = FUNC_12(FUNC_11(&VAR_10->res));
 } else {

  VAR_8 = FUNC_1(FUNC_6(VAR_7, VAR_1));
 }

 VAR_6->sc_its_cols[VAR_9]->col_target = VAR_8;
 VAR_6->sc_its_cols[VAR_9]->col_id = VAR_9;

 FUNC_9(VAR_5, VAR_6->sc_its_cols[VAR_9], 1);
 FUNC_8(VAR_5, VAR_6->sc_its_cols[VAR_9]);

 return (0);
}
