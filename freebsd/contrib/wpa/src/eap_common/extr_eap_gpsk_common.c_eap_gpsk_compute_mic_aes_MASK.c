
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,size_t,int *) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_1, size_t VAR_2,
        const u8 *VAR_3, size_t VAR_4, u8 *VAR_5)
{
 if (VAR_2 != 16) {
  FUNC_1(VAR_0, "EAP-GPSK: Invalid SK length %lu for "
      "AES-CMAC MIC", (unsigned long) VAR_2);
  return -1;
 }

 return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
}
