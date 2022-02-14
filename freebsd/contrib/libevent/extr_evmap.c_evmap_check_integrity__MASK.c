
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_base {TYPE_1__* evsel; } ;
struct TYPE_2__ {scalar_t__ add; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct event_base*) ;
 int VAR_1 ;
 int FUNC_1 (struct event_base*,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct event_base*,int ,int *) ;

void
FUNC_3(struct event_base *VAR_3)
{
 FUNC_1(VAR_3, VAR_1, ((void*)0));
 FUNC_2(VAR_3, VAR_2, ((void*)0));

 if (VAR_3->evsel->add == VAR_0)
  FUNC_0(VAR_3);
}
