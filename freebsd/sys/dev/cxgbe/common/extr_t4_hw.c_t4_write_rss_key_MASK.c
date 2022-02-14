
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int const*,int,int ,int) ;
 int FUNC_7 (struct adapter*,int ,int) ;

void FUNC_8(struct adapter *VAR_5, const u32 *VAR_6, int VAR_7,
        bool VAR_8)
{
 u8 VAR_9 = 16;
 u32 VAR_10 = FUNC_5(VAR_5, VAR_0);






 if ((FUNC_4(VAR_5) > VAR_2) &&
     (VAR_10 & VAR_3) && (FUNC_0(VAR_10) == 3))
  VAR_9 = 32;

 FUNC_6(VAR_5, VAR_6, 10, VAR_1, VAR_8);

 if (VAR_7 >= 0 && VAR_7 < VAR_9) {
  if (VAR_9 > 16)
   FUNC_7(VAR_5, VAR_0,
         VAR_10 | FUNC_2(VAR_7 >> 4) |
         FUNC_3(VAR_7) | VAR_4);
  else
   FUNC_7(VAR_5, VAR_0,
         VAR_10| FUNC_1(VAR_7) | VAR_4);
 }
}
