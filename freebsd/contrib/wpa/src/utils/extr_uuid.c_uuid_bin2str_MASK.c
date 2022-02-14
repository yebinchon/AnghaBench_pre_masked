
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,size_t,char*,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const) ;
 scalar_t__ FUNC_1 (size_t,int) ;

int FUNC_2(const u8 *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_2, "%02x%02x%02x%02x-%02x%02x-%02x%02x-"
     "%02x%02x-%02x%02x%02x%02x%02x%02x",
     VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3],
     VAR_0[4], VAR_0[5], VAR_0[6], VAR_0[7],
     VAR_0[8], VAR_0[9], VAR_0[10], VAR_0[11],
     VAR_0[12], VAR_0[13], VAR_0[14], VAR_0[15]);
 if (FUNC_1(VAR_2, VAR_3))
  return -1;
 return 0;
}
