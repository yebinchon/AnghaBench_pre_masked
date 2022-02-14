
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct queue_set {struct cmp_queue* cq; } ;
struct nicvf {int cq_coalesce_usecs; } ;
struct cq_cfg {int ena; scalar_t__ avg_con; int qsize; scalar_t__ caching; scalar_t__ reset; } ;
struct TYPE_2__ {scalar_t__ phys_base; } ;
struct cmp_queue {int thresh; TYPE_1__ dmem; int enable; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nicvf*,int ,int,int ) ;
 int FUNC_1 (struct nicvf*,struct queue_set*,int) ;

__attribute__((used)) static void
FUNC_2(struct nicvf *VAR_6, struct queue_set *VAR_7,
    int VAR_8, boolean_t VAR_9)
{
 struct cmp_queue *VAR_10;
 struct cq_cfg VAR_11;

 VAR_10 = &VAR_7->cq[VAR_8];
 VAR_10->enable = VAR_9;

 if (!VAR_10->enable) {
  FUNC_1(VAR_6, VAR_7, VAR_8);
  return;
 }


 FUNC_0(VAR_6, VAR_3, VAR_8, VAR_1);


 FUNC_0(VAR_6, VAR_2, VAR_8,
     (uint64_t)(VAR_10->dmem.phys_base));


 VAR_11.ena = 1;
 VAR_11.reset = 0;
 VAR_11.caching = 0;
 VAR_11.qsize = VAR_0;
 VAR_11.avg_con = 0;
 FUNC_0(VAR_6, VAR_3, VAR_8, *(uint64_t *)&VAR_11);


 FUNC_0(VAR_6, VAR_5, VAR_8, VAR_10->thresh);
 FUNC_0(VAR_6, VAR_4, VAR_8,
     VAR_6->cq_coalesce_usecs);
}
