
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
struct TYPE_4__ {scalar_t__ vbus; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef int PVBUS ;


 TYPE_1__* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cam_sim *VAR_0)
{
 PVBUS_EXT VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1);
 FUNC_2((PVBUS)VAR_1->vbus);
}
