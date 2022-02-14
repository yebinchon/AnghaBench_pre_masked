
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mly_user_health {int HealthStatusBuffer; } ;
struct mly_softc {scalar_t__ mly_event_change; TYPE_2__* mly_mmbox; int mly_lock; } ;
struct mly_health_status {scalar_t__ change_counter; } ;
typedef int mh ;
struct TYPE_3__ {struct mly_health_status status; } ;
struct TYPE_4__ {TYPE_1__ mmm_health; } ;


 int VAR_0 ;
 int FUNC_0 (struct mly_softc*) ;
 int FUNC_1 (struct mly_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct mly_health_status*,int) ;
 int FUNC_3 (struct mly_health_status*,int ,int) ;
 int FUNC_4 (scalar_t__*,int *,int,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mly_softc *VAR_3, struct mly_user_health *VAR_4)
{
    struct mly_health_status VAR_5;
    int VAR_6;


    if ((VAR_6 = FUNC_2(VAR_4->HealthStatusBuffer, &VAR_5, sizeof(VAR_5))) != 0)
 return(VAR_6);


    FUNC_0(VAR_3);
    VAR_6 = VAR_0;
    while ((VAR_6 != 0) && (VAR_3->mly_event_change == VAR_5.change_counter))
 VAR_6 = FUNC_4(&VAR_3->mly_event_change, &VAR_3->mly_lock, VAR_2 | VAR_1,
     "mlyhealth", 0);
    VAR_5 = VAR_3->mly_mmbox->mmm_health.status;
    FUNC_1(VAR_3);


    VAR_6 = FUNC_3(&VAR_5, VAR_4->HealthStatusBuffer, sizeof(VAR_5));
    return(VAR_6);
}
