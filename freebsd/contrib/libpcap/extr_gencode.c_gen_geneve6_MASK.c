
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct TYPE_10__ {scalar_t__ k; } ;
struct block {TYPE_2__ s; struct slist* stmts; } ;
struct TYPE_11__ {int off_linkpl; } ;
typedef TYPE_3__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct slist* FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_3__*,int ,int ,int) ;
 int VAR_10 ;
 struct block* FUNC_3 (TYPE_3__*,int) ;
 struct slist* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (struct slist*,struct slist*) ;

__attribute__((used)) static struct block *
FUNC_6(compiler_state_t *VAR_11, int VAR_12)
{
 struct block *VAR_13, *VAR_14;
 struct slist *VAR_15, *VAR_16;

 VAR_13 = FUNC_2(VAR_11, VAR_10, VAR_9, VAR_12);



 VAR_15 = FUNC_0(VAR_11, &VAR_11->off_linkpl);
 if (VAR_15) {
  VAR_16 = FUNC_4(VAR_11, VAR_5|VAR_2);
  VAR_16->s.k = 40;
  FUNC_5(VAR_15, VAR_16);

  VAR_16 = FUNC_4(VAR_11, VAR_1|VAR_0|VAR_8);
  VAR_16->s.k = 0;
  FUNC_5(VAR_15, VAR_16);
 } else {
  VAR_15 = FUNC_4(VAR_11, VAR_5|VAR_2);
  VAR_15->s.k = 40;
 }




 VAR_16 = FUNC_4(VAR_11, VAR_6|VAR_7);
 FUNC_5(VAR_15, VAR_16);

 VAR_14 = FUNC_3(VAR_11, VAR_4|VAR_3|VAR_8);
 VAR_14->stmts = VAR_15;
 VAR_14->s.k = 0;

 FUNC_1(VAR_13, VAR_14);

 return VAR_14;
}
