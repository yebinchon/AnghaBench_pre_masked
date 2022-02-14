
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int e_lno; scalar_t__ e_cno; } ;
struct TYPE_15__ {int cno; int lno; } ;
struct TYPE_16__ {TYPE_1__ ev; TYPE_2__ m_stop; } ;
typedef TYPE_3__ VICMD ;
struct TYPE_18__ {int cols; } ;
struct TYPE_17__ {int soff; int lno; } ;
typedef TYPE_4__ SMAP ;
typedef TYPE_5__ SCR ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int ,scalar_t__) ;

int
FUNC_3(SCR *VAR_4, VICMD *VAR_5)
{
 SMAP *VAR_6;

 VAR_6 = VAR_1 + VAR_5->ev.e_lno;
 if (VAR_6 > VAR_3) {
  FUNC_1(VAR_4, VAR_2, "320|Unknown cursor position.");
  return (1);
 }
 VAR_5->m_stop.lno = VAR_6->lno;
 VAR_5->m_stop.cno =
     FUNC_2(VAR_4, VAR_6->lno, VAR_5->ev.e_cno + (VAR_6->soff - 1) * VAR_4->cols);
 return (FUNC_0(VAR_4, VAR_5, 0, VAR_0));
}
