
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtblk_softc {int vtblk_dev; struct disk* vtblk_disk; } ;
struct TYPE_2__ {int ioprio; scalar_t__ sector; int type; } ;
struct vtblk_request {int vbr_ack; struct bio* vbr_bp; TYPE_1__ vbr_hdr; } ;
struct disk {int d_ident; } ;
struct bio {int bio_bcount; int bio_data; int bio_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vtblk_softc*) ;
 int FUNC_2 (struct vtblk_softc*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct bio*) ;
 int VAR_4 ;
 int FUNC_5 (struct vtblk_softc*,struct vtblk_request*) ;
 struct vtblk_request* FUNC_6 (struct vtblk_softc*) ;
 int FUNC_7 (struct vtblk_softc*,struct vtblk_request*) ;
 scalar_t__ FUNC_8 (struct vtblk_softc*,char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct vtblk_softc *VAR_5)
{
 struct bio VAR_6;
 struct disk *VAR_7;
 struct vtblk_request *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = VAR_5->vtblk_disk;
 VAR_9 = FUNC_0(VAR_2, VAR_1);

 if (FUNC_8(VAR_5, "no_ident", VAR_4) != 0)
  return;

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8 == ((void*)0))
  return;

 VAR_8->vbr_ack = -1;
 VAR_8->vbr_hdr.type = VAR_3;
 VAR_8->vbr_hdr.ioprio = 1;
 VAR_8->vbr_hdr.sector = 0;

 VAR_8->vbr_bp = &VAR_6;
 FUNC_4(&VAR_6);

 VAR_6.bio_cmd = VAR_0;
 VAR_6.bio_data = VAR_7->d_ident;
 VAR_6.bio_bcount = VAR_9;

 FUNC_1(VAR_5);
 VAR_10 = FUNC_5(VAR_5, VAR_8);
 FUNC_2(VAR_5);

 FUNC_7(VAR_5, VAR_8);

 if (VAR_10) {
  FUNC_3(VAR_5->vtblk_dev,
      "error getting device identifier: %d\n", VAR_10);
 }
}
