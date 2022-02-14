
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {union node* com; } ;
struct TYPE_3__ {struct nodelist* cmdlist; scalar_t__ backgnd; } ;
union node {TYPE_2__ nnot; int type; TYPE_1__ npipe; } ;
struct npipe {int dummy; } ;
struct nodelist {struct nodelist* next; union node* n; } ;
struct nnot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_8 ;

__attribute__((used)) static union node *
FUNC_4(void)
{
 union node *VAR_9, *VAR_10, *VAR_11;
 struct nodelist *VAR_12, *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = 0;
 VAR_7 = VAR_2 | VAR_1 | VAR_0;
 FUNC_0(("pipeline: entered\n"));
 while (FUNC_2() == VAR_5)
  VAR_14 = !VAR_14;
 VAR_8++;
 VAR_9 = FUNC_1();
 if (FUNC_2() == VAR_6) {
  VAR_11 = (union node *)FUNC_3(sizeof (struct npipe));
  VAR_11->type = VAR_4;
  VAR_11->npipe.backgnd = 0;
  VAR_12 = (struct nodelist *)FUNC_3(sizeof (struct nodelist));
  VAR_11->npipe.cmdlist = VAR_12;
  VAR_12->n = VAR_9;
  do {
   VAR_13 = VAR_12;
   VAR_12 = (struct nodelist *)FUNC_3(sizeof (struct nodelist));
   VAR_7 = VAR_2 | VAR_1 | VAR_0;
   VAR_15 = FUNC_2();
   VAR_8++;
   if (VAR_15 == VAR_5)
    VAR_12->n = FUNC_4();
   else
    VAR_12->n = FUNC_1();
   VAR_13->next = VAR_12;
  } while (FUNC_2() == VAR_6);
  VAR_12->next = ((void*)0);
  VAR_9 = VAR_11;
 }
 VAR_8++;
 if (VAR_14) {
  VAR_10 = (union node *)FUNC_3(sizeof (struct nnot));
  VAR_10->type = VAR_3;
  VAR_10->nnot.com = VAR_9;
  return VAR_10;
 } else
  return VAR_9;
}
