
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {int ack_queue; int write_queue; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct lapb_cb *VAR_0)
{
 FUNC_0(&VAR_0->write_queue);
 FUNC_0(&VAR_0->ack_queue);
}
