
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twe_softc {int twe_state; } ;
struct twe_request {int tr_length; int tr_flags; struct bio* tr_private; int tr_status; int tr_data; int tr_complete; } ;
struct bio {int bio_bcount; scalar_t__ bio_cmd; int bio_error; int bio_flags; int bio_pblkno; scalar_t__ bio_driver1; int bio_data; } ;
struct TYPE_4__ {int size; int unit; int block_count; int lba; int opcode; } ;
struct TYPE_5__ {TYPE_1__ io; } ;
typedef TYPE_2__ TWE_Command ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (struct twe_request*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 struct bio* FUNC_3 (struct twe_softc*) ;
 struct twe_request* FUNC_4 (struct twe_softc*) ;
 scalar_t__ FUNC_5 (struct twe_softc*,struct twe_request**) ;
 int FUNC_6 (struct twe_request*) ;
 int FUNC_7 (struct twe_request*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct twe_request*) ;

void
FUNC_10(struct twe_softc *VAR_13)
{
    struct twe_request *VAR_14;
    TWE_Command *VAR_15;
    struct bio *VAR_16;
    int VAR_17;

    FUNC_2(4);

    FUNC_1(VAR_13);
    if (VAR_13->twe_state & (VAR_10 | VAR_11))
 return;


    for (;;) {


 VAR_14 = FUNC_4(VAR_13);


 if (VAR_14 == ((void*)0)) {


     if (FUNC_5(VAR_13, &VAR_14))
  break;


     if ((VAR_16 = FUNC_3(VAR_13)) == ((void*)0)) {
  FUNC_7(VAR_14);
  break;
     }


     VAR_14->tr_complete = VAR_12;
     VAR_14->tr_private = VAR_16;
     VAR_14->tr_data = VAR_16->bio_data;
     VAR_14->tr_length = VAR_16->bio_bcount;
     VAR_15 = FUNC_0(VAR_14);
     if (VAR_16->bio_cmd == VAR_1) {
  VAR_14->tr_flags |= VAR_4;
  VAR_15->io.opcode = VAR_8;
     } else {
  VAR_14->tr_flags |= VAR_5;
  VAR_15->io.opcode = VAR_9;
     }


     VAR_15->io.size = 3;
     VAR_15->io.unit = *(int *)(VAR_16->bio_driver1);
     VAR_15->io.block_count = (VAR_14->tr_length + VAR_3 - 1) / VAR_3;
     VAR_15->io.lba = VAR_16->bio_pblkno;
 }


 if (VAR_14 == ((void*)0))
     break;


 VAR_17 = FUNC_6(VAR_14);

 if (VAR_17 != 0) {
     if (VAR_17 == VAR_2)
  break;
     VAR_14->tr_status = VAR_6;
     if (VAR_14->tr_private != ((void*)0)) {
  VAR_16 = (struct bio *)(VAR_14->tr_private);
  VAR_16->bio_error = VAR_17;
  VAR_16->bio_flags |= VAR_0;
  VAR_14->tr_private = ((void*)0);
  FUNC_8(VAR_16);
         FUNC_7(VAR_14);
     } else if (VAR_14->tr_flags & VAR_7)
  FUNC_9(VAR_14);
 }
    }
}
