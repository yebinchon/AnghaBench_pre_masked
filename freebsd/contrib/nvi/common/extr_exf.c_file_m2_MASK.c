
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int refcnt; } ;
struct TYPE_7__ {TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;

int
FUNC_3(
 SCR *VAR_2,
 int VAR_3)
{
 EXF *VAR_4;

 VAR_4 = VAR_2->ep;


 if (VAR_4 == ((void*)0))
  return (0);





 if (FUNC_0(VAR_4, VAR_0) && VAR_4->refcnt <= 1 && !VAR_3) {
  FUNC_2(VAR_2, VAR_1,
"264|File modified since last complete write; write or use ! to override");
  return (1);
 }

 return (FUNC_1(VAR_2, VAR_3));
}
