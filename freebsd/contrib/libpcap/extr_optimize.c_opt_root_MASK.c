
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slist {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct block {struct slist* stmts; TYPE_1__ s; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct block* FUNC_1 (struct block*) ;
 struct block* FUNC_2 (struct block*) ;
 int FUNC_3 (struct slist*,struct slist*) ;

__attribute__((used)) static void
FUNC_4(struct block **VAR_2)
{
 struct slist *VAR_3, *VAR_4;

 VAR_4 = (*VAR_2)->stmts;
 (*VAR_2)->stmts = 0;
 while (FUNC_0((*VAR_2)->s.code) == VAR_0 && FUNC_2(*VAR_2) == FUNC_1(*VAR_2))
  *VAR_2 = FUNC_2(*VAR_2);

 VAR_3 = (*VAR_2)->stmts;
 if (VAR_3 != 0)
  FUNC_3(VAR_4, VAR_3);
 (*VAR_2)->stmts = VAR_4;






 if (FUNC_0((*VAR_2)->s.code) == VAR_1)
  (*VAR_2)->stmts = 0;
}
