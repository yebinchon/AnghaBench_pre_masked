
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rm_end; char* rm_descr; void* rm_type; scalar_t__ rm_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 TYPE_1__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 VAR_10.rm_start = 0;
 VAR_10.rm_end = 255;
 VAR_10.rm_type = VAR_8;
 VAR_10.rm_descr = "PCI Mapped Interrupts";
 if (FUNC_1(&VAR_10)
     || FUNC_2(&VAR_10, 0, 255))
  FUNC_0("xlp_simplebus_init_resources irq_rman");

 VAR_13.rm_type = VAR_8;
 VAR_13.rm_descr = "I/O ports";
 if (FUNC_1(&VAR_13)
     || FUNC_2(&VAR_13, VAR_2, VAR_3))
  FUNC_0("xlp_simplebus_init_resources port_rman");

 VAR_11.rm_type = VAR_8;
 VAR_11.rm_descr = "I/O memory";
 if (FUNC_1(&VAR_11)
     || FUNC_2(&VAR_11, VAR_4, VAR_5))
  FUNC_0("xlp_simplebus_init_resources mem_rman");

 VAR_12.rm_type = VAR_8;
 VAR_12.rm_descr = "PCI ECFG IO";
 if (FUNC_1(&VAR_12) || FUNC_2(&VAR_12,
     VAR_6, VAR_7))
  FUNC_0("xlp_simplebus_init_resources pci_ecfg_rman");

 VAR_9.rm_type = VAR_8;
 VAR_9.rm_descr = "Flash region";
 if (FUNC_1(&VAR_9)
     || FUNC_2(&VAR_9, VAR_0, VAR_1))
  FUNC_0("xlp_simplebus_init_resources gbu_rman");
}
