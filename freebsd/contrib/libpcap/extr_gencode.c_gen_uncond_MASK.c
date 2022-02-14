
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct block {struct slist* stmts; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct block* FUNC_1 (int *,int ) ;
 struct slist* FUNC_2 (int *,int) ;

__attribute__((used)) static struct block *
FUNC_3(compiler_state_t *VAR_3, int VAR_4)
{
 struct block *VAR_5;
 struct slist *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_2|VAR_0);
 VAR_6->s.k = !VAR_4;
 VAR_5 = FUNC_1(VAR_3, FUNC_0(VAR_1));
 VAR_5->stmts = VAR_6;

 return VAR_5;
}
