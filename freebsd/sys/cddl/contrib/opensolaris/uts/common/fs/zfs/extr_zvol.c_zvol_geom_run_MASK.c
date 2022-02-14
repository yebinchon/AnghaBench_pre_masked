
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct g_provider* zv_provider; } ;
typedef TYPE_1__ zvol_state_t ;
struct g_provider {scalar_t__ name; } ;
typedef int ZVOL_DRIVER ;


 int FUNC_0 (struct g_provider*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int *,int ,int ,char*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(zvol_state_t *VAR_2)
{
 struct g_provider *VAR_3;

 VAR_3 = VAR_2->zv_provider;
 FUNC_0(VAR_3, 0);

 FUNC_1(VAR_1, VAR_2, &VAR_0, ((void*)0), 0, 0,
     "zfskern", "zvol %s", VAR_3->name + sizeof(ZVOL_DRIVER));
}
