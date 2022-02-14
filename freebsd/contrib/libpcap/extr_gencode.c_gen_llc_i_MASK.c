
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slist {int dummy; } ;
struct TYPE_2__ {int k; } ;
struct block {struct slist* stmts; TYPE_1__ s; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (int *) ;
 struct slist* FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (struct block*) ;
 struct block* FUNC_5 (int *,int ) ;

struct block *
FUNC_6(compiler_state_t *VAR_3)
{
 struct block *VAR_4, *VAR_5;
 struct slist *VAR_6;




 VAR_4 = FUNC_2(VAR_3);





 VAR_6 = FUNC_3(VAR_3, VAR_2, 2, VAR_0);
 VAR_5 = FUNC_5(VAR_3, FUNC_0(VAR_1));
 VAR_5->s.k = 0x01;
 VAR_5->stmts = VAR_6;
 FUNC_4(VAR_5);
 FUNC_1(VAR_4, VAR_5);
 return VAR_5;
}
