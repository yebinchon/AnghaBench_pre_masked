
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* bp; } ;
struct TYPE_7__ {TYPE_1__* cmd; TYPE_3__** argv; } ;
struct TYPE_6__ {int usage; } ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;
typedef TYPE_3__ ARGS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;

int
FUNC_7(SCR *VAR_1, EXCMD *VAR_2)
{
 ARGS *VAR_3;

 VAR_3 = VAR_2->argv[0];

 switch (VAR_3->bp[0]) {
 case 'b':
  if (!FUNC_6(VAR_3, FUNC_0("buffers")))
   break;
  return (FUNC_1(VAR_1));
 case 'c':
  if (!FUNC_6(VAR_3, FUNC_0("connections")))
   break;
  return (FUNC_2(VAR_1));
 case 's':
  if (!FUNC_6(VAR_3, FUNC_0("screens")))
   break;
  return (FUNC_4(VAR_1));
 case 't':
  if (!FUNC_6(VAR_3, FUNC_0("tags")))
   break;
  return (FUNC_5(VAR_1));
 }
 FUNC_3(VAR_1, VAR_2->cmd->usage, VAR_0);
 return (1);
}
