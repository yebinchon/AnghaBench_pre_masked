
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct mtx {int dummy; } ;
struct TYPE_11__ {int cntxt_id; scalar_t__ credits; struct mtx lock; } ;
struct sge_qset {TYPE_6__ rspq; TYPE_8__* fl; } ;
struct port_info {int nqsets; int first_qset; TYPE_2__* adapter; } ;
struct TYPE_9__ {struct sge_qset* qs; } ;
struct TYPE_10__ {int flags; TYPE_1__ sge; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_12__ {int credits; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_8__*) ;
 scalar_t__ FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct sge_qset*,int,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_6__*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3, int VAR_4)
{
 struct port_info *VAR_5 = VAR_3;
 int VAR_6, VAR_7 = VAR_5->nqsets;
 adapter_t *VAR_8 = VAR_5->adapter;
 struct sge_qset *VAR_9;
 struct mtx *VAR_10;

 FUNC_0((VAR_8->flags & VAR_2) == 0,
     ("can't call timer reclaim for msi-x"));

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_9 = &VAR_8->sge.qs[VAR_5->first_qset + VAR_6];

  FUNC_4(VAR_9, 16, VAR_1);
  VAR_10 = (VAR_8->flags & VAR_2) ? &VAR_9->rspq.lock :
       &VAR_8->sge.qs[0].rspq.lock;

  if (FUNC_2(VAR_10)) {

   uint32_t VAR_11 = FUNC_6(VAR_8, VAR_0);

   if (VAR_9->fl[0].credits < VAR_9->fl[0].size - 16)
    FUNC_1(VAR_8, &VAR_9->fl[0]);
   if (VAR_9->fl[1].credits < VAR_9->fl[1].size - 16)
    FUNC_1(VAR_8, &VAR_9->fl[1]);

   if (VAR_11 & (1 << VAR_9->rspq.cntxt_id)) {
    if (VAR_9->rspq.credits) {
     FUNC_5(VAR_8, &VAR_9->rspq, 1);
     VAR_9->rspq.credits--;
     FUNC_7(VAR_8, VAR_0,
         1 << VAR_9->rspq.cntxt_id);
    }
   }
   FUNC_3(VAR_10);
  }
 }
}
