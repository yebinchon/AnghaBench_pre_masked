
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int body; int var; union node* args; } ;
struct TYPE_3__ {union node* next; } ;
union node {TYPE_2__ nfor; TYPE_1__ narg; } ;
struct arglist {int count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct arglist*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int FUNC_2 (union node*,struct arglist*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_4(union node *VAR_9, int VAR_10)
{
 struct arglist VAR_11;
 union node *VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_0(&VAR_11);
 for (VAR_12 = VAR_9->nfor.args ; VAR_12 ; VAR_12 = VAR_12->narg.next) {
  VAR_7 = VAR_5;
  FUNC_2(VAR_12, &VAR_11, VAR_0 | VAR_1);
 }

 VAR_6++;
 VAR_14 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_11.count; VAR_13++) {
  FUNC_3(VAR_9->nfor.var, VAR_11.args[VAR_13], 0);
  FUNC_1(VAR_9->nfor.body, VAR_10);
  VAR_14 = VAR_5;
  if (VAR_4) {
   if (VAR_4 == VAR_3 && --VAR_8 <= 0) {
    VAR_4 = 0;
    continue;
   }
   if (VAR_4 == VAR_2 && --VAR_8 <= 0)
    VAR_4 = 0;
   break;
  }
 }
 VAR_6--;
 VAR_5 = VAR_14;
}
