
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct neigh_table {scalar_t__ family; int lock; void* gc_interval; void* gc_thresh3; void* gc_thresh2; void* gc_thresh1; int id; struct neigh_table* next; } ;
struct neigh_parms {void* locktime; void* proxy_delay; void* anycast_delay; void* retrans_time; void* delay_probe_time; void* gc_staletime; void* base_reachable_time; void* mcast_probes; void* ucast_probes; void* app_probes; void* proxy_qlen; void* queue_len; } ;
struct ndtmsg {scalar_t__ ndtm_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;





 size_t VAR_9 ;

 int VAR_10 ;






 struct neigh_parms* FUNC_0 (struct neigh_table*,struct net*,int) ;
 struct neigh_table* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int,struct nlattr*,int ) ;
 scalar_t__ FUNC_4 (struct nlattr*,int ) ;
 struct ndtmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct net* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_15, struct nlmsghdr *VAR_16, void *VAR_17)
{
 struct net *VAR_18 = FUNC_9(VAR_15->sk);
 struct neigh_table *VAR_19;
 struct ndtmsg *VAR_20;
 struct nlattr *VAR_21[VAR_3+1];
 int VAR_22;

 VAR_22 = FUNC_6(VAR_16, sizeof(*VAR_20), VAR_21, VAR_3,
     VAR_13);
 if (VAR_22 < 0)
  goto errout;

 if (VAR_21[VAR_4] == ((void*)0)) {
  VAR_22 = -VAR_0;
  goto errout;
 }

 VAR_20 = FUNC_5(VAR_16);
 FUNC_7(&VAR_12);
 for (VAR_19 = VAR_11; VAR_19; VAR_19 = VAR_19->next) {
  if (VAR_20->ndtm_family && VAR_19->family != VAR_20->ndtm_family)
   continue;

  if (FUNC_4(VAR_21[VAR_4], VAR_19->id) == 0)
   break;
 }

 if (VAR_19 == ((void*)0)) {
  VAR_22 = -VAR_1;
  goto errout_locked;
 }





 FUNC_10(&VAR_19->lock);

 if (VAR_21[VAR_5]) {
  struct nlattr *VAR_23[VAR_10+1];
  struct neigh_parms *VAR_24;
  int VAR_25, VAR_26 = 0;

  VAR_22 = FUNC_3(VAR_23, VAR_10, VAR_21[VAR_5],
           VAR_14);
  if (VAR_22 < 0)
   goto errout_tbl_lock;

  if (VAR_23[VAR_9])
   VAR_26 = FUNC_2(VAR_23[VAR_9]);

  VAR_24 = FUNC_0(VAR_19, VAR_18, VAR_26);
  if (VAR_24 == ((void*)0)) {
   VAR_22 = -VAR_1;
   goto errout_tbl_lock;
  }

  for (VAR_25 = 1; VAR_25 <= VAR_10; VAR_25++) {
   if (VAR_23[VAR_25] == ((void*)0))
    continue;

   switch (VAR_25) {
   case 130:
    VAR_24->queue_len = FUNC_2(VAR_23[VAR_25]);
    break;
   case 131:
    VAR_24->proxy_qlen = FUNC_2(VAR_23[VAR_25]);
    break;
   case 138:
    VAR_24->app_probes = FUNC_2(VAR_23[VAR_25]);
    break;
   case 128:
    VAR_24->ucast_probes = FUNC_2(VAR_23[VAR_25]);
    break;
   case 133:
    VAR_24->mcast_probes = FUNC_2(VAR_23[VAR_25]);
    break;
   case 137:
    VAR_24->base_reachable_time = FUNC_1(VAR_23[VAR_25]);
    break;
   case 135:
    VAR_24->gc_staletime = FUNC_1(VAR_23[VAR_25]);
    break;
   case 136:
    VAR_24->delay_probe_time = FUNC_1(VAR_23[VAR_25]);
    break;
   case 129:
    VAR_24->retrans_time = FUNC_1(VAR_23[VAR_25]);
    break;
   case 139:
    VAR_24->anycast_delay = FUNC_1(VAR_23[VAR_25]);
    break;
   case 132:
    VAR_24->proxy_delay = FUNC_1(VAR_23[VAR_25]);
    break;
   case 134:
    VAR_24->locktime = FUNC_1(VAR_23[VAR_25]);
    break;
   }
  }
 }

 if (VAR_21[VAR_6])
  VAR_19->gc_thresh1 = FUNC_2(VAR_21[VAR_6]);

 if (VAR_21[VAR_7])
  VAR_19->gc_thresh2 = FUNC_2(VAR_21[VAR_7]);

 if (VAR_21[VAR_8])
  VAR_19->gc_thresh3 = FUNC_2(VAR_21[VAR_8]);

 if (VAR_21[VAR_2])
  VAR_19->gc_interval = FUNC_1(VAR_21[VAR_2]);

 VAR_22 = 0;

errout_tbl_lock:
 FUNC_11(&VAR_19->lock);
errout_locked:
 FUNC_8(&VAR_12);
errout:
 return VAR_22;
}
