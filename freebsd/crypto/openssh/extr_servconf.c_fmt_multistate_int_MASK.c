
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct multistate {char const* key; int value; } ;



__attribute__((used)) static const char *
FUNC_0(int VAR_0, const struct multistate *VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].key != ((void*)0); VAR_2++) {
  if (VAR_1[VAR_2].value == VAR_0)
   return VAR_1[VAR_2].key;
 }
 return "UNKNOWN";
}
