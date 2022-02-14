
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int nvlist_t ;
typedef int if_ctx_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int const*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_0, uint16_t VAR_1, const nvlist_t *VAR_2)
{
 int VAR_3;
 if_ctx_t VAR_4 = FUNC_3(VAR_0);

 FUNC_0(VAR_4);
 VAR_3 = FUNC_2(VAR_4, VAR_1, VAR_2);
 FUNC_1(VAR_4);

 return (VAR_3);
}
