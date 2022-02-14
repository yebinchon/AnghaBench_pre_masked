
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hyperv_guid {int* hv_guid; } ;


 int FUNC_0 (char*,size_t,char*,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const) ;

int
FUNC_1(const struct hyperv_guid *VAR_0, char *VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3 = VAR_0->hv_guid;

 return FUNC_0(VAR_1, VAR_2, "%02x%02x%02x%02x-"
     "%02x%02x-%02x%02x-%02x%02x-"
     "%02x%02x%02x%02x%02x%02x",
     VAR_3[3], VAR_3[2], VAR_3[1], VAR_3[0],
     VAR_3[5], VAR_3[4], VAR_3[7], VAR_3[6], VAR_3[8], VAR_3[9],
     VAR_3[10], VAR_3[11], VAR_3[12], VAR_3[13], VAR_3[14], VAR_3[15]);
}
