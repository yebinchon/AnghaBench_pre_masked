
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* sval; int tval; int nval; } ;
struct TYPE_8__ {scalar_t__* narg; } ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ Cell ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

Node *FUNC_6(Node *VAR_2)
{
 Cell *VAR_3;

 if (FUNC_3(VAR_2)) {
  VAR_3 = (Cell *) (VAR_2->narg[0]);
  if (FUNC_2(VAR_3))
   FUNC_0( "%s is a function, not an array", VAR_3->nval );
  else if (!FUNC_1(VAR_3)) {
   FUNC_5(VAR_3->sval);
   VAR_3->sval = (char *) FUNC_4(VAR_1);
   VAR_3->tval = VAR_0;
  }
 }
 return VAR_2;
}
