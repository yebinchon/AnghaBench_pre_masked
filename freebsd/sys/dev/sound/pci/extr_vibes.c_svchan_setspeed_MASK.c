
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_chinfo {int spd; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct sc_chinfo *VAR_3 = VAR_1;
 FUNC_0(VAR_2, 8000, 48000);
 VAR_3->spd = VAR_2;
 return VAR_2;
}
