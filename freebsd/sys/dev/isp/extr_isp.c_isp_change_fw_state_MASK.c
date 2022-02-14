
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_3__ {int isp_fwstate; } ;
typedef TYPE_1__ fcparam ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ispsoftc_t *VAR_2, int VAR_3, int VAR_4)
{
 fcparam *VAR_5 = FUNC_0(VAR_2, VAR_3);

 if (VAR_5->isp_fwstate == VAR_4)
  return;
 FUNC_2(VAR_2, VAR_0|VAR_1,
     "Chan %d Firmware state <%s->%s>", VAR_3,
     FUNC_1(VAR_5->isp_fwstate), FUNC_1(VAR_4));
 VAR_5->isp_fwstate = VAR_4;
}
