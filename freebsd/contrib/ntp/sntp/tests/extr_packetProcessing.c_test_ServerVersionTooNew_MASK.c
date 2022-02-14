
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
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int *,int,int ,int *,char*) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

void
FUNC_7(void)
{
 FUNC_4(FUNC_0(VAR_0));

 VAR_7.p.li_vn_mode = FUNC_1(VAR_1,
           VAR_5 + 1,
           VAR_3);
 FUNC_5(FUNC_2(VAR_7.p.li_vn_mode) > VAR_5);

 int VAR_10 = VAR_2;

 FUNC_3(VAR_6,
     FUNC_6(&VAR_7.p, &VAR_8, VAR_10,
          VAR_4, &VAR_9.p, "UnitTest"));
}
