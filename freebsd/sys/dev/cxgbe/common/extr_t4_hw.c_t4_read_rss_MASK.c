
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct adapter*,int,int *) ;

int FUNC_3(struct adapter *VAR_1, u16 *VAR_2)
{
 u32 VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0 / 2; ++VAR_4) {
  VAR_5 = FUNC_2(VAR_1, VAR_4, &VAR_3);
  if (VAR_5)
   return VAR_5;
  *VAR_2++ = FUNC_0(VAR_3);
  *VAR_2++ = FUNC_1(VAR_3);
 }
 return 0;
}
