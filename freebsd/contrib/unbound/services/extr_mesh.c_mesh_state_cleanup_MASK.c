
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int region; TYPE_3__* env; int * ext_state; int ** minfo; } ;
struct mesh_state {TYPE_4__ s; struct mesh_cb* cb_list; struct mesh_reply* reply_list; int replies_sent; } ;
struct mesh_reply {int query_reply; struct mesh_reply* next; } ;
struct mesh_cb {int cb_arg; int (* cb ) (int ,int ,int *,int ,int *,int ) ;struct mesh_cb* next; } ;
struct TYPE_7__ {int num; TYPE_1__** mod; } ;
struct mesh_area {TYPE_2__ mods; int num_reply_addrs; } ;
struct TYPE_8__ {int alloc; struct mesh_area* mesh; } ;
struct TYPE_6__ {int (* clear ) (TYPE_4__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (int ,int ,int *,int ,int *,int )) ;
 int FUNC_4 (int (*) (TYPE_4__*,int)) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_6 (TYPE_4__*,int) ;

void
FUNC_7(struct mesh_state* VAR_3)
{
 struct mesh_area* VAR_4;
 int VAR_5;
 if(!VAR_3)
  return;
 VAR_4 = VAR_3->s.env->mesh;

 if(!VAR_3->replies_sent) {
  struct mesh_reply* VAR_6 = VAR_3->reply_list;
  struct mesh_cb* VAR_7;



  VAR_3->reply_list = ((void*)0);
  for(; VAR_6; VAR_6=VAR_6->next) {
   FUNC_1(&VAR_6->query_reply);
   VAR_4->num_reply_addrs--;
  }
  while((VAR_7 = VAR_3->cb_list)!=((void*)0)) {
   VAR_3->cb_list = VAR_7->next;
   FUNC_2(FUNC_3(VAR_7->cb));
   (*VAR_7->cb)(VAR_7->cb_arg, VAR_0, ((void*)0),
    VAR_2, ((void*)0), 0);
   VAR_4->num_reply_addrs--;
  }
 }


 for(VAR_5=0; VAR_5<VAR_4->mods.num; VAR_5++) {
  FUNC_2(FUNC_4(VAR_4->mods.mod[VAR_5]->clear));
  (*VAR_4->mods.mod[VAR_5]->clear)(&VAR_3->s, VAR_5);
  VAR_3->s.minfo[VAR_5] = ((void*)0);
  VAR_3->s.ext_state[VAR_5] = VAR_1;
 }
 FUNC_0(VAR_3->s.env->alloc, VAR_3->s.region);
}
