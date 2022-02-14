
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_open_hash {int size; unsigned int order; int * table; int mask; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,int ,int *,int ) ;

int FUNC_2(struct drm_open_hash *VAR_3, unsigned int VAR_4)
{
 VAR_3->size = 1 << VAR_4;
 VAR_3->order = VAR_4;
 VAR_3->table = ((void*)0);
 VAR_3->table = FUNC_1(VAR_3->size, VAR_0, &VAR_3->mask,
     VAR_2);
 if (!VAR_3->table) {
  FUNC_0("Out of memory for hash table\n");
  return -VAR_1;
 }
 return 0;
}
