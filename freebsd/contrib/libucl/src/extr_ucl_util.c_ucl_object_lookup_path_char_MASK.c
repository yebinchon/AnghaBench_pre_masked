
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_1__ ucl_object_t ;



 unsigned int FUNC_0 (char const*,char**,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,unsigned int) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,char const*,int) ;

const ucl_object_t *
FUNC_3 (const ucl_object_t *VAR_0, const char *VAR_1, const char VAR_2) {
 const ucl_object_t *VAR_3 = ((void*)0), *VAR_4;
 const char *VAR_5, *VAR_6;
 char *VAR_7;
 unsigned VAR_8;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_4 = ((void*)0);
 VAR_5 = VAR_1;


 while (*VAR_5 == VAR_2) {
  VAR_5 ++;
 }

 VAR_6 = VAR_5;
 while (*VAR_5 != '\0') {
  VAR_5 ++;
  if (*VAR_5 == VAR_2 || *VAR_5 == '\0') {
   if (VAR_5 > VAR_6) {
    switch (VAR_0->type) {
    case 128:

     VAR_8 = FUNC_0 (VAR_6, &VAR_7, 10);
     if (VAR_7 != ((void*)0) && (*VAR_7 != VAR_2 && *VAR_7 != '\0')) {
      return ((void*)0);
     }
     VAR_3 = FUNC_1 (VAR_0, VAR_8);
     break;
    default:
     VAR_3 = FUNC_2 (VAR_0, VAR_6, VAR_5 - VAR_6);
     break;
    }
    if (VAR_3 == ((void*)0)) {
     return ((void*)0);
    }
    VAR_0 = VAR_3;
   }
   if (*VAR_5 != '\0') {
    VAR_6 = VAR_5 + 1;
   }
  }
 }
 VAR_4 = VAR_3;

 return VAR_4;
}
