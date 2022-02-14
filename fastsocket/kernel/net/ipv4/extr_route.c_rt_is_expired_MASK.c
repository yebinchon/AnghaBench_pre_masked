
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rtable {scalar_t__ rt_genid; TYPE_2__ u; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct rtable *VAR_0)
{
 return VAR_0->rt_genid != FUNC_1(FUNC_0(VAR_0->u.dst.dev));
}
