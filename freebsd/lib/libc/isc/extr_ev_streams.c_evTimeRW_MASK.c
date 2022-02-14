
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int evTimerID ;
struct TYPE_4__ {TYPE_2__* opaque; } ;
typedef TYPE_1__ evStreamID ;
struct TYPE_5__ {int flags; int timer; } ;
typedef TYPE_2__ evStream ;
typedef int evContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(evContext VAR_1, evStreamID VAR_2, evTimerID VAR_3) {
 evStream *VAR_4 = VAR_2.opaque;

 FUNC_0(VAR_1);

 VAR_4->timer = VAR_3;
 VAR_4->flags |= VAR_0;
 return (0);
}
