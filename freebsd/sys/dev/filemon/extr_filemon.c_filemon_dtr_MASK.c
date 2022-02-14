
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filemon {int lock; } ;


 int FUNC_0 (struct filemon*) ;
 int FUNC_1 (struct filemon*) ;
 int FUNC_2 (struct filemon*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct filemon *VAR_1 = VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_3(&VAR_1->lock);



 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
