
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int topology; } ;
struct TYPE_11__ {TYPE_2__ config; int os; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_10__ {void* select_hightest_al_pa; void* skip_lisa; void* gen_loop_validity_check; void* skip_lirp_lilp; void* unfair; int topology; void* enable_topology_failover; void* fixed_speed; void* loopback; } ;
struct TYPE_8__ {int command; } ;
struct TYPE_12__ {int link_speed_selection_code; TYPE_3__ link_flags; int selective_reset_al_pa; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_cmd_init_link_t ;
typedef int int32_t ;


 void* VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;


 void* VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 (TYPE_4__*) ;

int32_t
FUNC_3(sli4_t *VAR_9, void *VAR_10, size_t VAR_11, uint32_t VAR_12, uint8_t VAR_13)
{
 sli4_cmd_init_link_t *VAR_14 = VAR_10;

 FUNC_1(VAR_10, 0, VAR_11);

 VAR_14->hdr.command = VAR_6;


 if (VAR_9->config.topology != VAR_7) {
  VAR_14->selective_reset_al_pa = VAR_13;
  VAR_14->link_flags.loopback = VAR_0;

  VAR_14->link_speed_selection_code = VAR_12;
  switch (VAR_12) {
  case 135:
  case 134:
  case 132:
  case 131:
  case 136:
  case 133:
   VAR_14->link_flags.fixed_speed = VAR_8;
   break;
  case 137:
   FUNC_0(VAR_9->os, "unsupported FC speed %d\n", VAR_12);
   return 0;
  }

  switch (VAR_9->config.topology) {
  case 130:

   VAR_14->link_flags.enable_topology_failover = VAR_8;

   if (FUNC_2(VAR_9) == VAR_2)
    VAR_14->link_flags.topology = VAR_3;
   else
    VAR_14->link_flags.topology = VAR_5;

   break;
  case 129:
   VAR_14->link_flags.topology = VAR_4;
   if ((VAR_14->link_speed_selection_code == 136) ||
       (VAR_14->link_speed_selection_code == 133)) {
    FUNC_0(VAR_9->os, "unsupported FC-AL speed %d\n", VAR_12);
    return 0;
   }
   break;
  case 128:
   VAR_14->link_flags.topology = VAR_1;
   break;
  default:
   FUNC_0(VAR_9->os, "unsupported topology %#x\n", VAR_9->config.topology);
   return 0;
  }

  VAR_14->link_flags.unfair = VAR_0;
  VAR_14->link_flags.skip_lirp_lilp = VAR_0;
  VAR_14->link_flags.gen_loop_validity_check = VAR_0;
  VAR_14->link_flags.skip_lisa = VAR_0;
  VAR_14->link_flags.select_hightest_al_pa = VAR_0;
 }

 return sizeof(sli4_cmd_init_link_t);
}
