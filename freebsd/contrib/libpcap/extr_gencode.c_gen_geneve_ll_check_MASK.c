
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int k; } ;
struct slist {TYPE_4__ s; } ;
struct TYPE_11__ {scalar_t__ k; } ;
struct block {TYPE_3__ s; struct slist* stmts; } ;
struct TYPE_10__ {int reg; } ;
struct TYPE_9__ {int reg; } ;
struct TYPE_13__ {TYPE_2__ off_linkpl; TYPE_1__ off_linkhdr; } ;
typedef TYPE_5__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct block*) ;
 struct block* FUNC_1 (TYPE_5__*,int) ;
 struct slist* FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (struct slist*,struct slist*) ;

__attribute__((used)) static struct block *
FUNC_4(compiler_state_t *VAR_6)
{
 struct block *VAR_7;
 struct slist *VAR_8, *VAR_9;







 VAR_8 = FUNC_2(VAR_6, VAR_2|VAR_4);
 VAR_8->s.k = VAR_6->off_linkhdr.reg;

 VAR_9 = FUNC_2(VAR_6, VAR_3|VAR_4);
 VAR_9->s.k = VAR_6->off_linkpl.reg;
 FUNC_3(VAR_8, VAR_9);

 VAR_7 = FUNC_1(VAR_6, VAR_1|VAR_0|VAR_5);
 VAR_7->stmts = VAR_8;
 VAR_7->s.k = 0;
 FUNC_0(VAR_7);

 return VAR_7;
}
