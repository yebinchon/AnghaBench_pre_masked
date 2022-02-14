
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rm_descr; int rm_type; } ;
struct ciu_softc {TYPE_1__ irq_rman; int * ciu_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ,int *,struct ciu_softc*,int *) ;
 void** VAR_12 ;
 void** VAR_13 ;
 int VAR_14 ;
 struct ciu_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_15)
{
 char VAR_16[VAR_8 + 1];
 struct ciu_softc *VAR_17;
 unsigned VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_17 = FUNC_4(VAR_15);

 VAR_20 = 0;
 VAR_17->ciu_irq = FUNC_0(VAR_15, VAR_11, &VAR_20, VAR_5,
      VAR_5, 1, VAR_9);
 if (VAR_17->ciu_irq == ((void*)0)) {
  FUNC_5(VAR_15, "could not allocate irq%d\n", VAR_5);
  return (VAR_6);
 }

 VAR_19 = FUNC_3(VAR_15, VAR_17->ciu_irq, VAR_7, VAR_14,
          ((void*)0), VAR_17, ((void*)0));
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "bus_setup_intr failed: %d\n", VAR_19);
  return (VAR_19);
 }

 VAR_17->irq_rman.rm_type = VAR_10;
 VAR_17->irq_rman.rm_descr = "CIU IRQ";

 VAR_19 = FUNC_7(&VAR_17->irq_rman);
 if (VAR_19 != 0)
  return (VAR_19);




 VAR_19 = FUNC_8(&VAR_17->irq_rman, VAR_0,
       VAR_4);
 if (VAR_19 != 0)
  return (VAR_19);

 for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
  FUNC_9(VAR_16, sizeof VAR_16, "int%d:", VAR_18 + VAR_0);
  VAR_12[VAR_18] = FUNC_6(VAR_16);
 }

 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  FUNC_9(VAR_16, sizeof VAR_16, "int%d:", VAR_18 + VAR_2);
  VAR_13[VAR_18] = FUNC_6(VAR_16);
 }

 FUNC_2(VAR_15);
 FUNC_1(VAR_15);

 return (0);
}
