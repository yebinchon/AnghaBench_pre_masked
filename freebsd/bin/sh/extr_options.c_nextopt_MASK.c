
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*,char) ;
 char* VAR_1 ;
 char* VAR_2 ;

int
FUNC_1(const char *VAR_3)
{
 char *VAR_4;
 const char *VAR_5;
 char VAR_6;

 if ((VAR_4 = VAR_1) == ((void*)0) || *VAR_4 == '\0') {
  VAR_4 = *VAR_0;
  if (VAR_4 == ((void*)0) || *VAR_4 != '-' || *++VAR_4 == '\0')
   return '\0';
  VAR_0++;
  if (VAR_4[0] == '-' && VAR_4[1] == '\0')
   return '\0';
 }
 VAR_6 = *VAR_4++;
 for (VAR_5 = VAR_3 ; *VAR_5 != VAR_6 ; ) {
  if (*VAR_5 == '\0')
   FUNC_0("Illegal option -%c", VAR_6);
  if (*++VAR_5 == ':')
   VAR_5++;
 }
 if (*++VAR_5 == ':') {
  if (*VAR_4 == '\0' && (VAR_4 = *VAR_0++) == ((void*)0))
   FUNC_0("No arg for -%c option", VAR_6);
  VAR_2 = VAR_4;
  VAR_4 = ((void*)0);
 }
 VAR_1 = VAR_4;
 return VAR_6;
}
