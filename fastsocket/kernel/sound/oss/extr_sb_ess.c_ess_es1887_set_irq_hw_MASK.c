
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irq; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (sb_devc * VAR_0)
{
 int VAR_1;

 if ((VAR_1 = FUNC_1 (VAR_0->irq)) == -1) return;

 FUNC_0 (VAR_0, 0x7f, 0x0f, 0x01 | ((VAR_1 + 1) << 1));
}
