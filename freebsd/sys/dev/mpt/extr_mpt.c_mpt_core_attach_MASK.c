
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inots; int atios; } ;
struct mpt_softc {int failure_id; int scsi_tgt_handler_id; TYPE_2__ trt_wildcard; TYPE_1__* trt; int request_timeout_list; int request_free_list; int request_pending_list; int ack_frames; } ;
struct TYPE_3__ {int inots; int atios; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mpt_softc*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mpt_softc*,int ,char*,int ) ;
 int FUNC_8 (struct mpt_softc*,int ) ;
 int FUNC_9 (struct mpt_softc*) ;

__attribute__((used)) static int
FUNC_10(struct mpt_softc *VAR_4)
{
        int VAR_5, VAR_6;

 FUNC_0(&VAR_4->ack_frames);

 FUNC_4(&VAR_4->request_pending_list);
 FUNC_4(&VAR_4->request_free_list);
 FUNC_4(&VAR_4->request_timeout_list);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_3(&VAR_4->trt[VAR_5].atios);
  FUNC_3(&VAR_4->trt[VAR_5].inots);
 }
 FUNC_3(&VAR_4->trt_wildcard.atios);
 FUNC_3(&VAR_4->trt_wildcard.inots);



 VAR_4->scsi_tgt_handler_id = VAR_0;
 FUNC_9(VAR_4);
 FUNC_7(VAR_4, VAR_3, "doorbell req = %s\n",
     FUNC_6(FUNC_8(VAR_4, VAR_2)));

 FUNC_1(VAR_4);
 VAR_6 = FUNC_5(VAR_4, 0, 0);
 FUNC_2(VAR_4);

 return (VAR_6);
}
