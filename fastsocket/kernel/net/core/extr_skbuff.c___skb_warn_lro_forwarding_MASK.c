
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(const struct sk_buff *VAR_0)
{
 if (FUNC_0())
  FUNC_1("%s: received packets cannot be forwarded"
      " while LRO is enabled\n", VAR_0->dev->name);
}
