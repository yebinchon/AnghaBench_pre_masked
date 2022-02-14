
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int register_t ;
typedef int bus_space_tag_t ;
typedef void* bus_space_handle_t ;
struct TYPE_7__ {scalar_t__ max_qcount; scalar_t__ qcount; scalar_t__ call_count; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_6__ {scalar_t__ max_qcount; scalar_t__ qcount; scalar_t__ call_count; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_8__ {scalar_t__ ioh0; int command_byte; int retry; int quirks; void* ioh1; int iot; TYPE_2__ aux; TYPE_1__ kbd; void* aux_mux_enabled; void* lock; scalar_t__ command_mask; } ;
typedef TYPE_3__ atkbdc_softc_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(atkbdc_softc_t *VAR_2, bus_space_tag_t VAR_3, bus_space_handle_t VAR_4,
      bus_space_handle_t VAR_5)
{

 u_int64_t VAR_6[3], VAR_7;
 register_t VAR_8;


 if (VAR_2->ioh0 == 0) {
     VAR_2->command_byte = -1;
     VAR_2->command_mask = 0;
     VAR_2->lock = VAR_0;
     VAR_2->kbd.head = VAR_2->kbd.tail = 0;
     VAR_2->aux.head = VAR_2->aux.tail = 0;
     VAR_2->aux_mux_enabled = VAR_0;






 }
 VAR_2->iot = VAR_3;
 VAR_2->ioh0 = VAR_4;
 VAR_2->ioh1 = VAR_5;
 VAR_8 = FUNC_2();
 VAR_6[0] = FUNC_4();
 FUNC_5(VAR_2);
 VAR_6[1] = FUNC_4();
 FUNC_0(1000);
 VAR_6[2] = FUNC_4();
 FUNC_3(VAR_8);
 VAR_7 = VAR_6[1] - VAR_6[0];
 VAR_7 /= (VAR_6[2] - VAR_6[1]) / 1000;
 VAR_2->retry = 100000 / ((VAR_1 * 2) + VAR_7);



 VAR_2->quirks = FUNC_1();

 return 0;
}
