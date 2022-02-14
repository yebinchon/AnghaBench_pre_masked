
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {scalar_t__ type; int string; struct json_token* sibling; struct json_token* child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct json_token*,int ,int ) ;
 struct json_token* FUNC_1 (struct json_token*,char*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct json_token *VAR_3,
          struct json_token *VAR_4)
{
 struct json_token *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_4, "groups");
 if (!VAR_5 || VAR_5->type != VAR_0) {
  FUNC_2(VAR_2, "DPP: No peer groups array found");
  return 0;
 }

 for (VAR_6 = VAR_5->child; VAR_6; VAR_6 = VAR_6->sibling) {
  struct json_token *VAR_7, *VAR_8;

  VAR_7 = FUNC_1(VAR_6, "groupId");
  if (!VAR_7 || VAR_7->type != VAR_1) {
   FUNC_2(VAR_2,
       "DPP: Missing peer groupId string");
   continue;
  }

  VAR_8 = FUNC_1(VAR_6, "netRole");
  if (!VAR_8 || VAR_8->type != VAR_1) {
   FUNC_2(VAR_2,
       "DPP: Missing peer groups::netRole string");
   continue;
  }
  FUNC_2(VAR_2,
      "DPP: peer connector group: groupId='%s' netRole='%s'",
      VAR_7->string, VAR_8->string);
  if (FUNC_0(VAR_3, VAR_7->string,
         VAR_8->string)) {
   FUNC_2(VAR_2,
       "DPP: Compatible group/netRole in own connector");
   return 1;
  }
 }

 return 0;
}
