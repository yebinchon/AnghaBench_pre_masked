
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef void* uint16_t ;
struct query_info {TYPE_5__* local_alias; TYPE_11__* qname; } ;
struct packed_rrset_data {int count; int * rr_ttl; int * rr_len; int * rr_data; } ;
struct TYPE_15__ {int qname_len; } ;
struct TYPE_22__ {int region; TYPE_2__ qinfo; TYPE_1__* env; } ;
struct mesh_state {struct mesh_reply* reply_list; TYPE_9__ s; } ;
struct edns_data {scalar_t__ opt_list; } ;
struct comm_reply {TYPE_6__* c; } ;
struct mesh_reply {TYPE_10__* local_alias; void* qname; struct mesh_reply* next; int start_time; void* qflags; void* qid; struct edns_data edns; struct comm_reply query_reply; } ;
struct TYPE_20__ {struct packed_rrset_data* data; } ;
struct TYPE_21__ {TYPE_7__ entry; } ;
struct TYPE_19__ {int buffer; } ;
struct TYPE_18__ {TYPE_11__* rrset; int next; } ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ dname; } ;
struct TYPE_16__ {struct packed_rrset_data* data; } ;
struct TYPE_14__ {int * now_tv; } ;
struct TYPE_13__ {TYPE_4__ rk; TYPE_3__ entry; } ;
struct TYPE_12__ {TYPE_8__* rrset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct mesh_reply* FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,TYPE_11__*,int) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,struct packed_rrset_data*,int ,int ,int ,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int FUNC_8(struct mesh_state* VAR_2, struct edns_data* VAR_3,
        struct comm_reply* VAR_4, uint16_t VAR_5, uint16_t VAR_6,
        const struct query_info* VAR_7)
{
 struct mesh_reply* VAR_8 = FUNC_3(VAR_2->s.region,
  sizeof(struct mesh_reply));
 if(!VAR_8)
  return 0;
 VAR_8->query_reply = *VAR_4;
 VAR_8->edns = *VAR_3;
 if(VAR_3->opt_list) {
  VAR_8->edns.opt_list = FUNC_0(VAR_3->opt_list,
   VAR_2->s.region);
  if(!VAR_8->edns.opt_list)
   return 0;
 }
 VAR_8->qid = VAR_5;
 VAR_8->qflags = VAR_6;
 VAR_8->start_time = *VAR_2->s.env->now_tv;
 VAR_8->next = VAR_2->reply_list;
 VAR_8->qname = FUNC_4(VAR_2->s.region, VAR_7->qname,
  VAR_2->s.qinfo.qname_len);
 if(!VAR_8->qname)
  return 0;





 if(VAR_7->local_alias) {
  struct packed_rrset_data* VAR_9;
  struct packed_rrset_data* VAR_10;
  VAR_8->local_alias = FUNC_5(VAR_2->s.region,
   sizeof(*VAR_7->local_alias));
  if(!VAR_8->local_alias)
   return 0;
  VAR_8->local_alias->rrset = FUNC_4(VAR_2->s.region,
   VAR_7->local_alias->rrset,
   sizeof(*VAR_7->local_alias->rrset));
  if(!VAR_8->local_alias->rrset)
   return 0;
  VAR_10 = VAR_7->local_alias->rrset->entry.data;



  FUNC_2(!VAR_7->local_alias->next && VAR_10->count == 1 &&
   VAR_7->local_alias->rrset->rk.type ==
   FUNC_1(VAR_1));






  FUNC_2(VAR_7->local_alias->rrset->rk.dname ==
   FUNC_7(VAR_4->c->buffer, VAR_0));



  VAR_9 = FUNC_5(VAR_2->s.region, sizeof(*VAR_9));
  if(!VAR_9)
   return 0;
  VAR_8->local_alias->rrset->entry.data = VAR_9;
  if(!FUNC_6(VAR_2->s.region, VAR_9, VAR_10->rr_data[0],
   VAR_10->rr_len[0], VAR_10->rr_ttl[0], "CNAME local alias"))
   return 0;
 } else
  VAR_8->local_alias = ((void*)0);

 VAR_2->reply_list = VAR_8;
 return 1;
}
