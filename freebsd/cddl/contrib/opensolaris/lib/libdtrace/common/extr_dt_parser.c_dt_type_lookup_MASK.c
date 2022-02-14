
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_2__ {scalar_t__ pcb_idepth; int * pcb_hdl; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*,char const*,int *) ;
 scalar_t__ FUNC_4 (char const) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char const*) ;
 TYPE_1__* VAR_3 ;

int
FUNC_8(const char *VAR_4, dtrace_typeinfo_t *VAR_5)
{
 static const char VAR_6[] = " \t\n\r\v\f*`";
 dtrace_hdl_t *VAR_7 = VAR_3->pcb_hdl;
 const char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;

 for (VAR_8 = VAR_4, VAR_11 = VAR_4 + FUNC_6(VAR_4); *VAR_8 != '\0'; VAR_8 = VAR_9) {
  while (FUNC_4(*VAR_8))
   VAR_8++;

  if (VAR_8 == VAR_11 || (VAR_9 = FUNC_7(VAR_8 + 1, VAR_6)) == ((void*)0))
   break;

  if (*VAR_9 == '`') {
   char *VAR_13 = FUNC_0((size_t)(VAR_9 - VAR_8) + 1);
   char *VAR_14 = FUNC_0((size_t)(VAR_11 - VAR_4) + 1);





   FUNC_1(VAR_8, VAR_13, (size_t)(VAR_9 - VAR_8));
   VAR_13[(size_t)(VAR_9 - VAR_8)] = '\0';






   FUNC_1(VAR_4, VAR_14, (size_t)(VAR_8 - VAR_4));
   FUNC_1(VAR_9 + 1, VAR_14 + (size_t)(VAR_8 - VAR_4), FUNC_6(VAR_9 + 1) + 1);
   if ((VAR_10 = FUNC_5(VAR_9 + 1, '`')) != ((void*)0) &&
       ((VAR_10 = FUNC_5(VAR_10 + 1, '`')) != ((void*)0))) {
    if (FUNC_5(VAR_10 + 1, '`') != ((void*)0))
     return (FUNC_2(VAR_7,
         VAR_2));
    if (VAR_9[1] != 'L' || VAR_9[2] != 'M')
     return (FUNC_2(VAR_7,
         VAR_2));
   }

   return (FUNC_3(VAR_7, VAR_13, VAR_14, VAR_5));
  }
 }

 if (VAR_3->pcb_idepth != 0)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1;

 return (FUNC_3(VAR_7, VAR_12, VAR_4, VAR_5));
}
