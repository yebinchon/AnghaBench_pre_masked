
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

void FUNC_4(struct adapter *VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 u32 VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_2(VAR_5, VAR_0);
 if (VAR_8 & VAR_4)
  FUNC_3(VAR_5, VAR_0, VAR_8 ^ VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
   VAR_11 = 8 * VAR_9 + VAR_10;
   FUNC_3(VAR_5, VAR_0, FUNC_1(VAR_11) |
         FUNC_0(VAR_11));
   *VAR_6++ = FUNC_2(VAR_5, VAR_2);
   *VAR_7++ = FUNC_2(VAR_5, VAR_1);
  }
 }
 FUNC_3(VAR_5, VAR_0, VAR_8);
}
