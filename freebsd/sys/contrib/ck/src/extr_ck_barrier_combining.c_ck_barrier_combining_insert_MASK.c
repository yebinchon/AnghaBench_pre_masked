
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_group {int k; struct ck_barrier_combining_group* parent; } ;



__attribute__((used)) static void
FUNC_0(struct ck_barrier_combining_group *VAR_0,
    struct ck_barrier_combining_group *VAR_1,
    struct ck_barrier_combining_group **VAR_2)
{

 *VAR_2 = VAR_1;
 VAR_1->parent = VAR_0;






 VAR_0->k++;
 return;
}
