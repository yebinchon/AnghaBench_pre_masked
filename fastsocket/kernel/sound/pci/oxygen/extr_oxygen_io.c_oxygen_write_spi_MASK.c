
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct oxygen*,int ) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct oxygen *VAR_6, u8 VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9;


 VAR_9 = 10;
 while ((FUNC_0(VAR_6, VAR_1) & VAR_0)
        && VAR_9 > 0) {
  FUNC_2(4);
  --VAR_9;
 }

 FUNC_1(VAR_6, VAR_2, VAR_8);
 FUNC_1(VAR_6, VAR_3, VAR_8 >> 8);
 if (VAR_7 & VAR_5)
  FUNC_1(VAR_6, VAR_4, VAR_8 >> 16);
 FUNC_1(VAR_6, VAR_1, VAR_7);
}
