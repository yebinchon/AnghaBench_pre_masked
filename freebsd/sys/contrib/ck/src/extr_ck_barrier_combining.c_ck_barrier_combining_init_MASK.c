
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_group {int * right; int left; int parent; scalar_t__ sense; scalar_t__ count; scalar_t__ k; } ;
struct ck_barrier_combining {struct ck_barrier_combining_group* root; int mutex; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct ck_barrier_combining *VAR_0,
    struct ck_barrier_combining_group *VAR_1)
{

 VAR_1->k = 0;
 VAR_1->count = 0;
 VAR_1->sense = 0;
 VAR_1->parent = VAR_1->left = *(VAR_1->right = ((void*)0));
 FUNC_0(&VAR_0->mutex);
 VAR_0->root = VAR_1;
 return;
}
