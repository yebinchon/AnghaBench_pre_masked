
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int lock; } ;
typedef int gfp_t ;


 int FUNC_0 (struct idr*,void*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct idr *VAR_0, void *VAR_1, int VAR_2, int VAR_3, gfp_t VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->lock);
 return (VAR_5);
}
