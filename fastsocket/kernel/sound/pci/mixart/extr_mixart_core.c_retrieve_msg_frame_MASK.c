
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mixart_mgr {int dummy; } ;


 int FUNC_0 (struct mixart_mgr*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct mixart_mgr *VAR_4, u32 *VAR_5)
{

 u32 VAR_6, VAR_7;

 VAR_7 = FUNC_1(FUNC_0(VAR_4, VAR_3));
 VAR_6 = FUNC_1(FUNC_0(VAR_4, VAR_1));

 if (VAR_7 == VAR_6)
  return 0;

 if (VAR_7 < VAR_2)
  return 0;
 if (VAR_7 >= VAR_2 + VAR_0)
  return 0;

 *VAR_5 = FUNC_1(FUNC_0(VAR_4, VAR_7));


 VAR_7 += 4;
 if( VAR_7 >= (VAR_2+VAR_0) )
  VAR_7 = VAR_2;
 FUNC_2(VAR_7, FUNC_0(VAR_4, VAR_3));

 return 1;
}
