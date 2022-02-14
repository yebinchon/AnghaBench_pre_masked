
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; struct virtqueue* vtblk_vq; } ;
struct vtblk_request {int dummy; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtblk_softc*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*) ;
 scalar_t__ FUNC_3 (struct vtblk_softc*,struct vtblk_request*) ;
 struct vtblk_request* FUNC_4 (struct vtblk_softc*) ;
 int FUNC_5 (struct vtblk_softc*,struct vtblk_request*) ;

__attribute__((used)) static void
FUNC_6(struct vtblk_softc *VAR_1)
{
 struct virtqueue *VAR_2;
 struct vtblk_request *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
 VAR_2 = VAR_1->vtblk_vq;
 VAR_4 = 0;

 if (VAR_1->vtblk_flags & VAR_0)
  return;

 while (!FUNC_1(VAR_2)) {
  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3 == ((void*)0))
   break;

  if (FUNC_3(VAR_1, VAR_3) != 0) {
   FUNC_5(VAR_1, VAR_3);
   break;
  }

  VAR_4++;
 }

 if (VAR_4 > 0)
  FUNC_2(VAR_2);
}
