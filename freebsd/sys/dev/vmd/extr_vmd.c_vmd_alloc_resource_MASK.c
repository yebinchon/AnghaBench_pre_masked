
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct resource* FUNC_1 (scalar_t__,int ,int*,int ,int ,int ,int ) ;
 struct resource* FUNC_2 (int ,int ,int,int*,int ,int ,int ,int ) ;

__attribute__((used)) static struct resource *
FUNC_3(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{

 if (VAR_4 == VAR_1) {
  return (FUNC_1(VAR_0 -
      FUNC_0(VAR_2), VAR_3, VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9));
 }

 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_9));
}
