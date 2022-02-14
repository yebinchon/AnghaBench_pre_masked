
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {scalar_t__ type; scalar_t__ tok; char* string; TYPE_1__* head; } ;
struct TYPE_2__ {struct roff_node* child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static char
FUNC_1(const struct roff_node *VAR_4, const struct roff_node *VAR_5)
{
 const char *VAR_6, *VAR_7;
 char VAR_8, VAR_9;

 if (VAR_4 == ((void*)0) || VAR_4->type != VAR_3 ||
     VAR_5 == ((void*)0) || VAR_5->type != VAR_3)
  return '\0';
 if ((VAR_4->tok == VAR_1 || VAR_4->tok == VAR_2) &&
     (VAR_5->tok == VAR_1 || VAR_5->tok == VAR_2))
  return ' ';
 if (VAR_4->tok != VAR_0 || VAR_5->tok != VAR_0)
  return '\0';
 VAR_4 = VAR_4->head->child;
 VAR_5 = VAR_5->head->child;
 VAR_6 = VAR_4 == ((void*)0) ? "" : VAR_4->string;
 VAR_7 = VAR_5 == ((void*)0) ? "" : VAR_5->string;
 VAR_8 = FUNC_0(VAR_6, "*") == 0 ? '*' :
      FUNC_0(VAR_6, "\\-") == 0 ? '-' :
      FUNC_0(VAR_6, "\\(bu") == 0 ? 'b' : ' ';
 VAR_9 = FUNC_0(VAR_7, "*") == 0 ? '*' :
      FUNC_0(VAR_7, "\\-") == 0 ? '-' :
      FUNC_0(VAR_7, "\\(bu") == 0 ? 'b' : ' ';
 return VAR_8 != VAR_9 ? '\0' : VAR_8 == 'b' ? '*' : VAR_8;
}
