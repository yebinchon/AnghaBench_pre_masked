
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int iif; } ;
struct TYPE_4__ {int lastuse; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct rtable {int rt_flags; TYPE_3__ fl; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtable*) ;

__attribute__((used)) static inline u32 FUNC_1(struct rtable *VAR_4)
{
 u32 VAR_5 = VAR_3 - VAR_4->u.dst.lastuse;

 VAR_5 = ~VAR_5 & ~(3<<30);

 if (FUNC_0(VAR_4))
  VAR_5 |= (1<<31);

 if (!VAR_4->fl.iif ||
     !(VAR_4->rt_flags & (VAR_0|VAR_2|VAR_1)))
  VAR_5 |= (1<<30);

 return VAR_5;
}
