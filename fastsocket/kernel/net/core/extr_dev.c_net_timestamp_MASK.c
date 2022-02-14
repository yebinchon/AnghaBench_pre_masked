
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv64; } ;
struct sk_buff {TYPE_1__ tstamp; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1)
{
 if (FUNC_1(&VAR_0))
  FUNC_0(VAR_1);
 else
  VAR_1->tstamp.tv64 = 0;
}
