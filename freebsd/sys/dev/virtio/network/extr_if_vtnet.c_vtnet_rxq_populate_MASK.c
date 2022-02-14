
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_rxq {struct virtqueue* vtnrx_vq; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct vtnet_rxq*) ;
 int FUNC_3 (struct vtnet_rxq*) ;

__attribute__((used)) static int
FUNC_4(struct vtnet_rxq *VAR_2)
{
 struct virtqueue *VAR_3;
 int VAR_4, VAR_5;







 VAR_3 = VAR_2->vtnrx_vq;
 VAR_5 = VAR_1;

 for (VAR_4 = 0; !FUNC_0(VAR_3); VAR_4++) {
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   break;
 }

 if (VAR_4 > 0) {
  FUNC_1(VAR_3);





  if (VAR_5 == VAR_0)
   VAR_5 = 0;
 }

 return (VAR_5);
}
