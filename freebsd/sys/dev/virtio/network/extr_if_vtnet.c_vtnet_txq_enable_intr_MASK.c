
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {struct virtqueue* vtntx_vq; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtqueue*,int ) ;
 scalar_t__ FUNC_1 (struct vtnet_txq*) ;

__attribute__((used)) static int
FUNC_2(struct vtnet_txq *VAR_1)
{
 struct virtqueue *VAR_2;

 VAR_2 = VAR_1->vtntx_vq;

 if (FUNC_1(VAR_1) != 0)
  return (FUNC_0(VAR_2, VAR_0));





 return (0);
}
