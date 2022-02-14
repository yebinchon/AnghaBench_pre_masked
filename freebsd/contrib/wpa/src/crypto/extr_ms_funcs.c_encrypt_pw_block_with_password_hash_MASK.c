
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int const*,int,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int const*,size_t,int *,int,size_t*) ;

int FUNC_6(
 const u8 *VAR_1, size_t VAR_2,
 const u8 *VAR_3, u8 *VAR_4)
{
 size_t VAR_5, VAR_6;
 u8 *VAR_7;

 FUNC_3(VAR_4, 0, VAR_0);

 if (FUNC_5(VAR_1, VAR_2, VAR_4, 512, &VAR_5) < 0
     || VAR_5 > 256)
  return -1;

 VAR_6 = (256 - VAR_5) * 2;
 if (VAR_6 != 0) {
  FUNC_2(VAR_4 + VAR_6, VAR_4, VAR_5 * 2);
  if (FUNC_1(VAR_4, VAR_6) < 0)
   return -1;
 }




 VAR_7 = &VAR_4[2 * 256];
 FUNC_0(VAR_7, VAR_2 * 2);
 FUNC_4(VAR_3, 16, 0, VAR_4, VAR_0);
 return 0;
}
