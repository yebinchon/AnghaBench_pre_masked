
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* param; int ibits; } ;
typedef TYPE_1__ mbreg_t ;
typedef int ispsoftc_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(ispsoftc_t *VAR_3, uint16_t VAR_4, uint32_t VAR_5)
{
 mbreg_t VAR_6;

 FUNC_1(&VAR_6, VAR_2, VAR_0, 500000);
 if (FUNC_0(VAR_3)) {
  VAR_6.param[1] = VAR_4;
  VAR_6.ibits = (1 << 10);
 } else {
  VAR_6.param[1] = VAR_4 << 8;
 }
 FUNC_2(VAR_3, &VAR_6);
 return (VAR_6.param[0] == VAR_1? 0 : VAR_6.param[0]);
}
