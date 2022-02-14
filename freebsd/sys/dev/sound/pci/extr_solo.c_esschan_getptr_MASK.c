
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ess_info {int dummy; } ;
struct ess_chinfo {int hwch; struct ess_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (struct ess_info*,int ) ;
 int FUNC_1 (struct ess_info*) ;
 int FUNC_2 (struct ess_info*) ;

__attribute__((used)) static u_int32_t
FUNC_3(kobj_t VAR_0, void *VAR_1)
{
 struct ess_chinfo *VAR_2 = VAR_1;
 struct ess_info *VAR_3 = VAR_2->parent;
 u_int32_t VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_3, VAR_2->hwch);
 FUNC_2(VAR_3);
 return VAR_4;
}
