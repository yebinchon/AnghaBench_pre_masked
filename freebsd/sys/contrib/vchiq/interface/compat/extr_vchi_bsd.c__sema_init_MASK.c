
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore {int value; int cv; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct semaphore*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*,int) ;

void
FUNC_3(struct semaphore *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3, sizeof(*VAR_3));
 FUNC_2(&VAR_3->mtx, "sema lock", "VCHIQ sepmaphore backing lock",
  VAR_0 | VAR_1 | VAR_2);
 FUNC_1(&VAR_3->cv, "sema cv");
 VAR_3->value = VAR_4;
}
