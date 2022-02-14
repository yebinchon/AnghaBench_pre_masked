
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_data {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (int const*) ;
 int FUNC_1 (struct p2p_data*,int const*,int const*,size_t,int) ;
 int FUNC_2 (struct p2p_data*,int const*,int const*,size_t,int) ;
 int FUNC_3 (struct p2p_data*,int const*,int const*,size_t,int) ;
 int FUNC_4 (struct p2p_data*,int const*,int const*,size_t,int) ;
 int FUNC_5 (struct p2p_data*,int const*,int const*,size_t,int) ;

__attribute__((used)) static void FUNC_6(struct p2p_data *VAR_1, const u8 *VAR_2,
     const u8 *VAR_3, const u8 *VAR_4, const u8 *VAR_5,
     size_t VAR_6, int VAR_7)
{
 if (VAR_6 < 1)
  return;

 switch (VAR_5[0]) {
 case 128:
  VAR_5++;
  VAR_6--;
  if (VAR_6 < 4)
   return;
  if (FUNC_0(VAR_5) != VAR_0)
   return;

  VAR_5 += 4;
  VAR_6 -= 4;

  FUNC_5(VAR_1, VAR_3, VAR_5, VAR_6, VAR_7);
  break;
 case 130:
  FUNC_3(VAR_1, VAR_3, VAR_5 + 1, VAR_6 - 1, VAR_7);
  break;
 case 129:
  FUNC_4(VAR_1, VAR_3, VAR_5 + 1, VAR_6 - 1, VAR_7);
  break;
 case 132:
  FUNC_1(VAR_1, VAR_3, VAR_5 + 1, VAR_6 - 1, VAR_7);
  break;
 case 131:
  FUNC_2(VAR_1, VAR_3, VAR_5 + 1, VAR_6 - 1, VAR_7);
  break;
 }
}
