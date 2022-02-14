
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__** argv; scalar_t__ argc; } ;
struct TYPE_11__ {struct TYPE_11__* nextdisp; } ;
struct TYPE_10__ {int * bp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__**,int *,int) ;

int
FUNC_3(SCR *VAR_2, EXCMD *VAR_3)
{
 SCR *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (FUNC_2(VAR_2, &VAR_4, VAR_3->argc ? VAR_3->argv[0]->bp : ((void*)0), VAR_5))
  return (1);


 if (VAR_5) {
  VAR_2->nextdisp = VAR_4;
  FUNC_1(VAR_2, VAR_1);
 }
 return (0);
}
