
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; scalar_t__ k; } ;
struct slist {TYPE_1__ s; } ;
struct arth {scalar_t__ regno; struct slist* s; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct slist* FUNC_3 (int *,int) ;
 int FUNC_4 (struct slist*,struct slist*) ;
 struct slist* FUNC_5 (int *,struct arth*) ;
 struct slist* FUNC_6 (int *,struct arth*) ;

struct arth *
FUNC_7(compiler_state_t *VAR_7, int VAR_8, struct arth *VAR_9,
    struct arth *VAR_10)
{
 struct slist *VAR_11, *VAR_12, *VAR_13;





 if (VAR_8 == VAR_1) {
  if (VAR_10->s->s.code == (VAR_3|VAR_2) && VAR_10->s->s.k == 0)
   FUNC_1(VAR_7, "division by zero");
 } else if (VAR_8 == VAR_4) {
  if (VAR_10->s->s.code == (VAR_3|VAR_2) && VAR_10->s->s.k == 0)
   FUNC_1(VAR_7, "modulus by zero");
 }
 VAR_11 = FUNC_6(VAR_7, VAR_10);
 VAR_12 = FUNC_5(VAR_7, VAR_9);
 VAR_13 = FUNC_3(VAR_7, VAR_0|VAR_6|VAR_8);

 FUNC_4(VAR_12, VAR_13);
 FUNC_4(VAR_11, VAR_12);
 FUNC_4(VAR_10->s, VAR_11);
 FUNC_4(VAR_9->s, VAR_10->s);

 FUNC_2(VAR_7, VAR_9->regno);
 FUNC_2(VAR_7, VAR_10->regno);

 VAR_11 = FUNC_3(VAR_7, VAR_5);
 VAR_9->regno = VAR_11->s.k = FUNC_0(VAR_7);
 FUNC_4(VAR_9->s, VAR_11);

 return VAR_9;
}
