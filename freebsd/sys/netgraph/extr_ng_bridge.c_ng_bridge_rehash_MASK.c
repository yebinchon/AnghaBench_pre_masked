
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_5__ {int addr; } ;
struct ng_bridge_hent {TYPE_1__ host; } ;
struct ng_bridge_bucket {int dummy; } ;
typedef TYPE_3__* priv_p ;
struct TYPE_6__ {int debugLevel; } ;
struct TYPE_7__ {int numHosts; int numBuckets; int hashMask; struct ng_bridge_bucket* tab; int node; TYPE_2__ conf; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ng_bridge_bucket* const) ;
 struct ng_bridge_hent* FUNC_2 (struct ng_bridge_bucket* const) ;
 int FUNC_3 (struct ng_bridge_bucket*,struct ng_bridge_hent* const,int ) ;
 int FUNC_4 (struct ng_bridge_bucket* const,int ) ;
 int FUNC_5 (struct ng_bridge_bucket*,int ) ;
 int FUNC_6 (int ,char*,int ,int,int) ;
 struct ng_bridge_bucket* FUNC_7 (int,int ,int) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(priv_p VAR_7)
{
 struct ng_bridge_bucket *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 u_int VAR_12;


 if (VAR_7->numHosts > VAR_7->numBuckets
     && (VAR_7->numBuckets << 1) <= VAR_1)
  VAR_11 = VAR_7->numBuckets << 1;
 else if (VAR_7->numHosts < (VAR_7->numBuckets >> 2)
     && (VAR_7->numBuckets >> 2) >= VAR_2)
  VAR_11 = VAR_7->numBuckets >> 2;
 else
  return;
 VAR_12 = VAR_11 - 1;


 VAR_8 = FUNC_7(VAR_11 * sizeof(*VAR_8),
     VAR_3, VAR_4 | VAR_5);
 if (VAR_8 == ((void*)0))
  return;


 for (VAR_9 = 0; VAR_9 < VAR_7->numBuckets; VAR_9++) {
  struct ng_bridge_bucket *const VAR_13 = &VAR_7->tab[VAR_9];

  while (!FUNC_1(VAR_13)) {
   struct ng_bridge_hent *const VAR_14
       = FUNC_2(VAR_13);

   FUNC_4(VAR_13, VAR_6);
   VAR_10 = FUNC_0(VAR_14->host.addr, VAR_12);
   FUNC_3(&VAR_8[VAR_10], VAR_14, VAR_6);
  }
 }


 if (VAR_7->conf.debugLevel >= 3) {
  FUNC_6(VAR_0, "ng_bridge: %s: table size %d -> %d\n",
      FUNC_8(VAR_7->node),
      VAR_7->numBuckets, VAR_11);
 }
 FUNC_5(VAR_7->tab, VAR_3);
 VAR_7->numBuckets = VAR_11;
 VAR_7->hashMask = VAR_12;
 VAR_7->tab = VAR_8;
 return;
}
