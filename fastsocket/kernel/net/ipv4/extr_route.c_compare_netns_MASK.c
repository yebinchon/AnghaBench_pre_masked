
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct rtable *VAR_0, struct rtable *VAR_1)
{
 return FUNC_0(VAR_0->u.dst.dev) == FUNC_0(VAR_1->u.dst.dev);
}
