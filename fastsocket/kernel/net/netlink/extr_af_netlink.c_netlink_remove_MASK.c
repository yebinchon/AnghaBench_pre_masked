
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {size_t sk_protocol; } ;
struct TYPE_4__ {int entries; } ;
struct TYPE_6__ {TYPE_1__ hash; } ;
struct TYPE_5__ {scalar_t__ subscriptions; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 FUNC_1();
 if (FUNC_4(VAR_1))
  VAR_0[VAR_1->sk_protocol].hash.entries--;
 if (FUNC_3(VAR_1)->subscriptions)
  FUNC_0(VAR_1);
 FUNC_2();
}
