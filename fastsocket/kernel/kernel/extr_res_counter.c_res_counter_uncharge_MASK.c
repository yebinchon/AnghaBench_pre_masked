
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_counter {int lock; struct res_counter* parent; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct res_counter*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct res_counter *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct res_counter *VAR_3;

 FUNC_1(VAR_2);
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->parent) {
  FUNC_3(&VAR_3->lock);
  FUNC_2(VAR_3, VAR_1);
  FUNC_4(&VAR_3->lock);
 }
 FUNC_0(VAR_2);
}
