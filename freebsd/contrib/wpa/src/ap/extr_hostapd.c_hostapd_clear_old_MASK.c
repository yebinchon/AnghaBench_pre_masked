
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; TYPE_1__** bss; } ;
struct TYPE_3__ {int radius; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hostapd_iface *VAR_1)
{
 size_t VAR_2;





 for (VAR_2 = 0; VAR_2 < VAR_1->num_bss; VAR_2++) {
  FUNC_1(VAR_1->bss[VAR_2],
        VAR_0);
  FUNC_0(VAR_1->bss[VAR_2]);




  FUNC_2(VAR_1->bss[VAR_2]->radius, 0);

 }
}
