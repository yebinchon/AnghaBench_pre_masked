
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_kring {int q_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct netmap_kring*,int) ;

int
FUNC_3(struct netmap_kring *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->q_lock);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->q_lock);
 return VAR_2;
}
