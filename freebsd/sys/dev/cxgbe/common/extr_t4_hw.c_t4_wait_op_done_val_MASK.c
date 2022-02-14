
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_1, int VAR_2, u32 VAR_3,
          int VAR_4, int VAR_5, int VAR_6, u32 *VAR_7)
{
 while (1) {
  u32 VAR_8 = FUNC_0(VAR_1, VAR_2);

  if (!!(VAR_8 & VAR_3) == VAR_4) {
   if (VAR_7)
    *VAR_7 = VAR_8;
   return 0;
  }
  if (--VAR_5 == 0)
   return -VAR_0;
  if (VAR_6)
   FUNC_1(VAR_6);
 }
}
