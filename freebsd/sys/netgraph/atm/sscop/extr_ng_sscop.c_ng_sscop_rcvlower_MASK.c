
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_dropped; int in_packets; } ;
struct priv {TYPE_1__ stats; int sscop; int * upper; int enabled; } ;
struct mbuf {int dummy; } ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct priv* FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_2, item_p VAR_3)
{
 struct priv *VAR_4 = FUNC_3(FUNC_2(VAR_2));
 struct mbuf *VAR_5;

 if (!VAR_4->enabled) {
  FUNC_1(VAR_3);
  return VAR_0;
 }





 if (VAR_4->upper != ((void*)0) || FUNC_4(VAR_4->sscop) != VAR_1) {
  FUNC_0(VAR_3, VAR_5);
  VAR_4->stats.in_packets++;
  FUNC_5(VAR_4->sscop, VAR_5);
 } else {
  VAR_4->stats.in_dropped++;
 }
 FUNC_1(VAR_3);

 return (0);
}
