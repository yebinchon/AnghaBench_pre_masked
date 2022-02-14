
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; int vtblk_request_count; int vtblk_vq; } ;
struct vtblk_request {int vbr_ack; int vbr_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vtblk_request* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vtblk_softc*,struct vtblk_request*) ;

__attribute__((used)) static int
FUNC_5(struct vtblk_softc *VAR_5)
{
 struct vtblk_request *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_5->vtblk_vq);






 if ((VAR_5->vtblk_flags & VAR_3) == 0)
  VAR_8 /= VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_1(sizeof(struct vtblk_request), VAR_1, VAR_2);
  if (VAR_6 == ((void*)0))
   return (VAR_0);

  FUNC_0(FUNC_2(&VAR_6->vbr_hdr, sizeof(VAR_6->vbr_hdr)) == 1);
  FUNC_0(FUNC_2(&VAR_6->vbr_ack, sizeof(VAR_6->vbr_ack)) == 1);

  VAR_5->vtblk_request_count++;
  FUNC_4(VAR_5, VAR_6);
 }

 return (0);
}
