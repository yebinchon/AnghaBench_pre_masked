
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int next_cyclic_id; int lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct idr*,void*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct idr *VAR_1, void *VAR_2, int VAR_3, int VAR_4, gfp_t VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_1->lock);
 VAR_6 = FUNC_0(VAR_1, VAR_2, FUNC_2(VAR_3, VAR_1->next_cyclic_id), VAR_4);
 if (FUNC_5(VAR_6 == -VAR_0))
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_6 >= 0))
  VAR_1->next_cyclic_id = VAR_6 + 1;
 FUNC_4(&VAR_1->lock);
 return (VAR_6);
}
