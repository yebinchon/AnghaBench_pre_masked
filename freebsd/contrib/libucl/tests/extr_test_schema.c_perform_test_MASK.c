
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_schema_error {char* msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 char* FUNC_1 (int const*,int ) ;
 int * FUNC_2 (int const*,char*) ;
 int FUNC_3 (int const*) ;
 char* FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int const*,struct ucl_schema_error*) ;

__attribute__((used)) static bool
FUNC_6 (const ucl_object_t *VAR_2, const ucl_object_t *VAR_3,
  struct ucl_schema_error *VAR_4)
{
 const ucl_object_t *VAR_5, *VAR_6, *VAR_7;
 bool VAR_8;

 VAR_6 = FUNC_2 (VAR_3, "data");
 VAR_7 = FUNC_2 (VAR_3, "description");
 VAR_5 = FUNC_2 (VAR_3, "valid");

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0 (VAR_1, "Bad test case\n");
  return 0;
 }

 VAR_8 = FUNC_5 (VAR_2, VAR_6, VAR_4);
 if (VAR_8 != FUNC_3 (VAR_5)) {
  FUNC_0 (VAR_1, "Test case '%s' failed (expected %s): '%s'\n",
    FUNC_4 (VAR_7),
    FUNC_3 (VAR_5) ? "valid" : "invalid",
      VAR_4->msg);
  FUNC_0 (VAR_1, "%s\n", FUNC_1 (VAR_6, VAR_0));
  FUNC_0 (VAR_1, "%s\n", FUNC_1 (VAR_2, VAR_0));
  return 0;
 }

 return 1;
}
