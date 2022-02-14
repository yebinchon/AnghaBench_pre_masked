
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct postfix_elt {int list; int operand; int op; } ;
struct filter_parse_state {int postfix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct postfix_elt*) ;
 struct postfix_elt* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct filter_parse_state *VAR_3, char *VAR_4)
{
 struct postfix_elt *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->op = VAR_2;
 VAR_5->operand = FUNC_2(VAR_4, VAR_1);
 if (!VAR_5->operand) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 FUNC_3(&VAR_5->list, &VAR_3->postfix);

 return 0;
}
