
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct mly_softc {TYPE_2__* mly_mmbox; int mly_event_counter; int mly_event_waiting; int mly_event_change; } ;
struct mly_health_status {int next_event; int change_counter; } ;
struct mly_command_ioctl {int sub_ioctl; } ;
typedef int mci ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ mmm_health; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mly_health_status*,int *,int) ;
 int FUNC_1 (struct mly_command_ioctl*,int) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (struct mly_health_status*,int ) ;
 int FUNC_4 (struct mly_softc*,struct mly_command_ioctl*,void**,int,scalar_t__*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct mly_softc *VAR_3)
{
    struct mly_command_ioctl VAR_4;
    struct mly_health_status *VAR_5;
    u_int8_t VAR_6;
    int VAR_7;


    FUNC_1(&VAR_4, sizeof(VAR_4));
    VAR_5 = ((void*)0);
    VAR_4.sub_ioctl = VAR_1;

    if ((VAR_7 = FUNC_4(VAR_3, &VAR_4, (void **)&VAR_5, sizeof(*VAR_5), &VAR_6, ((void*)0), ((void*)0))))
 return(VAR_7);
    if (VAR_6 != 0)
 return(VAR_0);


    VAR_3->mly_event_change = VAR_5->change_counter;
    VAR_3->mly_event_waiting = VAR_5->next_event;
    VAR_3->mly_event_counter = VAR_5->next_event;


    FUNC_0(VAR_5, &VAR_3->mly_mmbox->mmm_health.status, sizeof(*VAR_5));

    FUNC_2(1, "initial change counter %d, event counter %d", VAR_5->change_counter, VAR_5->next_event);

    FUNC_3(VAR_5, VAR_2);
    return(0);
}
