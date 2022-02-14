
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int h_App; int (* f_Event ) (int ,int ) ;struct tgec_regs* p_MemMap; } ;
typedef TYPE_1__ t_Tgec ;
typedef scalar_t__ t_Handle ;
struct tgec_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tgec_regs*,int) ;
 int FUNC_1 (struct tgec_regs*,int) ;
 int FUNC_2 (struct tgec_regs*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(t_Handle VAR_4)
{
     t_Tgec *VAR_5 = (t_Tgec *)VAR_4;
     uint32_t VAR_6;
     struct tgec_regs *VAR_7 = VAR_5->p_MemMap;


     VAR_6 = FUNC_1(VAR_7, (VAR_1 | VAR_0));
     VAR_6 &= FUNC_2(VAR_7);

     FUNC_0(VAR_7, VAR_6);

     if (VAR_6 & VAR_1)
         VAR_5->f_Event(VAR_5->h_App, VAR_3);
     if (VAR_6 & VAR_0)
         VAR_5->f_Event(VAR_5->h_App, VAR_2);
}
