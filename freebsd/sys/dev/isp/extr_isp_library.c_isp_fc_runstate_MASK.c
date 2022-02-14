
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_3__ {scalar_t__ role; int isp_loopstate; } ;
typedef TYPE_1__ fcparam ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ,int,...) ;

int
FUNC_2(ispsoftc_t *VAR_5, int VAR_6, int VAR_7)
{
 fcparam *VAR_8 = FUNC_0(VAR_5, VAR_6);
 int VAR_9;

again:
 if (VAR_8->role == VAR_4)
  return (-1);
 VAR_9 = FUNC_1(VAR_5, VAR_0, VAR_6, VAR_7);
 if (VAR_9 > 0)
  goto again;
 if (VAR_9 < 0)
  return (VAR_8->isp_loopstate);
 VAR_9 = FUNC_1(VAR_5, VAR_3, VAR_6);
 if (VAR_9 > 0)
  goto again;
 if (VAR_9 < 0)
  return (VAR_8->isp_loopstate);
 VAR_9 = FUNC_1(VAR_5, VAR_2, VAR_6);
 if (VAR_9 > 0)
  goto again;
 if (VAR_9 < 0)
  return (VAR_8->isp_loopstate);
 VAR_9 = FUNC_1(VAR_5, VAR_1, VAR_6);
 if (VAR_9 > 0)
  goto again;
 return (VAR_8->isp_loopstate);
}
