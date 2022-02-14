
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cno; } ;
struct TYPE_9__ {TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_11__ {int lundo; } ;
struct TYPE_10__ {TYPE_7__* ep; } ;
typedef TYPE_3__ SCR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

int
FUNC_2(SCR *VAR_2, VICMD *VAR_3)
{







 VAR_3->m_final.cno = 0;
 FUNC_0(VAR_2->ep, VAR_1);
 VAR_2->ep->lundo = VAR_0;

 return (FUNC_1(VAR_2));
}
