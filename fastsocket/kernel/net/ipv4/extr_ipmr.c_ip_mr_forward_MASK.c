
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {scalar_t__ dev; scalar_t__ len; } ;
struct net {int dummy; } ;
struct mr_table {TYPE_2__* vif_table; scalar_t__ mroute_do_pim; scalar_t__ mroute_do_assert; } ;
struct TYPE_9__ {int* ttls; int maxvif; int minvif; scalar_t__ last_assert; int wrong_if; int bytes; int pkt; } ;
struct TYPE_10__ {TYPE_3__ res; } ;
struct mfc_cache {int mfc_parent; TYPE_4__ mfc_un; } ;
struct TYPE_12__ {scalar_t__ ttl; } ;
struct TYPE_7__ {scalar_t__ iif; } ;
struct TYPE_11__ {TYPE_1__ fl; } ;
struct TYPE_8__ {scalar_t__ dev; int bytes_in; int pkt_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct mr_table*,struct sk_buff*,int,int ) ;
 int FUNC_2 (struct mr_table*,scalar_t__) ;
 int FUNC_3 (struct net*,struct mr_table*,struct sk_buff*,struct mfc_cache*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_4, struct mr_table *VAR_5,
    struct sk_buff *VAR_6, struct mfc_cache *VAR_7,
    int VAR_8)
{
 int VAR_9 = -1;
 int VAR_10, VAR_11;

 VAR_10 = VAR_7->mfc_parent;
 VAR_7->mfc_un.res.pkt++;
 VAR_7->mfc_un.res.bytes += VAR_6->len;




 if (VAR_5->vif_table[VAR_10].dev != VAR_6->dev) {
  int VAR_12;

  if (FUNC_6(VAR_6)->fl.iif == 0) {
   goto dont_forward;
  }

  VAR_7->mfc_un.res.wrong_if++;
  VAR_12 = FUNC_2(VAR_5, VAR_6->dev);

  if (VAR_12 >= 0 && VAR_5->mroute_do_assert &&





      (VAR_5->mroute_do_pim ||
       VAR_7->mfc_un.res.ttls[VAR_12] < 255) &&
      FUNC_7(VAR_3,
          VAR_7->mfc_un.res.last_assert + VAR_2)) {
   VAR_7->mfc_un.res.last_assert = VAR_3;
   FUNC_1(VAR_5, VAR_6, VAR_12, VAR_1);
  }
  goto dont_forward;
 }

 VAR_5->vif_table[VAR_10].pkt_in++;
 VAR_5->vif_table[VAR_10].bytes_in += VAR_6->len;




 for (VAR_11 = VAR_7->mfc_un.res.maxvif-1; VAR_11 >= VAR_7->mfc_un.res.minvif; VAR_11--) {
  if (FUNC_0(VAR_6)->ttl > VAR_7->mfc_un.res.ttls[VAR_11]) {
   if (VAR_9 != -1) {
    struct sk_buff *VAR_13 = FUNC_5(VAR_6, VAR_0);
    if (VAR_13)
     FUNC_3(VAR_4, VAR_5, VAR_13, VAR_7,
       VAR_9);
   }
   VAR_9 = VAR_11;
  }
 }
 if (VAR_9 != -1) {
  if (VAR_8) {
   struct sk_buff *VAR_14 = FUNC_5(VAR_6, VAR_0);
   if (VAR_14)
    FUNC_3(VAR_4, VAR_5, VAR_14, VAR_7, VAR_9);
  } else {
   FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
   return 0;
  }
 }

dont_forward:
 if (!VAR_8)
  FUNC_4(VAR_6);
 return 0;
}
