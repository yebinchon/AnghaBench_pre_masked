
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* string; int cnt; } ;
struct filter_parse_state {int postfix; int opstack; struct filter_op* ops; TYPE_1__ infix; } ;
struct filter_op {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct filter_parse_state*,char,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct filter_parse_state *VAR_0,
         struct filter_op *VAR_1,
         char *VAR_2)
{
 FUNC_1(VAR_0, '\0', sizeof(*VAR_0));

 VAR_0->infix.string = VAR_2;
 VAR_0->infix.cnt = FUNC_2(VAR_2);
 VAR_0->ops = VAR_1;

 FUNC_0(&VAR_0->opstack);
 FUNC_0(&VAR_0->postfix);
}
