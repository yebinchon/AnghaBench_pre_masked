
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mwl_hal_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mwl_hal_priv*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mwl_hal_priv *VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_0);
  if (FUNC_1(VAR_3, VAR_2) == VAR_4)
   return 1;
 }
 return 0;
}
