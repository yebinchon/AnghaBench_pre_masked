
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
 struct slist* FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (struct block*) ;
 struct block* FUNC_3 (int *,int ) ;

__attribute__((used)) static struct block *
FUNC_4(compiler_state_t *VAR_3)
{
 struct slist *VAR_4;
 struct block *VAR_5;


 VAR_4 = FUNC_1(VAR_3, VAR_2, 6, VAR_0);
 VAR_5 = FUNC_3(VAR_3, FUNC_0(VAR_1));
 VAR_5->s.k = 0x1fff;
 VAR_5->stmts = VAR_4;
 FUNC_2(VAR_5);

 return VAR_5;
}
