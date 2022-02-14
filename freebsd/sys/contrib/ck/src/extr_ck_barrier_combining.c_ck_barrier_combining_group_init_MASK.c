
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_queue {int * head; int * tail; } ;
struct ck_barrier_combining_group {unsigned int k; int * right; int * left; scalar_t__ sense; scalar_t__ count; } ;
struct ck_barrier_combining {int mutex; int * root; } ;


 int FUNC_0 (struct ck_barrier_combining_group*,struct ck_barrier_combining_group*,int **) ;
 struct ck_barrier_combining_group* FUNC_1 (struct ck_barrier_combining_queue*) ;
 int FUNC_2 (struct ck_barrier_combining_queue*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct ck_barrier_combining *VAR_0,
    struct ck_barrier_combining_group *VAR_1,
    unsigned int VAR_2)
{
 struct ck_barrier_combining_group *VAR_3;
 struct ck_barrier_combining_queue VAR_4;

 VAR_4.head = VAR_4.tail = ((void*)0);

 VAR_1->k = VAR_2;
 VAR_1->count = 0;
 VAR_1->sense = 0;
 VAR_1->left = VAR_1->right = ((void*)0);






 FUNC_3(&VAR_0->mutex);
 FUNC_2(&VAR_4, VAR_0->root);
 while (VAR_4.head != ((void*)0)) {
  VAR_3 = FUNC_1(&VAR_4);


  if (VAR_3->left == ((void*)0)) {
   FUNC_0(VAR_3, VAR_1, &VAR_3->left);
   goto leave;
  }


  if (VAR_3->right == ((void*)0)) {
   FUNC_0(VAR_3, VAR_1, &VAR_3->right);
   goto leave;
  }





  FUNC_2(&VAR_4, VAR_3->left);
  FUNC_2(&VAR_4, VAR_3->right);
 }

leave:
 FUNC_4(&VAR_0->mutex);
 return;
}
