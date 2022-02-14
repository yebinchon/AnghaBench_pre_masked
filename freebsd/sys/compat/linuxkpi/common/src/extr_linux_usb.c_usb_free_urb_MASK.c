
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int cv_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct urb*,int ) ;
 int FUNC_2 (struct urb*) ;

void
FUNC_3(struct urb *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  return;
 }

 FUNC_2(VAR_1);


 FUNC_0(&VAR_1->cv_wait);


 FUNC_1(VAR_1, VAR_0);
}
