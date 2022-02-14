
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mly_user_health {int dummy; } ;
struct mly_user_command {int dummy; } ;
struct mly_softc {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int int32_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (struct mly_softc*,struct mly_user_command*) ;
 int FUNC_1 (struct mly_softc*,struct mly_user_health*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3,
    int32_t VAR_4, struct thread *VAR_5)
{
    struct mly_softc *VAR_6 = (struct mly_softc *)VAR_1->si_drv1;
    struct mly_user_command *VAR_7 = (struct mly_user_command *)VAR_3;
    struct mly_user_health *VAR_8 = (struct mly_user_health *)VAR_3;

    switch(VAR_2) {
    case 129:
 return(FUNC_0(VAR_6, VAR_7));
    case 128:
 return(FUNC_1(VAR_6, VAR_8));
    default:
 return(VAR_0);
    }
}
