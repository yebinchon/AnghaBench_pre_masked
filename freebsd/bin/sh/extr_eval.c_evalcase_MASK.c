
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {union node* body; union node* next; union node* pattern; } ;
struct TYPE_5__ {union node* next; } ;
struct TYPE_4__ {union node* cases; int expr; } ;
union node {scalar_t__ type; TYPE_3__ nclist; TYPE_2__ narg; TYPE_1__ ncase; } ;
struct arglist {int * args; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (union node*,int ) ;
 int FUNC_1 (struct arglist*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,struct arglist*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static union node *
FUNC_3(union node *VAR_4)
{
 union node *VAR_5;
 union node *VAR_6;
 struct arglist VAR_7;

 FUNC_1(&VAR_7);
 VAR_3 = VAR_2;
 FUNC_2(VAR_4->ncase.expr, &VAR_7, VAR_0);
 for (VAR_5 = VAR_4->ncase.cases ; VAR_5 ; VAR_5 = VAR_5->nclist.next) {
  for (VAR_6 = VAR_5->nclist.pattern ; VAR_6 ; VAR_6 = VAR_6->narg.next) {
   if (FUNC_0(VAR_6, VAR_7.args[0])) {
    while (VAR_5->nclist.next &&
        VAR_5->type == VAR_1 &&
        VAR_5->nclist.body == ((void*)0))
     VAR_5 = VAR_5->nclist.next;
    if (VAR_5->nclist.next &&
        VAR_5->type == VAR_1)
     return (VAR_5);
    if (VAR_5->nclist.body == ((void*)0))
     VAR_2 = 0;
    return (VAR_5->nclist.body);
   }
  }
 }
 VAR_2 = 0;
 return (((void*)0));
}
