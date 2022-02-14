
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int,struct resource*) ;
 int FUNC_1 (int ,int ,int,struct resource*,int ,int ) ;
 int FUNC_2 (struct resource*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, struct resource *VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5)
{

    if (FUNC_0(VAR_2, VAR_3))
 return (FUNC_2(VAR_3, VAR_4, VAR_5));
    return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
