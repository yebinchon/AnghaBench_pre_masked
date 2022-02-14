
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct route4_head {TYPE_1__* fastmap; } ;
struct route4_filter {int dummy; } ;
struct TYPE_2__ {int iif; struct route4_filter* filter; int id; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct route4_head *VAR_0, u32 VAR_1, int VAR_2,
     struct route4_filter *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2);
 VAR_0->fastmap[VAR_4].id = VAR_1;
 VAR_0->fastmap[VAR_4].iif = VAR_2;
 VAR_0->fastmap[VAR_4].filter = VAR_3;
}
