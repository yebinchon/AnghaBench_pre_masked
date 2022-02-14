
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slist {int dummy; } ;
struct TYPE_2__ {scalar_t__ k; } ;
struct block {TYPE_1__ s; struct slist* stmts; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (int *,int ,int ,int) ;
 struct slist* FUNC_2 (int *) ;
 int VAR_6 ;
 struct block* FUNC_3 (int *,int) ;
 struct slist* FUNC_4 (int *,int) ;
 int FUNC_5 (struct slist*,struct slist*) ;

__attribute__((used)) static struct block *
FUNC_6(compiler_state_t *VAR_7, int VAR_8)
{
 struct block *VAR_9, *VAR_10;
 struct slist *VAR_11, *VAR_12;

 VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_5, VAR_8);


 VAR_11 = FUNC_2(VAR_7);

 VAR_12 = FUNC_4(VAR_7, VAR_2|VAR_3);
 FUNC_5(VAR_11, VAR_12);




 VAR_10 = FUNC_3(VAR_7, VAR_1|VAR_0|VAR_4);
 VAR_10->stmts = VAR_11;
 VAR_10->s.k = 0;

 FUNC_0(VAR_9, VAR_10);

 return VAR_10;
}
