
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct oxygen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxygen*,int ) ;
 int FUNC_1 (struct oxygen*,int ) ;
 int FUNC_2 (struct oxygen*,int ,unsigned int) ;
 int FUNC_3 (int) ;

u16 FUNC_4(struct oxygen *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 FUNC_2(VAR_5, VAR_1,
        VAR_6 | VAR_3);
 for (VAR_7 = 0; VAR_7 < 100; ++VAR_7) {
  FUNC_3(1);
  if (!(FUNC_1(VAR_5, VAR_4)
        & VAR_0))
   break;
 }
 return FUNC_0(VAR_5, VAR_2);
}
