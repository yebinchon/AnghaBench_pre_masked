
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_2__ {int collapse_err; int collapse; } ;
struct ena_ring {TYPE_1__ tx_stats; struct ena_adapter* adapter; } ;
struct ena_adapter {int max_tx_sgl_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mbuf*) ;
 struct mbuf* FUNC_2 (struct mbuf*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ena_ring *VAR_2, struct mbuf **VAR_3)
{
 struct ena_adapter *VAR_4;
 struct mbuf *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->adapter;
 VAR_6 = FUNC_1(*VAR_3);


 if (VAR_6 < VAR_4->max_tx_sgl_size)
  return (0);
 FUNC_0(VAR_2->tx_stats.collapse, 1);

 VAR_5 = FUNC_2(*VAR_3, VAR_1,
     VAR_4->max_tx_sgl_size - 1);
 if (FUNC_3(VAR_5 == ((void*)0))) {
  FUNC_0(VAR_2->tx_stats.collapse_err, 1);
  return (VAR_0);
 }


 *VAR_3 = VAR_5;

 return (0);
}
