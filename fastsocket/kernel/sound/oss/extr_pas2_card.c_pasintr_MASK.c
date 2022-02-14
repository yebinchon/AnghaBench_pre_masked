
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(0x0B89);
 FUNC_3(VAR_3, 0x0B89);

 if (VAR_3 & 0x08)
 {
    FUNC_1(VAR_3, 1);
    VAR_3 &= ~0x08;
 }
 if (VAR_3 & 0x10)
 {
    FUNC_0();
    VAR_3 &= ~0x10;
 }
 return VAR_0;
}
