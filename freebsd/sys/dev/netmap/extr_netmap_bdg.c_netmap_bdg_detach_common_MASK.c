
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* dtor ) (int *) ;} ;
struct nm_bridge {int bdg_active_ports; int* tmp_bdg_port_index; int* bdg_port_index; int ** bdg_ports; TYPE_1__ bdg_ops; } ;


 int FUNC_0 (struct nm_bridge*) ;
 int FUNC_1 (struct nm_bridge*) ;
 int VAR_0 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct nm_bridge*) ;
 int VAR_1 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct nm_bridge *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3, VAR_6 = VAR_4;
 int VAR_7, VAR_8 =VAR_2->bdg_active_ports;
 uint32_t *VAR_9 = VAR_2->tmp_bdg_port_index;
 if (VAR_1 & VAR_0)
  FUNC_6("detach %d and %d (lim %d)", VAR_3, VAR_4, VAR_8);



 FUNC_2(VAR_2->tmp_bdg_port_index, VAR_2->bdg_port_index, sizeof(VAR_2->tmp_bdg_port_index));
 for (VAR_7 = 0; (VAR_3 >= 0 || VAR_4 >= 0) && VAR_7 < VAR_8; ) {
  if (VAR_3 >= 0 && VAR_9[VAR_7] == VAR_3) {
   FUNC_4("detach hw %d at %d", VAR_3, VAR_7);
   VAR_8--;
   VAR_9[VAR_7] = VAR_9[VAR_8];
   VAR_9[VAR_8] = VAR_3;
   VAR_3 = -1;
  } else if (VAR_4 >= 0 && VAR_9[VAR_7] == VAR_4) {
   FUNC_4("detach sw %d at %d", VAR_4, VAR_7);
   VAR_8--;
   VAR_9[VAR_7] = VAR_9[VAR_8];
   VAR_9[VAR_8] = VAR_4;
   VAR_4 = -1;
  } else {
   VAR_7++;
  }
 }
 if (VAR_3 >= 0 || VAR_4 >= 0) {
  FUNC_5("delete failed hw %d sw %d, should panic...", VAR_3, VAR_4);
 }

 FUNC_0(VAR_2);
 if (VAR_2->bdg_ops.dtor)
  VAR_2->bdg_ops.dtor(VAR_2->bdg_ports[VAR_5]);
 VAR_2->bdg_ports[VAR_5] = ((void*)0);
 if (VAR_6 >= 0) {
  VAR_2->bdg_ports[VAR_6] = ((void*)0);
 }
 FUNC_2(VAR_2->bdg_port_index, VAR_2->tmp_bdg_port_index, sizeof(VAR_2->tmp_bdg_port_index));
 VAR_2->bdg_active_ports = VAR_8;
 FUNC_1(VAR_2);

 FUNC_4("now %d active ports", VAR_8);
 FUNC_3(VAR_2);
}
