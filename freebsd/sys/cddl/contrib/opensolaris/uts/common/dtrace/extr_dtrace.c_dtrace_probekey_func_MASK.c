
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_probekey_f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static dtrace_probekey_f *
FUNC_0(const char *VAR_3)
{
 char VAR_4;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  return (&VAR_1);

 while ((VAR_4 = *VAR_3++) != '\0') {
  if (VAR_4 == '[' || VAR_4 == '?' || VAR_4 == '*' || VAR_4 == '\\')
   return (&VAR_0);
 }

 return (&VAR_2);
}
