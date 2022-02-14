
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_7__ {int lno; } ;
struct TYPE_6__ {int lno; scalar_t__ cno; } ;
typedef int TEXTH ;
typedef TYPE_1__ SCR ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(SCR *VAR_1, TEXTH *VAR_2)
{
 recno_t VAR_3;
 for (VAR_3 = FUNC_1(VAR_2)->lno;
     !FUNC_2(VAR_1, VAR_3) && VAR_3 > 0; --VAR_3);

 VAR_1->lno = VAR_3 == 0 ? 1 : VAR_3;
 VAR_1->cno = 0;


 FUNC_0(VAR_1, VAR_0);
}
