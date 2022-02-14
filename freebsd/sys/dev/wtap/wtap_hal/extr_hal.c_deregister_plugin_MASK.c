
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtap_hal {TYPE_1__* plugin; } ;
struct TYPE_2__ {int (* deinit ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(struct wtap_hal *VAR_0)
{

 VAR_0->plugin->deinit(VAR_0->plugin);
 VAR_0->plugin = ((void*)0);
}
