
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frag_queue; int reseq_queue; int ack_queue; int write_queue; } ;
typedef TYPE_1__ ax25_cb ;


 int FUNC_0 (int *) ;

void FUNC_1(ax25_cb *VAR_0)
{
 FUNC_0(&VAR_0->write_queue);
 FUNC_0(&VAR_0->ack_queue);
 FUNC_0(&VAR_0->reseq_queue);
 FUNC_0(&VAR_0->frag_queue);
}
