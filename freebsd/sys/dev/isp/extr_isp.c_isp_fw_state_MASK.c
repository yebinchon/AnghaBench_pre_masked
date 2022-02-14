
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* param; } ;
typedef TYPE_1__ mbreg_t ;
typedef int ispsoftc_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(ispsoftc_t *VAR_4, int VAR_5)
{
 if (FUNC_0(VAR_4)) {
  mbreg_t VAR_6;

  FUNC_1(&VAR_6, VAR_3, VAR_1, 0);
  FUNC_2(VAR_4, &VAR_6);
  if (VAR_6.param[0] == VAR_2) {
   return (VAR_6.param[1]);
  }
 }
 return (VAR_0);
}
