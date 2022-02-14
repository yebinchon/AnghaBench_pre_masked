
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; struct virtqueue* vtblk_vq; } ;
struct virtqueue {int dummy; } ;
struct bio_queue {int dummy; } ;


 int FUNC_0 (struct bio_queue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vtblk_softc*) ;
 int FUNC_2 (struct vtblk_softc*) ;
 int FUNC_3 (struct virtqueue*) ;
 scalar_t__ FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct vtblk_softc*,struct bio_queue*) ;
 int FUNC_6 (struct vtblk_softc*,struct bio_queue*) ;
 int FUNC_7 (struct vtblk_softc*) ;
 int FUNC_8 (struct virtqueue**) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
 struct vtblk_softc *VAR_3;
 struct virtqueue *VAR_4;
 struct bio_queue VAR_5;

 VAR_3 = VAR_2;
 VAR_4 = VAR_3->vtblk_vq;
 FUNC_0(&VAR_5);

 FUNC_1(VAR_3);

again:
 if (VAR_3->vtblk_flags & VAR_0)
  goto out;

 FUNC_6(VAR_3, &VAR_5);
 FUNC_7(VAR_3);

 if (FUNC_4(VAR_4) != 0) {
  FUNC_3(VAR_4);
  goto again;
 }

 if (VAR_3->vtblk_flags & VAR_1)
  FUNC_8(&VAR_3->vtblk_vq);

out:
 FUNC_2(VAR_3);
 FUNC_5(VAR_3, &VAR_5);
}
