
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_open_hash {int * table; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct drm_open_hash *VAR_1)
{
 if (VAR_1->table) {
  FUNC_0(VAR_1->table, VAR_0, VAR_1->mask);
  VAR_1->table = ((void*)0);
 }
}
