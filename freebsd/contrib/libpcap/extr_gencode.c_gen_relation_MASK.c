
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slist {int dummy; } ;
struct block {struct slist* stmts; } ;
struct arth {struct block* b; int regno; struct slist* s; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct block*,struct block*) ;
 int FUNC_3 (struct block*) ;
 struct block* FUNC_4 (int *,int) ;
 struct slist* FUNC_5 (int *,int) ;
 int FUNC_6 (struct slist*,struct slist*) ;
 struct slist* FUNC_7 (int *,struct arth*) ;
 struct slist* FUNC_8 (int *,struct arth*) ;

struct block *
FUNC_9(compiler_state_t *VAR_5, int VAR_6, struct arth *VAR_7,
    struct arth *VAR_8, int VAR_9)
{
 struct slist *VAR_10, *VAR_11, *VAR_12;
 struct block *VAR_13, *VAR_14;

 VAR_10 = FUNC_8(VAR_5, VAR_8);
 VAR_11 = FUNC_7(VAR_5, VAR_7);
 if (VAR_6 == VAR_1) {
  VAR_12 = FUNC_5(VAR_5, VAR_0|VAR_3|VAR_4);
  VAR_13 = FUNC_4(VAR_5, FUNC_0(VAR_6));
  FUNC_6(VAR_11, VAR_12);
 }
 else
  VAR_13 = FUNC_4(VAR_5, VAR_2|VAR_6|VAR_4);
 if (VAR_9)
  FUNC_3(VAR_13);

 FUNC_6(VAR_10, VAR_11);
 FUNC_6(VAR_8->s, VAR_10);
 FUNC_6(VAR_7->s, VAR_8->s);

 VAR_13->stmts = VAR_7->s;

 FUNC_1(VAR_5, VAR_7->regno);
 FUNC_1(VAR_5, VAR_8->regno);


 if (VAR_7->b) {
  if (VAR_8->b) {
   FUNC_2(VAR_7->b, VAR_14 = VAR_8->b);
  }
  else
   VAR_14 = VAR_7->b;
 } else
  VAR_14 = VAR_8->b;

 if (VAR_14)
  FUNC_2(VAR_14, VAR_13);

 return VAR_13;
}
