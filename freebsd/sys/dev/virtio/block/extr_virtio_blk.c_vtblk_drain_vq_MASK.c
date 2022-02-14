
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int * vtblk_req_ordered; struct virtqueue* vtblk_vq; } ;
struct vtblk_request {int vbr_bp; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct vtblk_request* FUNC_1 (struct virtqueue*,int*) ;
 int FUNC_2 (struct virtqueue*) ;
 int FUNC_3 (struct vtblk_softc*,int ,int ) ;
 int FUNC_4 (struct vtblk_softc*,struct vtblk_request*) ;

__attribute__((used)) static void
FUNC_5(struct vtblk_softc *VAR_1)
{
 struct virtqueue *VAR_2;
 struct vtblk_request *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->vtblk_vq;
 VAR_4 = 0;

 while ((VAR_3 = FUNC_1(VAR_2, &VAR_4)) != ((void*)0)) {
  FUNC_3(VAR_1, VAR_3->vbr_bp, VAR_0);
  FUNC_4(VAR_1, VAR_3);
 }

 VAR_1->vtblk_req_ordered = ((void*)0);
 FUNC_0(FUNC_2(VAR_2), ("virtqueue not empty"));
}
