
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sc_info {int pch_cnt; int rch_cnt; TYPE_2__* rch; TYPE_1__* pch; } ;
struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_3__ {scalar_t__ active; } ;



__attribute__((used)) static int
FUNC_0(struct sc_info *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->pch_cnt; VAR_1++)
  VAR_2 += VAR_0->pch[VAR_1].active;

 for (VAR_1 = 0; VAR_1 < VAR_0->rch_cnt; VAR_1++)
  VAR_2 += VAR_0->rch[VAR_1].active;

 return (VAR_2);
}
