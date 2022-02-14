
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {scalar_t__ type; scalar_t__ name; struct json_token* sibling; struct json_token* child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

struct json_token * FUNC_1(struct json_token *VAR_1, const char *VAR_2)
{
 struct json_token *VAR_3, *VAR_4 = ((void*)0);

 if (!VAR_1 || VAR_1->type != VAR_0)
  return ((void*)0);

 for (VAR_3 = VAR_1->child; VAR_3; VAR_3 = VAR_3->sibling) {
  if (VAR_3->name && FUNC_0(VAR_3->name, VAR_2) == 0)
   VAR_4 = VAR_3;
 }
 return VAR_4;
}
