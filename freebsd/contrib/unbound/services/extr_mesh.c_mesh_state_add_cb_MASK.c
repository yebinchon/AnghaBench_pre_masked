
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_2__ {int region; } ;
struct mesh_state {struct mesh_cb* cb_list; TYPE_1__ s; } ;
struct edns_data {scalar_t__ opt_list; } ;
struct mesh_cb {struct mesh_cb* next; void* qflags; void* qid; struct edns_data edns; void* cb_arg; int cb; int * buf; } ;
typedef int sldns_buffer ;
typedef int mesh_cb_func_type ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mesh_cb* FUNC_3 (int ,int) ;

int FUNC_4(struct mesh_state* VAR_0, struct edns_data* VAR_1,
        sldns_buffer* VAR_2, mesh_cb_func_type VAR_3, void* VAR_4,
 uint16_t VAR_5, uint16_t VAR_6)
{
 struct mesh_cb* VAR_7 = FUNC_3(VAR_0->s.region,
  sizeof(struct mesh_cb));
 if(!VAR_7)
  return 0;
 VAR_7->buf = VAR_2;
 FUNC_2(FUNC_1(VAR_3));
 VAR_7->cb = VAR_3;
 VAR_7->cb_arg = VAR_4;
 VAR_7->edns = *VAR_1;
 if(VAR_1->opt_list) {
  VAR_7->edns.opt_list = FUNC_0(VAR_1->opt_list,
   VAR_0->s.region);
  if(!VAR_7->edns.opt_list)
   return 0;
 }
 VAR_7->qid = VAR_5;
 VAR_7->qflags = VAR_6;
 VAR_7->next = VAR_0->cb_list;
 VAR_0->cb_list = VAR_7;
 return 1;

}
