
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int master; struct sc_info* parent; } ;
struct sc_info {int lock; } ;
typedef int kobj_t ;


 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_3(kobj_t VAR_0, void *VAR_1)
{
 struct sc_pchinfo *VAR_2 = VAR_1;
 struct sc_info *VAR_3 = VAR_2->parent;
 int VAR_4;

 FUNC_1(VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_2->master);
 FUNC_2(VAR_3->lock);

 return VAR_4;
}
