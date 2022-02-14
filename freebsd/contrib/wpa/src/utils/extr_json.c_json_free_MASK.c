
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {struct json_token* string; struct json_token* name; struct json_token* sibling; struct json_token* child; } ;


 int FUNC_0 (struct json_token*) ;

void FUNC_1(struct json_token *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(VAR_0->child);
 FUNC_1(VAR_0->sibling);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->string);
 FUNC_0(VAR_0);
}
