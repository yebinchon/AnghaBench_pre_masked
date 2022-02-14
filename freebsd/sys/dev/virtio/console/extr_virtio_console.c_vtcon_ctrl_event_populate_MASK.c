
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {struct virtqueue* vtcon_ctrl_rxvq; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct vtcon_softc*) ;

__attribute__((used)) static int
FUNC_3(struct vtcon_softc *VAR_1)
{
 struct virtqueue *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_1->vtcon_ctrl_rxvq;
 VAR_4 = VAR_0;

 for (VAR_3 = 0; !FUNC_0(VAR_2); VAR_3++) {
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4)
   break;
 }

 if (VAR_3 > 0) {
  FUNC_1(VAR_2);
  VAR_4 = 0;
 }

 return (VAR_4);
}
