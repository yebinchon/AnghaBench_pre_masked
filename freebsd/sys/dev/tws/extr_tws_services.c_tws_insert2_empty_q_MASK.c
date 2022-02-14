
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct tws_softc {struct tws_request** q_tail; struct tws_request** q_head; int q_lock; } ;
struct tws_request {int * prev; int next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct tws_softc *VAR_1, struct tws_request *VAR_2,
                                u_int8_t VAR_3 )
{

    FUNC_0(&VAR_1->q_lock, VAR_0);
    VAR_2->next = *(VAR_2->prev = ((void*)0));
    VAR_1->q_head[VAR_3] = VAR_1->q_tail[VAR_3] = VAR_2;

}
