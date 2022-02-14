
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int refid; int stratum; } ;
struct TYPE_5__ {TYPE_3__ p; } ;
struct TYPE_4__ {int p; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_3__*,int *,int ,int ,int *,char*) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

void
FUNC_5(void)
{
 FUNC_2(FUNC_0(VAR_0));

 VAR_5.p.stratum = VAR_4;
 FUNC_3(&VAR_5.p.refid, "RATE", 4);

 FUNC_1(VAR_1,
     FUNC_4(&VAR_5.p, &VAR_6, VAR_2,
          VAR_3, &VAR_7.p, "UnitTest"));
}
