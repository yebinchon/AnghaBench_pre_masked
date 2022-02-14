
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {scalar_t__ state; char* name; int type; struct json_token* sibling; struct json_token* child; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct json_token *VAR_2)
{
 if (!VAR_2)
  return 0;
 if (FUNC_1(VAR_2->child) < 0 ||
     FUNC_1(VAR_2->sibling) < 0)
  return -1;
 if (VAR_2->state != VAR_0) {
  FUNC_0(VAR_1,
      "JSON: Unexpected token state %d (name=%s type=%d)",
      VAR_2->state, VAR_2->name ? VAR_2->name : "N/A",
      VAR_2->type);
  return -1;
 }
 return 0;
}
