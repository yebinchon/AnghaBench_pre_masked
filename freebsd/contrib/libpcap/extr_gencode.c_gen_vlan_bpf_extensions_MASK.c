
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ k; } ;
struct slist {TYPE_1__ s; } ;
struct TYPE_4__ {int k; } ;
struct block {TYPE_2__ s; struct slist* stmts; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct block*,struct block*) ;
 int FUNC_2 (struct block*,struct block*) ;
 int FUNC_3 (int *,struct block*) ;
 int FUNC_4 (int *,struct block*) ;
 struct block* FUNC_5 (int *) ;
 struct block* FUNC_6 (int *,int) ;
 struct block* FUNC_7 (int *,int ) ;
 struct slist* FUNC_8 (int *,int) ;

__attribute__((used)) static struct block *
FUNC_9(compiler_state_t *VAR_6, int VAR_7)
{
        struct block *VAR_8, *VAR_9, *VAR_10 = ((void*)0);
        struct slist *VAR_11;



        VAR_11 = FUNC_8(VAR_6, VAR_3|VAR_1|VAR_0);
        VAR_11->s.k = VAR_4 + VAR_5;

        VAR_8 = FUNC_7(VAR_6, FUNC_0(VAR_2));
        VAR_8->stmts = VAR_11;
        VAR_8->s.k = 1;
 VAR_9 = FUNC_5(VAR_6);
 if (VAR_7 >= 0)
  VAR_10 = FUNC_6(VAR_6, VAR_7);

 FUNC_3(VAR_6, VAR_9);
 FUNC_2(VAR_8, VAR_9);
 VAR_8 = VAR_9;

 if (VAR_7 >= 0) {
  FUNC_4(VAR_6, VAR_10);
  FUNC_1(VAR_8, VAR_10);
  VAR_8 = VAR_10;
 }

        return VAR_8;
}
