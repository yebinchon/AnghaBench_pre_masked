
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sge_qset {TYPE_4__* txq; } ;
struct TYPE_10__ {struct sge_qset* qs; } ;
struct TYPE_8__ {int nports; } ;
struct TYPE_12__ {int * tq; TYPE_3__ sge; TYPE_2__* port; TYPE_1__ params; } ;
typedef TYPE_5__ adapter_t ;
struct TYPE_11__ {int qresume_task; } ;
struct TYPE_9__ {scalar_t__ nqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(adapter_t *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(VAR_4, VAR_0, VAR_1, 0);

 if (VAR_4->tq == ((void*)0))
  return;

 for (VAR_6 = VAR_5 = 0; VAR_5 < (VAR_4)->params.nports; VAR_5++)
  VAR_6 += VAR_4->port[VAR_5].nqsets;
}
