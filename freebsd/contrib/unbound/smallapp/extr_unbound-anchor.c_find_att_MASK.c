
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XML_Char ;


 scalar_t__ FUNC_0 (int const*,int const*) ;

__attribute__((used)) static const XML_Char*
FUNC_1(const XML_Char **VAR_0, const XML_Char* VAR_1)
{
 int VAR_2;
 for(VAR_2=0; VAR_0[VAR_2]; VAR_2+=2) {
  if(FUNC_0(VAR_0[VAR_2], VAR_1) == 0)
   return VAR_0[VAR_2+1];
 }
 return ((void*)0);
}
