
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_chinfo {scalar_t__ dir; int speed; scalar_t__ dma_active; struct sc_info* parent; } ;
struct sc_info {struct sc_chinfo pch; struct sc_chinfo rch; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u_int32_t
FUNC_0(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct sc_chinfo *VAR_4 = VAR_2, *VAR_5;
 struct sc_info *VAR_6 = VAR_4->parent;

 VAR_5 = (VAR_4->dir == VAR_0) ? &VAR_6->rch : &VAR_6->pch;


 if (VAR_5->dma_active) {
  VAR_4->speed = VAR_5->speed;
  return VAR_5->speed;
 }

 VAR_4->speed = VAR_3;
 return VAR_3;
}
