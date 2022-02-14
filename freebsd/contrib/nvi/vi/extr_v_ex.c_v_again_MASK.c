
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lno; } ;
struct TYPE_6__ {TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;
typedef int EXCMD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (int *,int *,int ,int,int ,int ,int) ;
 int FUNC_3 (int *,TYPE_2__*,int *) ;

int
FUNC_4(SCR *VAR_1, VICMD *VAR_2)
{
 EXCMD VAR_3;

 FUNC_2(VAR_1, &VAR_3, VAR_0, 2, VAR_2->m_start.lno, VAR_2->m_start.lno, 1);
 FUNC_1(VAR_1, &VAR_3, FUNC_0(""), 1);
 return (FUNC_3(VAR_1, VAR_2, &VAR_3));
}
