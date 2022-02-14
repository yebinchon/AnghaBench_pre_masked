
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ACBFlag; } ;
typedef TYPE_1__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(PACB VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0();
     VAR_5->ACBFlag |= VAR_2;

 FUNC_3(VAR_0,VAR_3);
 while (!(FUNC_2(VAR_4) & VAR_1));
 FUNC_1(VAR_6);
 return;
}
