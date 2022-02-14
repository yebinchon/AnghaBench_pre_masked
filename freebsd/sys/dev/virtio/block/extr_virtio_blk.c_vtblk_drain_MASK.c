
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {int dummy; } ;
struct vtblk_softc {int * vtblk_vq; struct bio_queue_head vtblk_bioq; } ;
struct vtblk_request {struct bio* vbr_bp; } ;
struct bio_queue {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio_queue*) ;
 int * FUNC_1 (struct bio_queue_head*) ;
 struct bio* FUNC_2 (struct bio_queue_head*) ;
 int FUNC_3 (struct vtblk_softc*,struct bio*,int ) ;
 int FUNC_4 (struct vtblk_softc*,struct bio_queue*) ;
 int FUNC_5 (struct vtblk_softc*) ;
 int FUNC_6 (struct vtblk_softc*,struct bio_queue*) ;
 int FUNC_7 (struct vtblk_softc*,struct vtblk_request*) ;
 int FUNC_8 (struct vtblk_softc*) ;
 struct vtblk_request* FUNC_9 (struct vtblk_softc*) ;

__attribute__((used)) static void
FUNC_10(struct vtblk_softc *VAR_1)
{
 struct bio_queue VAR_2;
 struct bio_queue_head *VAR_3;
 struct vtblk_request *VAR_4;
 struct bio *VAR_5;

 VAR_3 = &VAR_1->vtblk_bioq;
 FUNC_0(&VAR_2);

 if (VAR_1->vtblk_vq != ((void*)0)) {
  FUNC_6(VAR_1, &VAR_2);
  FUNC_4(VAR_1, &VAR_2);

  FUNC_5(VAR_1);
 }

 while ((VAR_4 = FUNC_9(VAR_1)) != ((void*)0)) {
  FUNC_3(VAR_1, VAR_4->vbr_bp, VAR_0);
  FUNC_7(VAR_1, VAR_4);
 }

 while (FUNC_1(VAR_3) != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_3);
  FUNC_3(VAR_1, VAR_5, VAR_0);
 }

 FUNC_8(VAR_1);
}
