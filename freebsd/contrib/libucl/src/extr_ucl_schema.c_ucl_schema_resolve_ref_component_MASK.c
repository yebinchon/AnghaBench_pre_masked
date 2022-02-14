
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; struct TYPE_9__* next; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_schema_error {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char**,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,char const*,int) ;
 int FUNC_3 (struct ucl_schema_error*,int ,TYPE_1__ const*,char*,char const*,...) ;

__attribute__((used)) static const ucl_object_t *
FUNC_4 (const ucl_object_t *VAR_3,
  const char *VAR_4, int VAR_5,
  struct ucl_schema_error *VAR_6)
{
 const ucl_object_t *VAR_7 = ((void*)0);
 char *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_3->type == VAR_1) {

  VAR_7 = FUNC_2 (VAR_3, VAR_4, VAR_5);
  if (VAR_7 == ((void*)0)) {
   FUNC_3 (VAR_6, VAR_2, VAR_3,
     "reference %s is invalid, missing path component", VAR_4);
   return ((void*)0);
  }
 }
 else if (VAR_3->type == VAR_0) {

  VAR_9 = FUNC_0 (VAR_4, &VAR_8, 10);
  if (VAR_8 != ((void*)0) && *VAR_8 != '/' && *VAR_8 != '\0') {
   FUNC_3 (VAR_6, VAR_2, VAR_3,
     "reference %s is invalid, invalid item number", VAR_4);
   return ((void*)0);
  }
  VAR_7 = FUNC_1 (VAR_3);
  VAR_10 = 0;
  while (VAR_7 != ((void*)0)) {
   if (VAR_10 == VAR_9) {
    break;
   }
   VAR_7 = VAR_7->next;
  }
  if (VAR_7 == ((void*)0)) {
   FUNC_3 (VAR_6, VAR_2, VAR_3,
     "reference %s is invalid, item number %d does not exist",
     VAR_4, VAR_9);
   return ((void*)0);
  }
 }
 else {
  FUNC_3 (VAR_6, VAR_2, VAR_7,
    "reference %s is invalid, contains primitive object in the path",
    VAR_4);
  return ((void*)0);
 }

 return VAR_7;
}
