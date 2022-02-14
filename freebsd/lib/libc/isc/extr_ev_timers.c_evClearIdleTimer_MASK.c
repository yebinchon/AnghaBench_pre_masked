
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int idle_timer ;
struct TYPE_5__ {TYPE_2__* opaque; } ;
typedef TYPE_1__ evTimerID ;
struct TYPE_6__ {int * uap; } ;
typedef TYPE_2__ evTimer ;
typedef int evContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__) ;

int
FUNC_2(evContext VAR_0, evTimerID VAR_1) {
 evTimer *VAR_2 = VAR_1.opaque;
 idle_timer *VAR_3 = VAR_2->uap;

 FUNC_0(VAR_3);
 return (FUNC_1(VAR_0, VAR_1));
}
