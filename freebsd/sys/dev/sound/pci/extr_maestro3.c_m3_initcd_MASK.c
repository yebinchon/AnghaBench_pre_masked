
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*,int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_2, void *VAR_3)
{
 struct sc_info *VAR_4 = (struct sc_info *)VAR_3;
 u_int32_t VAR_5;

 FUNC_0(VAR_0, ("m3_initcd\n"));



 VAR_5 = FUNC_1(VAR_4, VAR_1);
 return ((VAR_5 & 0x1) ? 0 : 1);
}
