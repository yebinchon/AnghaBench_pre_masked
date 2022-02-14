
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct sk_buff *VAR_2,
          int VAR_3)
{
 return FUNC_1(VAR_2) &&
   ((FUNC_0(VAR_2) &&
    !(VAR_3 & VAR_0)) ||
   (FUNC_2(VAR_2)->nr_frags &&
    !(VAR_3 & VAR_1)));
}
