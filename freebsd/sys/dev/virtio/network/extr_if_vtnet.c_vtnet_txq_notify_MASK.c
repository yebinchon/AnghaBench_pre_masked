
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_watchdog; struct virtqueue* vtntx_vq; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 scalar_t__ FUNC_2 (struct vtnet_txq*) ;
 scalar_t__ FUNC_3 (struct vtnet_txq*) ;
 scalar_t__ FUNC_4 (struct vtnet_txq*) ;

__attribute__((used)) static int
FUNC_5(struct vtnet_txq *VAR_1)
{
 struct virtqueue *VAR_2;

 VAR_2 = VAR_1->vtntx_vq;

 VAR_1->vtntx_watchdog = VAR_0;
 FUNC_1(VAR_2);

 if (FUNC_3(VAR_1) == 0)
  return (0);






 if (FUNC_4(VAR_1) != 0 && FUNC_2(VAR_1) == 0) {
  FUNC_0(VAR_2);
  return (1);
 }

 return (0);
}
