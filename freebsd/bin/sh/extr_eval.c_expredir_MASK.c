
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vname; } ;
struct TYPE_4__ {int expfname; int fname; union node* next; } ;
union node {int type; TYPE_1__ ndup; TYPE_2__ nfile; } ;
struct arglist {int * args; } ;


 int VAR_0 ;
 int FUNC_0 (struct arglist*) ;
 int FUNC_1 (int ,struct arglist*,int ) ;
 int FUNC_2 (union node*,struct arglist*) ;
 int FUNC_3 (union node*,int ,int) ;

__attribute__((used)) static void
FUNC_4(union node *VAR_1)
{
 union node *VAR_2;

 for (VAR_2 = VAR_1 ; VAR_2 ; VAR_2 = VAR_2->nfile.next) {
  struct arglist VAR_3;
  FUNC_0(&VAR_3);
  switch (VAR_2->type) {
  case 133:
  case 130:
  case 131:
  case 135:
  case 134:
   FUNC_1(VAR_2->nfile.fname, &VAR_3, VAR_0);
   VAR_2->nfile.expfname = VAR_3.args[0];
   break;
  case 132:
  case 129:
   if (VAR_2->ndup.vname) {
    FUNC_1(VAR_2->ndup.vname, &VAR_3, VAR_0);
    FUNC_3(VAR_2, VAR_3.args[0], 1);
   }
   break;
  case 128:
   FUNC_2(VAR_2, &VAR_3);
   break;
  }
 }
}
