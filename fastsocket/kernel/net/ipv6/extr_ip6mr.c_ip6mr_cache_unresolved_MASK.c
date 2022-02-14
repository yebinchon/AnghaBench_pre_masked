
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int cache_resolve_queue_len; } ;
struct net {TYPE_1__ ipv6; } ;
struct TYPE_9__ {int qlen; } ;
struct TYPE_7__ {TYPE_4__ unresolved; } ;
struct TYPE_8__ {TYPE_2__ unres; } ;
struct mfc6_cache {int mf6c_parent; TYPE_3__ mfc_un; struct mfc6_cache* next; int mf6c_mcastgrp; int mf6c_origin; } ;
typedef int mifi_t ;
struct TYPE_10__ {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mfc6_cache* FUNC_2 (struct net*) ;
 int FUNC_3 (struct mfc6_cache*) ;
 int FUNC_4 (struct net*,struct sk_buff*,int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 TYPE_5__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct mfc6_cache*) ;
 int VAR_2 ;
 struct mfc6_cache* VAR_3 ;
 scalar_t__ FUNC_10 (int ,struct net*) ;
 int FUNC_11 (TYPE_4__*,struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct net *VAR_4, mifi_t VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7;
 struct mfc6_cache *VAR_8;

 FUNC_12(&VAR_2);
 for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
  if (FUNC_10(FUNC_9(VAR_8), VAR_4) &&
      FUNC_6(&VAR_8->mf6c_mcastgrp, &FUNC_7(VAR_6)->daddr) &&
      FUNC_6(&VAR_8->mf6c_origin, &FUNC_7(VAR_6)->saddr))
   break;
 }

 if (VAR_8 == ((void*)0)) {




  if (FUNC_1(&VAR_4->ipv6.cache_resolve_queue_len) >= 10 ||
      (VAR_8 = FUNC_2(VAR_4)) == ((void*)0)) {
   FUNC_13(&VAR_2);

   FUNC_8(VAR_6);
   return -VAR_0;
  }




  VAR_8->mf6c_parent = -1;
  VAR_8->mf6c_origin = FUNC_7(VAR_6)->saddr;
  VAR_8->mf6c_mcastgrp = FUNC_7(VAR_6)->daddr;




  VAR_7 = FUNC_4(VAR_4, VAR_6, VAR_5, VAR_1);
  if (VAR_7 < 0) {



   FUNC_13(&VAR_2);

   FUNC_3(VAR_8);
   FUNC_8(VAR_6);
   return VAR_7;
  }

  FUNC_0(&VAR_4->ipv6.cache_resolve_queue_len);
  VAR_8->next = VAR_3;
  VAR_3 = VAR_8;

  FUNC_5(1);
 }




 if (VAR_8->mfc_un.unres.unresolved.qlen > 3) {
  FUNC_8(VAR_6);
  VAR_7 = -VAR_0;
 } else {
  FUNC_11(&VAR_8->mfc_un.unres.unresolved, VAR_6);
  VAR_7 = 0;
 }

 FUNC_13(&VAR_2);
 return VAR_7;
}
