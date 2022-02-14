
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct obio_softc {int oba_addr; int oba_size; TYPE_1__ oba_irq_rman; TYPE_1__ oba_rman; int oba_st; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 struct obio_softc* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int) ;

int
FUNC_8(device_t VAR_4)
{
 struct obio_softc *VAR_5 = FUNC_4(VAR_4);

 VAR_5->oba_st = VAR_3;
 VAR_5->oba_addr = FUNC_0(VAR_1);
 VAR_5->oba_size = VAR_0;
 VAR_5->oba_rman.rm_type = VAR_2;
 VAR_5->oba_rman.rm_descr = "OBIO I/O";
 if (FUNC_6(&VAR_5->oba_rman) != 0 ||
     FUNC_7(&VAR_5->oba_rman,
     VAR_5->oba_addr, VAR_5->oba_addr + VAR_5->oba_size) != 0)
  FUNC_5("obio_attach: failed to set up I/O rman");
 VAR_5->oba_irq_rman.rm_type = VAR_2;
 VAR_5->oba_irq_rman.rm_descr = "OBIO IRQ";





 if (FUNC_6(&VAR_5->oba_irq_rman) != 0 ||
     FUNC_7(&VAR_5->oba_irq_rman, 4, 4) != 0)
  FUNC_5("obio_attach: failed to set up IRQ rman");

 FUNC_3(VAR_4, "uart", 0);
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 return (0);
}
