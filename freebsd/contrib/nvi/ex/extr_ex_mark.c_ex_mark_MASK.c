
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int addr1; TYPE_1__** argv; } ;
struct TYPE_5__ {int len; int * bp; } ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *,int ,char*) ;

int
FUNC_3(SCR *VAR_1, EXCMD *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);

 if (VAR_2->argv[0]->len != 1) {
  FUNC_2(VAR_1, VAR_0, "136|Mark names must be a single character");
  return (1);
 }
 return (FUNC_1(VAR_1, VAR_2->argv[0]->bp[0], &VAR_2->addr1, 1));
}
