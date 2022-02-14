
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int u_char ;
struct md_s {int object; } ;
struct bio {int bio_cmd; int bio_flags; int bio_ma_offset; int bio_offset; int bio_length; TYPE_1__** bio_ma; int * bio_data; } ;
typedef int bus_dma_segment_t ;
struct TYPE_20__ {scalar_t__ dirty; } ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int *,int,scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (scalar_t__,int *,int,int) ;
 int FUNC_9 (TYPE_1__**,int,TYPE_1__**,int,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (int ,int,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (int ,TYPE_1__**,int,int *,int *) ;
 int FUNC_25 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_26(struct md_s *VAR_10, struct bio *VAR_11)
{
 vm_page_t VAR_12;
 u_char *VAR_13;
 vm_pindex_t VAR_14, VAR_15;
 bus_dma_segment_t *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 switch (VAR_11->bio_cmd) {
 case 129:
 case 128:
 case 130:
  break;
 default:
  return (VAR_3);
 }

 VAR_13 = VAR_11->bio_data;
 VAR_18 = (VAR_11->bio_flags & (VAR_0|VAR_1)) != 0 ?
     VAR_11->bio_ma_offset : 0;
 VAR_16 = (VAR_11->bio_flags & VAR_1) != 0 ?
     (bus_dma_segment_t *)VAR_11->bio_data : ((void*)0);
 VAR_19 = VAR_11->bio_offset % VAR_4;
 VAR_15 = (VAR_11->bio_offset + VAR_11->bio_length - 1) / VAR_4;
 VAR_21 = (VAR_11->bio_offset + VAR_11->bio_length - 1) % VAR_4 + 1;

 VAR_17 = VAR_8;
 FUNC_0(VAR_10->object);
 FUNC_12(VAR_10->object, 1);
 for (VAR_14 = VAR_11->bio_offset / VAR_4; VAR_14 <= VAR_15; VAR_14++) {
  VAR_20 = ((VAR_14 == VAR_15) ? VAR_21 : VAR_4) - VAR_19;
  VAR_12 = FUNC_18(VAR_10->object, VAR_14, VAR_5);
  if (VAR_11->bio_cmd == 129) {
   if (FUNC_16(VAR_12))
    VAR_17 = VAR_8;
   else
    VAR_17 = FUNC_24(VAR_10->object, &VAR_12, 1,
        ((void*)0), ((void*)0));
   if (VAR_17 == VAR_6) {
    FUNC_4(VAR_12);
    break;
   } else if (VAR_17 == VAR_7) {






    FUNC_10(VAR_12);
    FUNC_22(VAR_12);
   }
   if ((VAR_11->bio_flags & VAR_0) != 0) {
    FUNC_9(&VAR_12, VAR_19, VAR_11->bio_ma,
        VAR_18, VAR_20);
   } else if ((VAR_11->bio_flags & VAR_1) != 0) {
    FUNC_8(FUNC_2(VAR_12) + VAR_19,
        VAR_16, VAR_18, VAR_20);
    FUNC_3(VAR_13, VAR_20);
   } else {
    FUNC_7(FUNC_2(VAR_12) + VAR_19, VAR_13, VAR_20);
    FUNC_3(VAR_13, VAR_20);
   }
  } else if (VAR_11->bio_cmd == 128) {
   if (VAR_20 == VAR_4 || FUNC_16(VAR_12))
    VAR_17 = VAR_8;
   else
    VAR_17 = FUNC_24(VAR_10->object, &VAR_12, 1,
        ((void*)0), ((void*)0));
   if (VAR_17 == VAR_6) {
    FUNC_4(VAR_12);
    break;
   } else if (VAR_17 == VAR_7)
    FUNC_10(VAR_12);

   if ((VAR_11->bio_flags & VAR_0) != 0) {
    FUNC_9(VAR_11->bio_ma, VAR_18, &VAR_12,
        VAR_19, VAR_20);
   } else if ((VAR_11->bio_flags & VAR_1) != 0) {
    FUNC_6(VAR_16, VAR_18,
        FUNC_2(VAR_12) + VAR_19, VAR_20);
   } else {
    FUNC_5(VAR_13, FUNC_2(VAR_12) + VAR_19, VAR_20);
   }

   FUNC_22(VAR_12);
   if (VAR_12->dirty != VAR_9) {
    FUNC_17(VAR_12);
    FUNC_25(VAR_12);
   }
  } else if (VAR_11->bio_cmd == 130) {
   if (VAR_20 == VAR_4 || FUNC_16(VAR_12))
    VAR_17 = VAR_8;
   else
    VAR_17 = FUNC_24(VAR_10->object, &VAR_12, 1,
        ((void*)0), ((void*)0));
   if (VAR_17 == VAR_6) {
    FUNC_4(VAR_12);
    break;
   } else if (VAR_17 == VAR_7) {
    FUNC_4(VAR_12);
    VAR_12 = ((void*)0);
   } else {

    if (VAR_20 != VAR_4) {
     FUNC_11(VAR_12, VAR_19, VAR_20);
     if (VAR_12->dirty != VAR_9) {
      FUNC_17(VAR_12);
      FUNC_25(VAR_12);
     }
    } else {
     FUNC_25(VAR_12);
     FUNC_4(VAR_12);
     VAR_12 = ((void*)0);
    }
   }
  }
  if (VAR_12 != ((void*)0)) {
   FUNC_23(VAR_12);
   FUNC_19(VAR_12);
   if (FUNC_15(VAR_12))
    FUNC_20(VAR_12);
   else
    FUNC_14(VAR_12);
   FUNC_21(VAR_12);
  }


  VAR_13 += VAR_4 - VAR_19;
  VAR_19 = 0;
  VAR_18 += VAR_20;
 }
 FUNC_13(VAR_10->object);
 FUNC_1(VAR_10->object);
 return (VAR_17 != VAR_6 ? 0 : VAR_2);
}
