
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned long l_ui; unsigned long l_uf; } ;
typedef TYPE_3__ l_fp ;
struct TYPE_8__ {int org; int refid; int stratum; int li_vn_mode; } ;
struct TYPE_11__ {TYPE_2__ p; } ;
struct TYPE_7__ {int xmt; } ;
struct TYPE_10__ {TYPE_1__ p; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;

void
FUNC_4(void)
{

 FUNC_3();
 VAR_4 = 0;




 VAR_5.p.li_vn_mode = FUNC_1(VAR_0, VAR_2,
          VAR_1);
 VAR_5.p.stratum = VAR_3;
 FUNC_2(&VAR_5.p.refid, "GPS\0", 4);




 l_fp VAR_7;
 VAR_7.l_ui = 1000UL;
 VAR_7.l_uf = 0UL;

 FUNC_0(&VAR_7, &VAR_5.p.org);
 FUNC_0(&VAR_7, &VAR_6.p.xmt);
}
