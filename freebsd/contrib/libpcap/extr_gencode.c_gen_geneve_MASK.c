
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct slist {int dummy; } ;
struct block {struct slist* stmts; } ;
struct TYPE_7__ {int is_geneve; } ;
typedef TYPE_1__ compiler_state_t ;


 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (TYPE_1__*,int) ;
 struct block* FUNC_2 (TYPE_1__*,int) ;
 struct slist* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct block*,struct block*) ;
 struct block* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct slist*,struct slist*) ;

struct block *
FUNC_7(compiler_state_t *VAR_0, int VAR_1)
{
 struct block *VAR_2, *VAR_3;
 struct slist *VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_1);

 FUNC_4(VAR_2, VAR_3);
 VAR_2 = VAR_3;




 VAR_4 = FUNC_3(VAR_0);

 VAR_3 = FUNC_5(VAR_0);
 FUNC_6(VAR_4, VAR_3->stmts);
 VAR_3->stmts = VAR_4;

 FUNC_0(VAR_2, VAR_3);

 VAR_0->is_geneve = 1;

 return VAR_3;
}
