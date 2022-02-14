
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,size_t,int *) ;
 int FUNC_1 (int const*,int const*,size_t,int *) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
       size_t VAR_4, u8 *VAR_5)
{
 int VAR_6;

 if (VAR_2 == 16)
  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 else if (VAR_2 == 32)
  VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
 else
  return -1;
 if (VAR_6) {
  FUNC_2(VAR_0,
      "MKA: AES-CMAC failed for ICV calculation");
  return -1;
 }
 return 0;
}
