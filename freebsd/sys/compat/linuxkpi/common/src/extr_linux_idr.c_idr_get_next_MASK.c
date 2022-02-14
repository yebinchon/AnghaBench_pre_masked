
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int lock; } ;


 void* FUNC_0 (struct idr*,int) ;
 int FUNC_1 (struct idr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void *
FUNC_4(struct idr *VAR_0, int *VAR_1)
{
 void *VAR_2 = ((void*)0);
 int VAR_3 = *VAR_1;

 FUNC_2(&VAR_0->lock);
 for (; VAR_3 <= FUNC_1(VAR_0); VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  if (VAR_2 == ((void*)0))
   continue;
  *VAR_1 = VAR_3;
  break;
 }
 FUNC_3(&VAR_0->lock);
 return (VAR_2);
}
