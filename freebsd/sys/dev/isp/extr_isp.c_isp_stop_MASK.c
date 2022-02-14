
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* param; } ;
typedef TYPE_1__ mbreg_t ;
struct TYPE_8__ {int isp_state; } ;
typedef TYPE_2__ ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(ispsoftc_t *VAR_4)
{
 mbreg_t VAR_5;

 VAR_4->isp_state = VAR_0;
 FUNC_0(&VAR_5, VAR_3, VAR_1, 500000);
 VAR_5.param[1] = 0;
 VAR_5.param[2] = 0;
 VAR_5.param[3] = 0;
 VAR_5.param[4] = 0;
 VAR_5.param[5] = 0;
 VAR_5.param[6] = 0;
 VAR_5.param[7] = 0;
 VAR_5.param[8] = 0;
 FUNC_1(VAR_4, &VAR_5);
 return (VAR_5.param[0] == VAR_2 ? 0 : VAR_5.param[0]);
}
