
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_migration_delay; } ;
struct bstp_port {int bp_path_cost; int bp_protover; int bp_flags; int bp_migrate_delay_timer; int bp_operedge; struct bstp_state* bp_bs; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bstp_port *VAR_1, int VAR_2)
{
 struct bstp_state *VAR_3 = VAR_1->bp_bs;


 switch (VAR_2) {
  case 128:

   FUNC_2(&VAR_1->bp_migrate_delay_timer);

   VAR_1->bp_operedge = 0;

   if (VAR_1->bp_path_cost > 65535)
    VAR_1->bp_path_cost = 65535;
   break;

  case 129:
   FUNC_1(&VAR_1->bp_migrate_delay_timer,
       VAR_3->bs_migration_delay);
   break;

  default:
   FUNC_0("Unsupported STP version %d\n", VAR_2);
   return;
 }

 VAR_1->bp_protover = VAR_2;
 VAR_1->bp_flags &= ~VAR_0;
}
