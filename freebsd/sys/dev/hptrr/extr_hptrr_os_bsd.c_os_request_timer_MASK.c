
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ext_type; int timer; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef int HPT_U32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ,TYPE_1__*,int ) ;
 int VAR_2 ;

void FUNC_2(void * VAR_3, HPT_U32 VAR_4)
{
 PVBUS_EXT VAR_5 = VAR_3;

 FUNC_0(VAR_5->ext_type==VAR_0);

 FUNC_1(&VAR_5->timer, VAR_1 * VAR_4, 0,
     VAR_2, VAR_5, 0);
}
