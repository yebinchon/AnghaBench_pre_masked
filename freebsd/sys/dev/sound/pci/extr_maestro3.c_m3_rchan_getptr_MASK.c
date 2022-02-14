
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_rchinfo {int ptr; struct sc_info* parent; } ;
struct sc_info {int dummy; } ;
typedef int kobj_t ;


 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (struct sc_info*) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_0, void *VAR_1)
{
 struct sc_rchinfo *VAR_2 = VAR_1;
 struct sc_info *VAR_3 = VAR_2->parent;
 u_int32_t VAR_4;

 FUNC_0(VAR_3);
 VAR_4 = VAR_2->ptr;
 FUNC_1(VAR_3);

 return (VAR_4);
}
