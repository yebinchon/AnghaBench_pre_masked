
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {struct vtblk_request* vtblk_req_ordered; int vtblk_vq; } ;
struct vtblk_request {struct bio* vbr_bp; } ;
struct bio_queue {int dummy; } ;
struct bio {int bio_error; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bio_queue*,struct bio*,int ) ;
 int VAR_0 ;
 struct vtblk_request* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct vtblk_softc*,struct vtblk_request*) ;
 int FUNC_4 (struct vtblk_request*) ;

__attribute__((used)) static void
FUNC_5(struct vtblk_softc *VAR_1, struct bio_queue *VAR_2)
{
 struct vtblk_request *VAR_3;
 struct bio *VAR_4;

 while ((VAR_3 = FUNC_2(VAR_1->vtblk_vq, ((void*)0))) != ((void*)0)) {
  if (VAR_1->vtblk_req_ordered != ((void*)0)) {
   FUNC_0(VAR_1->vtblk_req_ordered == VAR_3);
   VAR_1->vtblk_req_ordered = ((void*)0);
  }

  VAR_4 = VAR_3->vbr_bp;
  VAR_4->bio_error = FUNC_4(VAR_3);
  FUNC_1(VAR_2, VAR_4, VAR_0);

  FUNC_3(VAR_1, VAR_3);
 }
}
