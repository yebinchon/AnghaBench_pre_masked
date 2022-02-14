
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct mly_softc {int dummy; } ;
struct TYPE_3__ {int operation_device; } ;
struct TYPE_4__ {TYPE_1__ deviceoperation; } ;
struct mly_command_ioctl {TYPE_2__ param; int sub_ioctl; } ;
typedef int mci ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mly_command_ioctl*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mly_softc*,struct mly_command_ioctl*,int *,int ,scalar_t__*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct mly_softc *VAR_3)
{
    struct mly_command_ioctl VAR_4;
    u_int8_t VAR_5;
    int VAR_6;

    FUNC_1(1);


    FUNC_0(&VAR_4, sizeof(VAR_4));
    VAR_4.sub_ioctl = VAR_1;
    VAR_4.param.deviceoperation.operation_device = VAR_2;


    if ((VAR_6 = FUNC_2(VAR_3, &VAR_4, ((void*)0), 0, &VAR_5, ((void*)0), ((void*)0))))
 return(VAR_6);

    return((VAR_5 == 0) ? 0 : VAR_0);
}
