
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
struct amr_softc {int amr_list_lock; } ;


 int FUNC_0 (struct amr_softc*,struct bio*) ;
 int FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct amr_softc *VAR_0, struct bio *VAR_1)
{
    FUNC_2(2);

    FUNC_3(&VAR_0->amr_list_lock);
    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0);
    FUNC_4(&VAR_0->amr_list_lock);
    return(0);
}
