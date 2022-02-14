
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct nda_softc {int nsid; TYPE_1__* disk; } ;
struct ccb_nvmeio {int cmd; } ;
struct bio {int bio_flags; scalar_t__ bio_bcount; int bio_pblkno; void* bio_data; } ;
struct TYPE_2__ {scalar_t__ d_sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ccb_nvmeio*,int ,int ,int,void*,scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,scalar_t__,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct nda_softc *VAR_7, struct ccb_nvmeio *VAR_8,
    struct bio *VAR_9, uint32_t VAR_10)
{
 int VAR_11 = VAR_10 == VAR_4 ? VAR_2 : VAR_3;
 void *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14;

 if (VAR_9->bio_flags & VAR_0) {
  VAR_11 |= VAR_1;
  VAR_12 = VAR_9;
 } else {
  VAR_12 = VAR_9->bio_data;
 }

 VAR_13 = VAR_9->bio_pblkno;
 VAR_14 = VAR_9->bio_bcount / VAR_7->disk->d_sectorsize;

 FUNC_0(VAR_8,
     0,
     VAR_6,
     VAR_11,
     VAR_12,
     VAR_9->bio_bcount,
     VAR_5 * 1000);
 FUNC_1(&VAR_8->cmd, VAR_10, VAR_7->nsid, VAR_13, VAR_14);
}
