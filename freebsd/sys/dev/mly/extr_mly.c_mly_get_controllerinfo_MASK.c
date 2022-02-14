
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct mly_softc {int * mly_controllerparam; int * mly_controllerinfo; } ;
struct mly_command_ioctl {int sub_ioctl; } ;
typedef int mci ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mly_command_ioctl*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mly_softc*,struct mly_command_ioctl*,void**,int,scalar_t__*,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct mly_softc *VAR_4)
{
    struct mly_command_ioctl VAR_5;
    u_int8_t VAR_6;
    int VAR_7;

    FUNC_1(1);

    if (VAR_4->mly_controllerinfo != ((void*)0))
 FUNC_2(VAR_4->mly_controllerinfo, VAR_3);


    FUNC_0(&VAR_5, sizeof(VAR_5));
    VAR_4->mly_controllerinfo = ((void*)0);
    VAR_5.sub_ioctl = VAR_1;
    if ((VAR_7 = FUNC_3(VAR_4, &VAR_5, (void **)&VAR_4->mly_controllerinfo, sizeof(*VAR_4->mly_controllerinfo),
      &VAR_6, ((void*)0), ((void*)0))))
 return(VAR_7);
    if (VAR_6 != 0)
 return(VAR_0);

    if (VAR_4->mly_controllerparam != ((void*)0))
 FUNC_2(VAR_4->mly_controllerparam, VAR_3);


    FUNC_0(&VAR_5, sizeof(VAR_5));
    VAR_4->mly_controllerparam = ((void*)0);
    VAR_5.sub_ioctl = VAR_2;
    if ((VAR_7 = FUNC_3(VAR_4, &VAR_5, (void **)&VAR_4->mly_controllerparam, sizeof(*VAR_4->mly_controllerparam),
      &VAR_6, ((void*)0), ((void*)0))))
 return(VAR_7);
    if (VAR_6 != 0)
 return(VAR_0);

    return(0);
}
