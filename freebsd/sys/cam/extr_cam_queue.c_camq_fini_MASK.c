
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camq {int * queue_array; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct camq *VAR_1)
{
 if (VAR_1->queue_array != ((void*)0)) {




  VAR_1->queue_array++;
  FUNC_0(VAR_1->queue_array, VAR_0);
 }
}
