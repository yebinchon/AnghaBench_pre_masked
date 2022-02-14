
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_8__ {int qclass; int qtype; int qname; } ;
struct TYPE_10__ {int return_rcode; int * return_msg; TYPE_3__ qinfo; } ;
struct TYPE_9__ {scalar_t__ count; } ;
struct mesh_state {scalar_t__ list_select; TYPE_5__ s; TYPE_4__ super_set; TYPE_2__* reply_list; } ;
struct mesh_area {scalar_t__ num_reply_states; scalar_t__ max_reply_states; int * qbuf_bak; int stats_jostled; int jostle_max; TYPE_1__* env; struct mesh_state* jostle_first; } ;
typedef int sldns_buffer ;
struct TYPE_7__ {int start_time; } ;
struct TYPE_6__ {int now_tv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct mesh_area*,struct mesh_state*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,struct timeval*) ;
 int FUNC_5 (struct timeval*,int ,int *) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct mesh_area* VAR_3, sldns_buffer* VAR_4)
{
 struct mesh_state* VAR_5 = VAR_3->jostle_first;

 if(VAR_3->num_reply_states < VAR_3->max_reply_states)
  return 1;

 if(VAR_5 && VAR_5->reply_list && VAR_5->list_select == VAR_2) {

  struct timeval VAR_6;
  FUNC_5(&VAR_6, VAR_3->env->now_tv,
   &VAR_5->reply_list->start_time);
  if(FUNC_4(&VAR_3->jostle_max, &VAR_6)) {

   FUNC_0(VAR_1, "query jostled out to "
    "make space for a new one",
    VAR_5->s.qinfo.qname, VAR_5->s.qinfo.qtype,
    VAR_5->s.qinfo.qclass);

   if(VAR_4) FUNC_3(VAR_3->qbuf_bak, VAR_4);

   if(VAR_5->super_set.count > 0) {
    FUNC_6(VAR_1, "notify supers of failure");
    VAR_5->s.return_msg = ((void*)0);
    VAR_5->s.return_rcode = VAR_0;
    FUNC_2(VAR_3, VAR_5);
   }
   VAR_3->stats_jostled ++;
   FUNC_1(&VAR_5->s);


   if(VAR_4) FUNC_3(VAR_4, VAR_3->qbuf_bak);
   return 1;
  }
 }

 return 0;
}
