
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ icmpv6; scalar_t__ ipv6; } ;
struct inet6_dev {TYPE_1__ stats; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *,void**,int ,int) ;

__attribute__((used)) static void FUNC_1(u64 *VAR_2, struct inet6_dev *VAR_3, int VAR_4,
        int VAR_5)
{
 switch(VAR_4) {
 case 128:
  FUNC_0(VAR_2, (void **)VAR_3->stats.ipv6, VAR_1, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_2, (void **)VAR_3->stats.icmpv6, VAR_0, VAR_5);
  break;
 }
}
