
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct lmb_region {TYPE_1__* region; } ;
struct TYPE_2__ {int size; int base; } ;


 long FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static long FUNC_1(struct lmb_region *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 u64 VAR_3 = VAR_0->region[VAR_1].base;
 u64 VAR_4 = VAR_0->region[VAR_1].size;
 u64 VAR_5 = VAR_0->region[VAR_2].base;
 u64 VAR_6 = VAR_0->region[VAR_2].size;

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
}
