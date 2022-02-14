
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int sim_lock; scalar_t__ sim; scalar_t__ path; } ;


 int VAR_0 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(struct tws_softc *VAR_1)
{
    FUNC_0(VAR_1, "entry", 0, 0);
    FUNC_3(&VAR_1->sim_lock);
    if (VAR_1->path)
        FUNC_6(VAR_1->path);
    if (VAR_1->sim) {
        FUNC_5(FUNC_2(VAR_1->sim));
        FUNC_1(VAR_1->sim, VAR_0);
    }
    FUNC_4(&VAR_1->sim_lock);
}
