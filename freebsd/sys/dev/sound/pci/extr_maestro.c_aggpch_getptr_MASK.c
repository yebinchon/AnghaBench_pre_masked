
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agg_chinfo {int num; int phys; int base; scalar_t__ stereo; scalar_t__ qs16; int parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static u_int32_t
FUNC_3(kobj_t VAR_1, void *VAR_2)
{
 struct agg_chinfo *VAR_3 = VAR_2;
 u_int32_t VAR_4;

 FUNC_0(VAR_3->parent);
 VAR_4 = FUNC_2(VAR_3->parent, (VAR_3->num << 1) | 32, VAR_0);
 FUNC_1(VAR_3->parent);

 return VAR_3->qs16 && VAR_3->stereo
  ? (VAR_4 << 2) - ((0xffff << 2) & (VAR_3->phys - VAR_3->base))
  : (VAR_4 << 1) - ((0xffff << 1) & (VAR_3->phys - VAR_3->base));
}
