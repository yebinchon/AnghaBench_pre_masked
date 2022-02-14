
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torus {scalar_t__ link_cnt; scalar_t__ link_pool_sz; struct link* link_pool; TYPE_1__* osm; } ;
struct link {int dummy; } ;
struct TYPE_2__ {int log; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static
struct link *FUNC_1(struct torus *VAR_1)
{
 if (VAR_1->link_cnt >= VAR_1->link_pool_sz) {
  FUNC_0(&VAR_1->osm->log, VAR_0,
   "ERR 4E16: unexpectedly out of pre-allocated link "
   "structures!\n");
  return ((void*)0);
 }
 return &VAR_1->link_pool[VAR_1->link_cnt++];
}
