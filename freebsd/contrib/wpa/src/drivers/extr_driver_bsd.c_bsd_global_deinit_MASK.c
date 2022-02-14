
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsd_driver_global {int sock; int route; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bsd_driver_global*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct bsd_driver_global *VAR_1 = VAR_0;

 FUNC_1(VAR_1->route);
 (void) FUNC_0(VAR_1->route);
 (void) FUNC_0(VAR_1->sock);
 FUNC_2(VAR_1);
}
