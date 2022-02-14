
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* param; } ;
typedef TYPE_1__ mbreg_t ;
typedef int ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_3(ispsoftc_t *VAR_4, int VAR_5)
{
 mbreg_t VAR_6;

 FUNC_0(&VAR_6, VAR_3, VAR_1, 500000);
 VAR_6.param[1] = 0x03;
 VAR_6.param[9] = VAR_5;
 FUNC_1(VAR_4, &VAR_6);
 if (VAR_6.param[0] == VAR_2) {
  return (0);
 } else {
  FUNC_2(VAR_4, VAR_0, "Chan %d Send Change Request: 0x%x",
      VAR_5, VAR_6.param[0]);
  return (-1);
 }
}
