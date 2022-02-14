
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {scalar_t__ dccpd_type; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_6)
{
 const __u8 VAR_7 = FUNC_0(VAR_6)->dccpd_type;

 return VAR_7 == VAR_0 ||
        VAR_7 == VAR_1 ||
        VAR_7 == VAR_2 ||
        VAR_7 == VAR_3 ||
        VAR_7 == VAR_4 ||
        VAR_7 == VAR_5;
}
