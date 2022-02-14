
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int device_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4;
 u_int32_t VAR_5;

 VAR_5 = (FUNC_3(VAR_3) << 16) | FUNC_4(VAR_3);
 VAR_4 = FUNC_1(FUNC_2(VAR_3), VAR_5);
 if (VAR_4 >= 0) {
  FUNC_0(VAR_3, VAR_2[VAR_4].name);
  return VAR_0;
 } else
  return VAR_1;
}
