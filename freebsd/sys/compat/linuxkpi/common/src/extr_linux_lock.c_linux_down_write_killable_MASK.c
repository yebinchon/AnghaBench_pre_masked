
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int sx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct rw_semaphore *VAR_2)
{
 int VAR_3;

 VAR_3 = -FUNC_1(&VAR_2->sx);
 if (VAR_3 != 0) {
  FUNC_0(VAR_1, VAR_3);
  VAR_3 = -VAR_0;
 }
 return (VAR_3);
}
