
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lno; } ;
struct TYPE_7__ {int count; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;
typedef int EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int,int,int,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int *) ;

int
FUNC_3(SCR *VAR_2, VICMD *VAR_3)
{
 EXCMD VAR_4;
 int VAR_5;
 VAR_5 = VAR_3->m_start.lno + 1;
 if (FUNC_0(VAR_3, VAR_1) && VAR_3->count > 2)
  VAR_5 = VAR_3->m_start.lno + (VAR_3->count - 1);

 FUNC_1(VAR_2, &VAR_4, VAR_0, 2, VAR_3->m_start.lno, VAR_5, 0);
 return (FUNC_2(VAR_2, VAR_3, &VAR_4));
}
