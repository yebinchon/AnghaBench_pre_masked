
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rfkill {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct rfkill *VAR_3, bool VAR_4)
{
 u32 VAR_5 = VAR_0;


 if (VAR_3->state & VAR_2)
  VAR_5 = VAR_1;

 if (VAR_4)
  VAR_3->state |= VAR_5;
 else
  VAR_3->state &= ~VAR_5;
}
