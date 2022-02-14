
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int list; } ;
struct TYPE_4__ {TYPE_1__ ev_q; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_1(&VAR_0.ev_q.list)) != ((void*)0))
  FUNC_0(VAR_1);
}
