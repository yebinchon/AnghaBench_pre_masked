
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_kring {int rtail; int rcur; int rhead; int nr_hwtail; int nr_hwcur; int name; TYPE_1__* ring; } ;
struct TYPE_2__ {int tail; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct netmap_kring *VAR_0)
{





 VAR_0->ring->tail = VAR_0->rtail = VAR_0->nr_hwtail;

 FUNC_0(5, "%s now hwcur %d hwtail %d head %d cur %d tail %d",
  VAR_0->name, VAR_0->nr_hwcur, VAR_0->nr_hwtail,
  VAR_0->rhead, VAR_0->rcur, VAR_0->rtail);
}
