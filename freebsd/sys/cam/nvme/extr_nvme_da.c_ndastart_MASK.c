
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct ccb_nvmeio {int dummy; } ;
union ccb {TYPE_2__ ccb_h; struct bio* ccb_bp; int ccb_state; struct ccb_nvmeio nvmeio; struct nda_trim_request* ccb_trim; } ;
typedef int uint32_t ;
struct nvme_dsm_range {int length; int starting_lba; } ;
struct nda_trim_request {struct nvme_dsm_range* dsm; int bps; } ;
struct nda_softc {int state; int refcount; int outstanding_cmds; int trim_lbas; int trim_ranges; int trim_count; int cam_iosched; TYPE_1__* disk; int force_write_error; int periodic_read_count; int periodic_read_error; int force_read_error; int flags; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct bio {int const bio_cmd; int bio_flags; int bio_bcount; int bio_ma_offset; int bio_ma_n; int bio_offset; } ;
struct TYPE_3__ {int d_sectorsize; } ;





 int VAR_0 ;

 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bio*,int ) ;
 int VAR_14 ;
 int FUNC_4 (struct bio*,int *,int ) ;
 struct bio* FUNC_5 (int ) ;
 struct bio* FUNC_6 (int ) ;
 int FUNC_7 (struct cam_periph*) ;
 int FUNC_8 (struct cam_periph*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 struct nda_trim_request* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int ,int ) ;
 int VAR_15 ;
 int FUNC_13 (struct nda_softc*,struct ccb_nvmeio*) ;
 int FUNC_14 (struct nda_softc*,struct ccb_nvmeio*,struct bio*,int ) ;
 int FUNC_15 (struct nda_softc*,struct ccb_nvmeio*,struct nvme_dsm_range*,struct nvme_dsm_range*) ;
 int FUNC_16 (struct cam_periph*) ;
 int FUNC_17 (struct nvme_dsm_range*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (union ccb*) ;
 int FUNC_20 (union ccb*) ;

__attribute__((used)) static void
FUNC_21(struct cam_periph *VAR_16, union ccb *VAR_17)
{
 struct nda_softc *VAR_18 = (struct nda_softc *)VAR_16->softc;
 struct ccb_nvmeio *VAR_19 = &VAR_17->nvmeio;

 FUNC_0(VAR_16->path, VAR_1, ("ndastart\n"));

 switch (VAR_18->state) {
 case 128:
 {
  struct bio *VAR_20;

  VAR_20 = FUNC_5(VAR_18->cam_iosched);
  FUNC_0(VAR_16->path, VAR_1, ("ndastart: bio %p\n", VAR_20));
  if (VAR_20 == ((void*)0)) {
   FUNC_20(VAR_17);
   break;
  }

  switch (VAR_20->bio_cmd) {
  case 129:
   VAR_18->flags |= VAR_10;

  case 130:
  {
   FUNC_1((VAR_20->bio_flags & VAR_0) == 0 ||
       FUNC_18(VAR_20->bio_bcount + VAR_20->bio_ma_offset) /
       VAR_13 == VAR_20->bio_ma_n,
       ("Short bio %p", VAR_20));
   FUNC_14(VAR_18, &VAR_17->nvmeio, VAR_20, VAR_20->bio_cmd == 130 ?
       VAR_11 : VAR_12);
   break;
  }
  case 132:
  {
   struct nvme_dsm_range *VAR_21, *VAR_22;
   struct nda_trim_request *VAR_23;
   struct bio *VAR_24;
   int VAR_25;
   uint32_t VAR_26 = 0, VAR_27 = 0;

   VAR_23 = FUNC_11(sizeof(*VAR_23), VAR_6, VAR_7 | VAR_5);
   if (VAR_23 == ((void*)0)) {
    FUNC_4(VAR_20, ((void*)0), VAR_4);
    FUNC_20(VAR_17);
    FUNC_16(VAR_16);
    return;
   }
   FUNC_2(&VAR_23->bps);
   VAR_24 = VAR_20;
   VAR_25 = FUNC_12(FUNC_17(VAR_23->dsm), VAR_15);
   VAR_21 = VAR_23->dsm;
   VAR_22 = VAR_21 + VAR_25;
   do {
    FUNC_3(&VAR_23->bps, VAR_24, VAR_14);
    VAR_21->length =
        FUNC_9(VAR_24->bio_bcount / VAR_18->disk->d_sectorsize);
    VAR_21->starting_lba =
        FUNC_10(VAR_24->bio_offset / VAR_18->disk->d_sectorsize);
    VAR_27++;
    VAR_26 += VAR_21->length;
    VAR_21++;
    if (VAR_21 >= VAR_22)
     break;
    VAR_24 = FUNC_6(VAR_18->cam_iosched);


   } while (VAR_24 != ((void*)0));
   VAR_17->ccb_trim = VAR_23;
   FUNC_15(VAR_18, &VAR_17->nvmeio, VAR_23->dsm,
       VAR_21 - VAR_23->dsm);
   VAR_17->ccb_state = VAR_9;
   VAR_18->trim_count++;
   VAR_18->trim_ranges += VAR_27;
   VAR_18->trim_lbas += VAR_26;






   goto out;
  }
  case 131:
   FUNC_13(VAR_18, VAR_19);
   break;
  }
  VAR_17->ccb_state = VAR_8;
  VAR_17->ccb_bp = VAR_20;
out:
  VAR_17->ccb_h.flags |= VAR_2;
  VAR_18->outstanding_cmds++;
  VAR_18->refcount++;
  FUNC_8(VAR_16);
  FUNC_19(VAR_17);
  FUNC_7(VAR_16);
  VAR_18->refcount--;


  FUNC_16(VAR_16);
  break;
  }
 }
}
