
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seqtable {int* chars; int len; } ;







 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char*,char const) ;

__attribute__((used)) static int
FUNC_3(const char * __restrict VAR_0, size_t VAR_1,
    const struct seqtable * __restrict VAR_2)
{
 const int *VAR_3;

 VAR_3 = VAR_2->chars;
 while ((size_t)(VAR_3 - VAR_2->chars) < VAR_1 && VAR_3 - VAR_2->chars < VAR_2->len) {
  switch (*VAR_3) {
  case 130:
   if (!FUNC_0(*VAR_0))
    goto terminate;
   break;
  case 128:
   if (*VAR_0 && FUNC_2("@AB", *VAR_0))
    break;
   else
    goto terminate;
  case 129:
   if (!FUNC_1(*VAR_0))
    goto terminate;
   break;
  case 132:
   if (*VAR_0 && FUNC_2("()*+", *VAR_0))
    break;
   else
    goto terminate;
  case 131:
   if (*VAR_0 && FUNC_2(",-./", *VAR_0))
    break;
   else
    goto terminate;
  default:
   if (*VAR_0 != *VAR_3)
    goto terminate;
   break;
  }

  VAR_3++;
  VAR_0++;
 }

terminate:
 return (VAR_3 - VAR_2->chars);
}
