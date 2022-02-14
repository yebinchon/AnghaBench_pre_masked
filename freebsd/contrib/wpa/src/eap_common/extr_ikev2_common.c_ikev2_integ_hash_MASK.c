
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;




 int VAR_0 ;
 int FUNC_0 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_1 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_2 (int *,int *,int) ;

int FUNC_3(int VAR_1, const u8 *VAR_2, size_t VAR_3, const u8 *VAR_4,
       size_t VAR_5, u8 *VAR_6)
{
 u8 VAR_7[VAR_0];

 switch (VAR_1) {
 case 128:
  if (VAR_3 != 20)
   return -1;
  if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7) < 0)
   return -1;
  FUNC_2(VAR_6, VAR_7, 12);
  break;
 case 129:
  if (VAR_3 != 16)
   return -1;
  if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7) < 0)
   return -1;
  FUNC_2(VAR_6, VAR_7, 12);
  break;
 default:
  return -1;
 }

 return 0;
}
