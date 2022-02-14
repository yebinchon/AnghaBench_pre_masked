
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int pf; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

u32 FUNC_6(adapter_t *VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_6->pf) | FUNC_1(VAR_7);
 u32 VAR_9;

 if (FUNC_2(VAR_6) <= VAR_2)
  VAR_8 |= VAR_3;
 else
  VAR_8 |= VAR_5;

 if (FUNC_3(VAR_6))
  VAR_8 |= VAR_4;

 FUNC_5(VAR_6, VAR_1, VAR_8);
 VAR_9 = FUNC_4(VAR_6, VAR_0);







 FUNC_5(VAR_6, VAR_1, 0);

 return VAR_9;
}
