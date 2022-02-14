
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct tws_softc {int sim; } ;
struct tws_request {scalar_t__ type; scalar_t__ ccb_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct tws_softc *VAR_3, struct tws_request *VAR_4)
{

    if (VAR_4->type == VAR_2) {
        union ccb *VAR_5 = (union ccb *)(VAR_4->ccb_ptr);

        FUNC_0(VAR_3->sim, 1);
        VAR_5->ccb_h.status |= VAR_0;
        VAR_5->ccb_h.status |= VAR_1;
    }
}
