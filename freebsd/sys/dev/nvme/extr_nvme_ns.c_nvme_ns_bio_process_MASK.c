
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_namespace {scalar_t__ boundary; } ;
struct nvme_dsm_range {int starting_lba; int length; } ;
struct bio {int bio_cmd; int bio_offset; int bio_bcount; struct nvme_dsm_range* bio_driver2; int bio_driver1; } ;
typedef int nvme_cb_fn_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvme_dsm_range*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct nvme_dsm_range* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int,scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (struct nvme_namespace*,struct nvme_dsm_range*,int,int ,struct bio*) ;
 int FUNC_6 (struct nvme_namespace*,int ,struct bio*) ;
 int FUNC_7 (struct nvme_namespace*,struct bio*,int ,struct bio*) ;
 int FUNC_8 (struct nvme_namespace*,struct bio*,int ,struct bio*) ;
 int FUNC_9 (struct nvme_namespace*) ;
 int FUNC_10 (struct nvme_namespace*,struct bio*,scalar_t__) ;

int
FUNC_11(struct nvme_namespace *VAR_6, struct bio *VAR_7,
 nvme_cb_fn_t VAR_8)
{
 struct nvme_dsm_range *VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 VAR_7->bio_driver1 = VAR_8;

 if (VAR_6->boundary > 0 &&
     (VAR_7->bio_cmd == 129 || VAR_7->bio_cmd == 128)) {
  VAR_10 = FUNC_4(VAR_7->bio_offset,
      VAR_7->bio_bcount, VAR_6->boundary);
  if (VAR_10 > 1)
   return (FUNC_10(VAR_6, VAR_7, VAR_6->boundary));
 }

 switch (VAR_7->bio_cmd) {
 case 129:
  VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_5, VAR_7);
  break;
 case 128:
  VAR_11 = FUNC_8(VAR_6, VAR_7, VAR_5, VAR_7);
  break;
 case 130:
  VAR_11 = FUNC_6(VAR_6, VAR_5, VAR_7);
  break;
 case 131:
  VAR_9 =
      FUNC_3(sizeof(struct nvme_dsm_range), VAR_2,
      VAR_4 | VAR_3);
  if (!VAR_9) {
   VAR_11 = VAR_1;
   break;
  }
  VAR_9->length =
      FUNC_1(VAR_7->bio_bcount/FUNC_9(VAR_6));
  VAR_9->starting_lba =
      FUNC_2(VAR_7->bio_offset/FUNC_9(VAR_6));
  VAR_7->bio_driver2 = VAR_9;
  VAR_11 = FUNC_5(VAR_6, VAR_9, 1,
   VAR_5, VAR_7);
  if (VAR_11 != 0)
   FUNC_0(VAR_9, VAR_2);
  break;
 default:
  VAR_11 = VAR_0;
  break;
 }

 return (VAR_11);
}
