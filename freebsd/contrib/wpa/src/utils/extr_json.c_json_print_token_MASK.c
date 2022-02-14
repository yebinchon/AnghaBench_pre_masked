
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {char* name; struct json_token* sibling; struct json_token* child; int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int,int ,char*) ;
 scalar_t__ FUNC_2 (size_t,int) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct json_token *VAR_0, int VAR_1,
        char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 if (!VAR_0)
  return;
 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_1(VAR_2 + VAR_4, VAR_3 - VAR_4, "[%d:%s:%s]",
     VAR_1, FUNC_0(VAR_0->type),
     VAR_0->name ? VAR_0->name : "");
 if (FUNC_2(VAR_3 - VAR_4, VAR_5)) {
  VAR_2[VAR_4] = '\0';
  return;
 }
 FUNC_4(VAR_0->child, VAR_1 + 1, VAR_2, VAR_3);
 FUNC_4(VAR_0->sibling, VAR_1, VAR_2, VAR_3);
}
