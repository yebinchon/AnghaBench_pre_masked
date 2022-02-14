
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,unsigned int) ;

void FUNC_2(struct adapter *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  u32 *VAR_9 = VAR_6 + VAR_7;

  FUNC_1(VAR_5, VAR_0, VAR_7);
  VAR_8 = FUNC_0(VAR_5, VAR_3);
  FUNC_1(VAR_5, VAR_2, VAR_8);
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_9 += 8)
   *VAR_9 = FUNC_0(VAR_5, VAR_1);
 }
}
