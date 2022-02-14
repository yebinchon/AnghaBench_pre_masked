
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int refcnt; } ;
struct TYPE_9__ {TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;

int
FUNC_6(
 SCR *VAR_4,
 int VAR_5,
 int VAR_6)
{
 EXF *VAR_7;

 VAR_7 = VAR_4->ep;


 if (VAR_7 == ((void*)0))
  return (0);







 if (FUNC_0(VAR_7, VAR_1))
  if (FUNC_2(VAR_4, VAR_3)) {
   if (!VAR_5 && FUNC_3(VAR_4, VAR_6))
    return (1);
  } else if (VAR_7->refcnt <= 1 && !VAR_5) {
   FUNC_5(VAR_4, VAR_2, FUNC_1(VAR_0) ?
"262|File modified since last complete write; write or use ! to override" :
"263|File modified since last complete write; write or use :edit! to override");
   return (1);
  }

 return (FUNC_4(VAR_4, VAR_5));
}
