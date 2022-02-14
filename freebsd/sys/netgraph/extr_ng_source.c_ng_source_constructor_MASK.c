
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* sc_p ;
typedef int node_p ;
struct TYPE_5__ {int ifq_maxlen; } ;
struct TYPE_6__ {int intr_ch; TYPE_1__ snd_queue; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_3)
{
 sc_p VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);

 FUNC_0(VAR_3, VAR_4);
 VAR_4->node = VAR_3;
 VAR_4->snd_queue.ifq_maxlen = 2048;
 FUNC_2(&VAR_4->intr_ch);

 return (0);
}
