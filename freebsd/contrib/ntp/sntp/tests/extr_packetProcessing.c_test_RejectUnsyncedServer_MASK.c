
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int li_vn_mode; } ;
struct TYPE_5__ {TYPE_3__ p; } ;
struct TYPE_4__ {int p; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *,int ,int ,int *,char*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;

void
FUNC_5(void)
{
 FUNC_3(FUNC_0(VAR_0));

 VAR_6.p.li_vn_mode = FUNC_1(VAR_1,
           VAR_4,
           VAR_3);

 FUNC_2(VAR_5,
     FUNC_4(&VAR_6.p, &VAR_7, VAR_2,
          VAR_3, &VAR_8.p, "UnitTest"));
}
