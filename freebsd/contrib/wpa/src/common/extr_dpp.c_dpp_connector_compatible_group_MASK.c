
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {scalar_t__ type; char const* string; struct json_token* sibling; struct json_token* child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 struct json_token* FUNC_1 (struct json_token*,char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct json_token *VAR_2,
       const char *VAR_3,
       const char *VAR_4)
{
 struct json_token *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_2, "groups");
 if (!VAR_5 || VAR_5->type != VAR_0)
  return 0;

 for (VAR_6 = VAR_5->child; VAR_6; VAR_6 = VAR_6->sibling) {
  struct json_token *VAR_7, *VAR_8;

  VAR_7 = FUNC_1(VAR_6, "groupId");
  if (!VAR_7 || VAR_7->type != VAR_1)
   continue;

  VAR_8 = FUNC_1(VAR_6, "netRole");
  if (!VAR_8 || VAR_8->type != VAR_1)
   continue;

  if (FUNC_2(VAR_7->string, "*") != 0 &&
      FUNC_2(VAR_3, "*") != 0 &&
      FUNC_2(VAR_7->string, VAR_3) != 0)
   continue;

  if (FUNC_0(VAR_8->string, VAR_4))
   return 1;
 }

 return 0;
}
