
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int upper; int lower; } ;
struct TYPE_6__ {TYPE_1__ seq; } ;
struct TYPE_7__ {TYPE_2__ s; } ;
struct subscription {scalar_t__ timeout; int timer; TYPE_3__ evt; int subscription_list; int server_ref; } ;
struct port {int dummy; } ;
struct TYPE_8__ {int subscription_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct subscription*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct subscription*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct subscription*) ;
 struct port* FUNC_6 (int ) ;
 int FUNC_7 (struct port*) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_8(struct subscription *VAR_3)
{
 struct port *VAR_4;



 VAR_4 = FUNC_6(VAR_3->server_ref);
 if (VAR_4 == ((void*)0))
  return;



 if (VAR_3->timeout == VAR_1) {
  FUNC_7(VAR_4);
  return;
 }



 FUNC_5(VAR_3);



 FUNC_3(&VAR_3->subscription_list);



 FUNC_7(VAR_4);



 FUNC_4(VAR_3, VAR_3->evt.s.seq.lower, VAR_3->evt.s.seq.upper,
     VAR_0, 0, 0);



 FUNC_1(&VAR_3->timer);
 FUNC_2(VAR_3);
 FUNC_0(&VAR_2.subscription_count);
}
