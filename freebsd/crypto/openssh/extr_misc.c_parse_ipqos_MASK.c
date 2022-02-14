
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int value; int * name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 long FUNC_1 (char const*,char**,int ) ;

int
FUNC_2(const char *VAR_1)
{
 u_int VAR_2;
 char *VAR_3;
 long VAR_4;

 if (VAR_1 == ((void*)0))
  return -1;
 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_1, VAR_0[VAR_2].name) == 0)
   return VAR_0[VAR_2].value;
 }

 VAR_4 = FUNC_1(VAR_1, &VAR_3, 0);
 if (*VAR_1 == '\0' || *VAR_3 != '\0' || VAR_4 < 0 || VAR_4 > 255)
  return -1;
 return VAR_4;
}
