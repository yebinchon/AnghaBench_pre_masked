
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ext_type; int timer; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef int HPT_U32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

void FUNC_4(void * VAR_4, HPT_U32 VAR_5)
{
 PVBUS_EXT VAR_6 = VAR_4;

 FUNC_0(VAR_6->ext_type==VAR_0);





 FUNC_3(VAR_3, VAR_6, VAR_6->timer);
 VAR_6->timer = FUNC_2(VAR_3, VAR_6, VAR_5 * VAR_2 / 1000000);

}
