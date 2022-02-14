
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enabled; } ;
struct sge_qset {TYPE_2__ lro; } ;
struct port_info {int nqsets; int first_qset; struct adapter* adapter; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; } ;



__attribute__((used)) static int
FUNC_0(struct port_info *VAR_0, int VAR_1)
{
 int VAR_2;
 struct adapter *VAR_3 = VAR_0->adapter;
 struct sge_qset *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0->nqsets; VAR_2++) {
  VAR_4 = &VAR_3->sge.qs[VAR_0->first_qset + VAR_2];
  VAR_4->lro.enabled = (VAR_1 != 0);
 }
 return (0);
}
