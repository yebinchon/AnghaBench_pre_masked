
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rtable {int rt_flags; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct rtable *VAR_2)
{
 return (VAR_2->rt_flags & (VAR_1 | VAR_0)) ||
  VAR_2->u.dst.expires;
}
