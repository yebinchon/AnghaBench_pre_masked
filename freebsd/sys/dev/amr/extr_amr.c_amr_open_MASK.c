
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct amr_softc {int amr_state; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (char*) ;
 struct amr_softc* FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
    int VAR_5 = FUNC_1(VAR_1);
    struct amr_softc *VAR_6 = FUNC_3(FUNC_2("amr"), VAR_5);

    FUNC_0(1);

    VAR_6->amr_state |= VAR_0;
    return(0);
}
