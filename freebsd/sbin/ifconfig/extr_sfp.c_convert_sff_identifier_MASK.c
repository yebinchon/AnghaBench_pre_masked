
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,size_t,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(char *VAR_2, size_t VAR_3, uint8_t VAR_4)
{
 const char *VAR_5;

 VAR_5 = ((void*)0);
 if (VAR_4 <= VAR_0)
  VAR_5 = VAR_1[VAR_4];
 else {
  if (VAR_4 > 0x80)
   VAR_5 = "Vendor specific";
  else
   VAR_5 = "Reserved";
 }

 FUNC_0(VAR_2, VAR_3, "%s", VAR_5);
}
