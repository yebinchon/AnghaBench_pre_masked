
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int path ;
struct TYPE_2__ {size_t sl_cur; char** sl_str; } ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int,char*,char*,char const*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static FILE *
FUNC_4(const char *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[VAR_0];
 size_t VAR_6;

 if (FUNC_2(VAR_3, "-") == 0)
  return (VAR_2);

 if ((VAR_4 = FUNC_0(VAR_3, "r")) != ((void*)0))
  return (VAR_4);

 if (*VAR_3 == '/') {
  FUNC_3("can't open '%s'", VAR_3);
  return (((void*)0));
 }

 for (VAR_6 = 0; VAR_6 < VAR_1->sl_cur; VAR_6++) {
  FUNC_1(VAR_5, sizeof(VAR_5), "%s/%s", VAR_1->sl_str[VAR_6],
      VAR_3);
  if ((VAR_4 = FUNC_0(VAR_5, "r")) != ((void*)0))
   return (VAR_4);
 }

 FUNC_3("can't open '%s'", VAR_3);

 return (VAR_4);
}
