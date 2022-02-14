
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpt_softc {int * phydisk_sim; int phydisk_path; int * sim; int path; int * sas_portinfo; TYPE_2__* tmf_req; int scsi_tgt_handler_id; scalar_t__ ready; } ;
struct TYPE_4__ {int reply_handler; } ;
typedef TYPE_1__ mpt_handler_t ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mpt_softc*,int ,TYPE_1__,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct mpt_softc*,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct mpt_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct mpt_softc *VAR_13)
{
 mpt_handler_t VAR_14;

 FUNC_0(VAR_13);
 VAR_13->ready = 0;
 FUNC_7(VAR_13);

 VAR_14.reply_handler = VAR_7;
 FUNC_5(VAR_13, VAR_0, VAR_14,
          VAR_11);
 VAR_14.reply_handler = VAR_9;
 FUNC_5(VAR_13, VAR_0, VAR_14,
          VAR_12);
 VAR_14.reply_handler = VAR_5;
 FUNC_5(VAR_13, VAR_0, VAR_14,
          VAR_4);
 VAR_14.reply_handler = VAR_8;
 FUNC_5(VAR_13, VAR_0, VAR_14,
          VAR_13->scsi_tgt_handler_id);
 VAR_14.reply_handler = VAR_6;
 FUNC_5(VAR_13, VAR_0, VAR_14,
          VAR_10);

 if (VAR_13->tmf_req != ((void*)0)) {
  VAR_13->tmf_req->state = VAR_2;
  FUNC_6(VAR_13, VAR_13->tmf_req);
  VAR_13->tmf_req = ((void*)0);
 }
 if (VAR_13->sas_portinfo != ((void*)0)) {
  FUNC_4(VAR_13->sas_portinfo, VAR_1);
  VAR_13->sas_portinfo = ((void*)0);
 }

 if (VAR_13->sim != ((void*)0)) {
  FUNC_9(VAR_13->path);
  FUNC_8(FUNC_3(VAR_13->sim));
  FUNC_2(VAR_13->sim, VAR_3);
  VAR_13->sim = ((void*)0);
 }

 if (VAR_13->phydisk_sim != ((void*)0)) {
  FUNC_9(VAR_13->phydisk_path);
  FUNC_8(FUNC_3(VAR_13->phydisk_sim));
  FUNC_2(VAR_13->phydisk_sim, VAR_3);
  VAR_13->phydisk_sim = ((void*)0);
 }
 FUNC_1(VAR_13);
}
