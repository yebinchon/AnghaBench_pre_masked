
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffnode {int tok; int line; int col; int rule; struct roffnode* parent; int name; } ;
struct roff {struct roffnode* last; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;


 struct roffnode* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(struct roff *VAR_0, enum roff_tok VAR_1, const char *VAR_2,
  int VAR_3, int VAR_4)
{
 struct roffnode *VAR_5;

 VAR_5 = FUNC_0(1, sizeof(struct roffnode));
 VAR_5->tok = VAR_1;
 if (VAR_2)
  VAR_5->name = FUNC_1(VAR_2);
 VAR_5->parent = VAR_0->last;
 VAR_5->line = VAR_3;
 VAR_5->col = VAR_4;
 VAR_5->rule = VAR_5->parent ? VAR_5->parent->rule : 0;

 VAR_0->last = VAR_5;
}
