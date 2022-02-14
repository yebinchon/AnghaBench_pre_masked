
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lmb_region {TYPE_1__* region; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int FUNC_0 (struct lmb_region*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct lmb_region *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_0->region[VAR_1].size += VAR_0->region[VAR_2].size;
 FUNC_0(VAR_0, VAR_2);
}
