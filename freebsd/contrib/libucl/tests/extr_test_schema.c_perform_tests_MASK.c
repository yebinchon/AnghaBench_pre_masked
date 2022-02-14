
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_schema_error {int dummy; } ;
typedef int err ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ucl_schema_error*,int ,int) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*,struct ucl_schema_error*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,int **,int) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,char*) ;
 char* FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_6 (const ucl_object_t *VAR_3)
{
 struct ucl_schema_error VAR_4;
 ucl_object_iter_t VAR_5 = ((void*)0);
 const ucl_object_t *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 if (VAR_3->type != VAR_1) {
  FUNC_0 (VAR_2, "Bad test case\n");
  return VAR_0;
 }

 VAR_6 = FUNC_4 (VAR_3, "schema");
 VAR_7 = FUNC_4 (VAR_3, "tests");
 VAR_8 = FUNC_4 (VAR_3, "description");

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0 (VAR_2, "Bad test case\n");
  return VAR_0;
 }

 FUNC_1 (&VAR_4, 0, sizeof (VAR_4));

 while ((VAR_9 = FUNC_3 (VAR_7, &VAR_5, 1)) != ((void*)0)) {
  if (!FUNC_2 (VAR_6, VAR_9, &VAR_4)) {
   FUNC_0 (VAR_2, "Test suite '%s' failed\n",
       FUNC_5 (VAR_8));
   return VAR_0;
  }
 }

 return 0;
}
