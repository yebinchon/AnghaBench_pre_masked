
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pcibase; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(sb_devc *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->pcibase+0x1A);
 VAR_1&=3;
 if(VAR_1)
  FUNC_1(VAR_0);
}
