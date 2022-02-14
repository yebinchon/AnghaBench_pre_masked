
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mxge_softc_t ;
struct TYPE_3__ {scalar_t__ data0; } ;
typedef TYPE_1__ mxge_cmd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(mxge_softc_t *VAR_4)
{
 mxge_cmd_t VAR_5;
 int VAR_6;

 if (VAR_0 - VAR_3 > VAR_2)
  return VAR_2 - VAR_3;



 VAR_5.data0 = 0;
 VAR_6 = FUNC_0(VAR_4, VAR_1,
          &VAR_5);
 if (VAR_6 == 0)
  return VAR_2 - VAR_3;


 return VAR_0 - VAR_3;
}
