
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct isp_fc {scalar_t__ loop_down_time; } ;
typedef int ispsoftc_t ;
struct TYPE_3__ {int role; } ;
typedef TYPE_1__ fcparam ;


 TYPE_1__* FUNC_0 (int *,int) ;
 struct isp_fc* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct isp_fc*) ;

__attribute__((used)) static void
FUNC_5(ispsoftc_t *VAR_4, int VAR_5)
{
 fcparam *VAR_6 = FUNC_0(VAR_4, VAR_5);
 struct isp_fc *VAR_7 = FUNC_1(VAR_4, VAR_5);

 if (VAR_7->loop_down_time)
  return;
 FUNC_3(VAR_4, VAR_1|VAR_0, "Chan %d Loop changed", VAR_5);
 if (VAR_6->role & VAR_2)
  FUNC_2(VAR_4, VAR_5);
 VAR_7->loop_down_time = VAR_3;
 FUNC_4(VAR_7);
}
