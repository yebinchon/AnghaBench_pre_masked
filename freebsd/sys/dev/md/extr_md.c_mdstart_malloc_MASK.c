
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef uintptr_t u_char ;
struct md_s {uintptr_t sectorsize; int flags; int uma; int indir; } ;
struct bio {int bio_cmd; int bio_flags; uintptr_t* bio_data; int bio_ma_offset; uintptr_t bio_length; uintptr_t bio_offset; scalar_t__ bio_resid; int * bio_ma; } ;
typedef uintptr_t off_t ;
typedef int bus_dma_segment_t ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (uintptr_t*,void*,uintptr_t) ;
 int FUNC_2 (uintptr_t*,uintptr_t) ;
 int FUNC_3 (uintptr_t*,uintptr_t) ;
 int FUNC_4 (int **,int*,uintptr_t,void*,uintptr_t,int ) ;
 int FUNC_5 (int **,int*,uintptr_t,void*,uintptr_t,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (uintptr_t*,uintptr_t,uintptr_t) ;
 uintptr_t FUNC_7 (int ,uintptr_t) ;
 int FUNC_8 (int ,uintptr_t,uintptr_t) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,void*) ;

__attribute__((used)) static int
FUNC_11(struct md_s *VAR_13, struct bio *VAR_14)
{
 u_char *VAR_15;
 vm_page_t *VAR_16;
 bus_dma_segment_t *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 off_t VAR_23, VAR_24, VAR_25;
 uintptr_t VAR_26, VAR_27;

 switch (VAR_14->bio_cmd) {
 case 129:
 case 128:
 case 130:
  break;
 default:
  return (VAR_3);
 }

 VAR_22 = (VAR_14->bio_flags & VAR_0) != 0;
 VAR_17 = (VAR_14->bio_flags & VAR_1) != 0 ?
     (bus_dma_segment_t *)VAR_14->bio_data : ((void*)0);
 if (VAR_22) {
  VAR_16 = VAR_14->bio_ma;
  VAR_21 = VAR_14->bio_ma_offset;
  VAR_15 = ((void*)0);
  FUNC_0(VAR_17 == ((void*)0), ("vlists cannot be unmapped"));
 } else if (VAR_17 != ((void*)0)) {
  VAR_21 = VAR_14->bio_ma_offset;
  VAR_15 = ((void*)0);
 } else {
  VAR_15 = VAR_14->bio_data;
 }

 VAR_24 = VAR_14->bio_length / VAR_13->sectorsize;
 VAR_23 = VAR_14->bio_offset / VAR_13->sectorsize;
 VAR_19 = 0;
 while (VAR_24--) {
  VAR_27 = FUNC_7(VAR_13->indir, VAR_23);
  if (VAR_14->bio_cmd == 130) {
   if (VAR_27 != 0)
    VAR_19 = FUNC_8(VAR_13->indir, VAR_23, 0);
  } else if (VAR_14->bio_cmd == 129) {
   if (VAR_27 == 0) {
    if (VAR_22) {
     VAR_19 = FUNC_4(&VAR_16, &VAR_21,
         VAR_13->sectorsize, ((void*)0), 0,
         VAR_9);
    } else if (VAR_17 != ((void*)0)) {
     VAR_19 = FUNC_5(&VAR_17,
         &VAR_21, VAR_13->sectorsize, ((void*)0), 0,
         VAR_9);
    } else
     FUNC_2(VAR_15, VAR_13->sectorsize);
   } else if (VAR_27 <= 255) {
    if (VAR_22) {
     VAR_19 = FUNC_4(&VAR_16, &VAR_21,
         VAR_13->sectorsize, ((void*)0), VAR_27,
         VAR_6);
    } else if (VAR_17 != ((void*)0)) {
     VAR_19 = FUNC_5(&VAR_17,
         &VAR_21, VAR_13->sectorsize, ((void*)0), VAR_27,
         VAR_6);
    } else
     FUNC_6(VAR_15, VAR_27, VAR_13->sectorsize);
   } else {
    if (VAR_22) {
     VAR_19 = FUNC_4(&VAR_16, &VAR_21,
         VAR_13->sectorsize, (void *)VAR_27, 0,
         VAR_7);
    } else if (VAR_17 != ((void*)0)) {
     VAR_19 = FUNC_5(&VAR_17,
         &VAR_21, VAR_13->sectorsize,
         (void *)VAR_27, 0,
         VAR_7);
    } else {
     FUNC_1((void *)VAR_27, VAR_15, VAR_13->sectorsize);
     FUNC_3(VAR_15, VAR_13->sectorsize);
    }
   }
   VAR_27 = 0;
  } else if (VAR_14->bio_cmd == 128) {
   if (VAR_13->flags & VAR_4) {
    if (VAR_22) {
     VAR_20 = FUNC_4(&VAR_16, &VAR_21,
         VAR_13->sectorsize, &VAR_25, 0,
         VAR_5);
     VAR_18 = VAR_20 == 0 ? VAR_13->sectorsize : 0;
    } else if (VAR_17 != ((void*)0)) {
     VAR_20 = FUNC_5(&VAR_17,
         &VAR_21, VAR_13->sectorsize, &VAR_25, 0,
         VAR_5);
     VAR_18 = VAR_20 == 0 ? VAR_13->sectorsize : 0;
    } else {
     VAR_25 = VAR_15[0];
     for (VAR_18 = 1; VAR_18 < VAR_13->sectorsize; VAR_18++) {
      if (VAR_15[VAR_18] != VAR_25)
       break;
     }
    }
   } else {
    VAR_18 = 0;
    VAR_25 = 0;
   }
   if (VAR_18 == VAR_13->sectorsize) {
    if (VAR_27 != VAR_25)
     VAR_19 = FUNC_8(VAR_13->indir, VAR_23, VAR_25);
   } else {
    if (VAR_27 <= 255) {
     VAR_26 = (uintptr_t)FUNC_9(VAR_13->uma,
         VAR_12 ? VAR_11 :
         VAR_10);
     if (VAR_26 == 0) {
      VAR_19 = VAR_2;
      break;
     }
     if (VAR_22) {
      VAR_19 = FUNC_4(&VAR_16,
          &VAR_21, VAR_13->sectorsize,
          (void *)VAR_26, 0,
          VAR_8);
     } else if (VAR_17 != ((void*)0)) {
      VAR_19 = FUNC_5(
          &VAR_17, &VAR_21,
          VAR_13->sectorsize, (void *)VAR_26,
          0, VAR_8);
     } else {
      FUNC_1(VAR_15, (void *)VAR_26,
          VAR_13->sectorsize);
     }
     VAR_19 = FUNC_8(VAR_13->indir, VAR_23, VAR_26);
    } else {
     if (VAR_22) {
      VAR_19 = FUNC_4(&VAR_16,
          &VAR_21, VAR_13->sectorsize,
          (void *)VAR_27, 0,
          VAR_8);
     } else if (VAR_17 != ((void*)0)) {
      VAR_19 = FUNC_5(
          &VAR_17, &VAR_21,
          VAR_13->sectorsize, (void *)VAR_27,
          0, VAR_8);
     } else {
      FUNC_1(VAR_15, (void *)VAR_27,
          VAR_13->sectorsize);
     }
     VAR_27 = 0;
    }
   }
  } else {
   VAR_19 = VAR_3;
  }
  if (VAR_27 > 255)
   FUNC_10(VAR_13->uma, (void*)VAR_27);
  if (VAR_19 != 0)
   break;
  VAR_23++;
  if (!VAR_22 && VAR_17 == ((void*)0))
   VAR_15 += VAR_13->sectorsize;
 }
 VAR_14->bio_resid = 0;
 return (VAR_19);
}
