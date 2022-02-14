
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_dev; } ;
struct amr_command {int ac_flags; int * ac_complete; struct amr_softc* ac_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (struct amr_command*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct amr_command *VAR_2)
{
    struct amr_softc *VAR_3 = VAR_2->ac_sc;
    int VAR_4, VAR_5;

    FUNC_3(2);

    VAR_2->ac_complete = ((void*)0);
    if ((VAR_4 = FUNC_2(VAR_2)) != 0)
 return(VAR_4);

    VAR_5 = 0;
    do {




 FUNC_1(VAR_3);
 FUNC_0(1000);
    } while ((VAR_2->ac_flags & VAR_0) && (VAR_5++ < 1000));
    if (!(VAR_2->ac_flags & VAR_0)) {
 VAR_4 = 0;
    } else {

 VAR_4 = VAR_1;
 FUNC_4(VAR_3->amr_dev, "polled command timeout\n");
    }
    return(VAR_4);
}
