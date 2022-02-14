
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_6__ {int lno; } ;
struct TYPE_7__ {TYPE_1__ addr1; } ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int ) ;

int
FUNC_4(SCR *VAR_1, EXCMD *VAR_2)
{
 recno_t VAR_3;

 FUNC_1(VAR_1, VAR_2);
 if (FUNC_0(VAR_2, VAR_0)) {
  if (FUNC_2(VAR_1, &VAR_3))
   return (1);
 } else
  VAR_3 = VAR_2->addr1.lno;

 (void)FUNC_3(VAR_1, "%ld\n", VAR_3);
 return (0);
}
