
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct reply_info {scalar_t__ security; } ;
struct TYPE_13__ {int was_ratelimited; TYPE_3__* env; int qinfo; int region; } ;
struct mesh_state {TYPE_4__ s; } ;
struct TYPE_11__ {size_t udp_size; int bits; scalar_t__ ext_rcode; int edns_version; int * opt_list; } ;
struct mesh_cb {int buf; int cb_arg; int (* cb ) (int ,int,int ,scalar_t__,char*,int) ;TYPE_2__ edns; int qflags; int qid; } ;
struct TYPE_12__ {TYPE_1__* mesh; int scratch; } ;
struct TYPE_10__ {int num_reply_addrs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int (*) (int ,int,int ,scalar_t__,char*,int)) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,int *,TYPE_4__*,struct reply_info*,int,TYPE_2__*,int *,int ) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_4__*,struct reply_info*,int,TYPE_2__*,int *,int ) ;
 int FUNC_6 (int *,struct reply_info*,int ,int ,int ,int ,int,int ,size_t,TYPE_2__*,int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ,scalar_t__,char*,int) ;
 int FUNC_9 (int ,int,int ,scalar_t__,char*,int) ;
 int FUNC_10 (int ,int,int ,scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct mesh_state* VAR_9, int VAR_10, struct reply_info* VAR_11,
 struct mesh_cb* VAR_12)
{
 int VAR_13;
 char* VAR_14 = ((void*)0);
 int VAR_15 = VAR_9->s.was_ratelimited;


 if(VAR_11 && VAR_11->security == VAR_6)
  VAR_13 = 1;
 else VAR_13 = 0;
 if(!VAR_11 && VAR_10 == VAR_3)
  VAR_10 = VAR_4;
 if(!VAR_10 && (VAR_11->security == VAR_5 ||
  VAR_11->security == VAR_7)) {
  if(!(VAR_14 = FUNC_0(&VAR_9->s)))
   VAR_10 = VAR_4;
 }

 if(VAR_10) {
  if(VAR_10 == VAR_4) {
   if(!FUNC_5(VAR_9->s.env, &VAR_9->s.qinfo, &VAR_9->s,
    VAR_11, VAR_10, &VAR_12->edns, ((void*)0), VAR_9->s.region))
     VAR_12->edns.opt_list = ((void*)0);
  } else {
   if(!FUNC_4(VAR_9->s.env, &VAR_9->s.qinfo, &VAR_9->s, VAR_11, VAR_10,
    &VAR_12->edns, ((void*)0), VAR_9->s.region))
     VAR_12->edns.opt_list = ((void*)0);
  }
  FUNC_1(FUNC_2(VAR_12->cb));
  (*VAR_12->cb)(VAR_12->cb_arg, VAR_10, VAR_12->buf, VAR_8, ((void*)0),
   VAR_15);
 } else {
  size_t VAR_16 = VAR_12->edns.udp_size;
  FUNC_7(VAR_12->buf);
  VAR_12->edns.edns_version = VAR_1;
  VAR_12->edns.udp_size = VAR_0;
  VAR_12->edns.ext_rcode = 0;
  VAR_12->edns.bits &= VAR_2;

  if(!FUNC_4(VAR_9->s.env, &VAR_9->s.qinfo, &VAR_9->s, VAR_11,
   VAR_3, &VAR_12->edns, ((void*)0), VAR_9->s.region) ||
   !FUNC_6(&VAR_9->s.qinfo, VAR_11, VAR_12->qid,
   VAR_12->qflags, VAR_12->buf, 0, 1,
   VAR_9->s.env->scratch, VAR_16, &VAR_12->edns,
   (int)(VAR_12->edns.bits & VAR_2), VAR_13))
  {
   FUNC_1(FUNC_2(VAR_12->cb));
   (*VAR_12->cb)(VAR_12->cb_arg, VAR_4, VAR_12->buf,
    VAR_8, ((void*)0), 0);
  } else {
   FUNC_1(FUNC_2(VAR_12->cb));
   (*VAR_12->cb)(VAR_12->cb_arg, VAR_3, VAR_12->buf,
    VAR_11->security, VAR_14, VAR_15);
  }
 }
 FUNC_3(VAR_14);
 VAR_9->s.env->mesh->num_reply_addrs--;
}
