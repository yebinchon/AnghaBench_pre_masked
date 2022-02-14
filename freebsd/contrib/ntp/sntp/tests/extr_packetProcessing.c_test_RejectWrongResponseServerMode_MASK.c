
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long l_ui; unsigned long l_uf; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_11__ {int xmt; } ;
struct TYPE_10__ {int org; } ;
struct TYPE_9__ {TYPE_4__ p; } ;
struct TYPE_8__ {TYPE_5__ p; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int *,int ,int ,TYPE_5__*,char*) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;

void
FUNC_5(void)
{
 FUNC_3(FUNC_0(VAR_0));

 l_fp VAR_7;
 VAR_7.l_ui = 1000UL;
 VAR_7.l_uf = 0UL;
 FUNC_1(&VAR_7, &VAR_4.p.org);

 VAR_7.l_ui = 2000UL;
 VAR_7.l_uf = 0UL;
 FUNC_1(&VAR_7, &VAR_6.p.xmt);

 FUNC_2(VAR_3,
     FUNC_4(&VAR_4.p, &VAR_5, VAR_1,
          VAR_2, &VAR_6.p, "UnitTest"));
}
