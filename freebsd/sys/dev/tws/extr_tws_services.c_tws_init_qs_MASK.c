
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int q_lock; int ** q_tail; int ** q_head; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct tws_softc *VAR_1)
{

    FUNC_0(&VAR_1->q_lock);
    for(int VAR_2=0;VAR_2<VAR_0;VAR_2++) {
        VAR_1->q_head[VAR_2] = ((void*)0);
        VAR_1->q_tail[VAR_2] = ((void*)0);
    }
    FUNC_1(&VAR_1->q_lock);

}
