
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nargs; int ** args; TYPE_1__* fcncell; } ;
struct TYPE_3__ {int nval; } ;
typedef int Node ;
typedef int Cell ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *) ;

Cell *FUNC_3(Node **VAR_1, int VAR_2)
{

 VAR_2 = FUNC_2(VAR_1[0]);
    FUNC_1( ("arg(%d), fp->nargs=%d\n", VAR_2, VAR_0->nargs) );
 if (VAR_2+1 > VAR_0->nargs)
  FUNC_0("argument #%d of function %s was not supplied",
   VAR_2+1, VAR_0->fcncell->nval);
 return VAR_0->args[VAR_2];
}
