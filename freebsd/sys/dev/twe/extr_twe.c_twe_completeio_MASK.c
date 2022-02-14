
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twe_softc {int dummy; } ;
struct twe_request {scalar_t__ tr_status; struct bio* tr_private; struct twe_softc* tr_sc; } ;
struct bio {int bio_flags; int bio_error; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct twe_request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct twe_softc*,char*) ;
 int FUNC_3 (struct twe_request*) ;
 scalar_t__ FUNC_4 (struct twe_request*) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static void
FUNC_6(struct twe_request *VAR_3)
{
    TWE_Command *VAR_4 = FUNC_0(VAR_3);
    struct twe_softc *VAR_5 = VAR_3->tr_sc;
    struct bio *VAR_6 = VAR_3->tr_private;

    FUNC_1(4);

    if (VAR_3->tr_status == VAR_2) {

 if (VAR_4->generic.status)
     if (FUNC_4(VAR_3)) {
  VAR_6->bio_error = VAR_1;
  VAR_6->bio_flags |= VAR_0;
     }

    } else {
 FUNC_2(VAR_5, "twe_completeio on incomplete command");
    }
    VAR_3->tr_private = ((void*)0);
    FUNC_5(VAR_6);
    FUNC_3(VAR_3);
}
