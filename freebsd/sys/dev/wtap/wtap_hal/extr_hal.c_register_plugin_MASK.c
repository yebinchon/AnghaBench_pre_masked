
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtap_plugin {int (* init ) (struct wtap_plugin*) ;} ;
struct wtap_hal {struct wtap_plugin* plugin; } ;


 int FUNC_0 (struct wtap_plugin*) ;

void
FUNC_1(struct wtap_hal *VAR_0, struct wtap_plugin *VAR_1)
{

 VAR_1->init(VAR_1);
 VAR_0->plugin = VAR_1;
}
