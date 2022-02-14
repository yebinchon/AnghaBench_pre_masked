
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sscop {int dummy; } ;
struct TYPE_2__ {int out_packets; int out_dropped; } ;
struct priv {int * lower; TYPE_1__ stats; } ;
struct mbuf {int dummy; } ;
typedef int node_p ;


 struct priv* FUNC_0 (int ) ;
 int FUNC_1 (int,int *,struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_3(struct sscop *VAR_0, void *VAR_1, struct mbuf *VAR_2)
{
 node_p VAR_3 = (node_p)VAR_1;
 struct priv *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 if (VAR_4->lower == ((void*)0)) {
  FUNC_2(VAR_2);
  VAR_4->stats.out_dropped++;
  return;
 }

 VAR_4->stats.out_packets++;
 FUNC_1(VAR_5, VAR_4->lower, VAR_2);
}
