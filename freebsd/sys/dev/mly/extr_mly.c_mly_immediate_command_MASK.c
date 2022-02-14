
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_state; int mly_lock; } ;
struct mly_command {int mc_flags; struct mly_softc* mc_sc; } ;


 int FUNC_0 (struct mly_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mly_softc*) ;
 int FUNC_3 (struct mly_command*) ;
 int FUNC_4 (struct mly_command*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mly_command *VAR_3)
{
    struct mly_softc *VAR_4 = VAR_3->mc_sc;
    int VAR_5;

    FUNC_1(1);

    FUNC_0(VAR_4);
    if ((VAR_5 = FUNC_3(VAR_3))) {
 return(VAR_5);
    }

    if (VAR_4->mly_state & VAR_1) {

 while(!(VAR_3->mc_flags & VAR_0)) {
     FUNC_4(VAR_3, &VAR_4->mly_lock, VAR_2, "mlywait", 0);
 }
    } else {

 while(!(VAR_3->mc_flags & VAR_0)) {
     FUNC_2(VAR_3->mc_sc);
 }
    }
    return(0);
}
