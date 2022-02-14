
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {int debugLevel; int minStableAge; int maxStaleness; int loopTimeout; } ;
struct TYPE_5__ {int numBuckets; int hashMask; int timer; int node; TYPE_1__ conf; void* tab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_7 ;
 void* FUNC_2 (int,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int *,int ,int ,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(node_p VAR_9)
{
 priv_p VAR_10;


 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_4, VAR_5 | VAR_6);
 FUNC_4(&VAR_10->timer);


 VAR_10->tab = FUNC_2(VAR_3 * sizeof(*VAR_10->tab),
     VAR_4, VAR_5 | VAR_6);
 VAR_10->numBuckets = VAR_3;
 VAR_10->hashMask = VAR_3 - 1;
 VAR_10->conf.debugLevel = 1;
 VAR_10->conf.loopTimeout = VAR_0;
 VAR_10->conf.maxStaleness = VAR_1;
 VAR_10->conf.minStableAge = VAR_2;
 FUNC_0(VAR_9);
 FUNC_1(VAR_9, VAR_10);
 VAR_10->node = VAR_9;


 FUNC_3(&VAR_10->timer, VAR_9, ((void*)0), VAR_7, VAR_8, ((void*)0), 0);


 return (0);
}
