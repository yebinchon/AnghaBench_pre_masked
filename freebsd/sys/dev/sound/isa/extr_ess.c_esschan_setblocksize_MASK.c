
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ess_chinfo {int blksz; } ;
typedef int kobj_t ;



__attribute__((used)) static u_int32_t
FUNC_0(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct ess_chinfo *VAR_3 = VAR_1;

 VAR_3->blksz = VAR_2;
 return VAR_3->blksz;
}
