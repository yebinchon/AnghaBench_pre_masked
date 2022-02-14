
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_periph {int flags; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(struct cam_periph *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_1);

 VAR_4 = VAR_2;
 FUNC_0();
 if ((VAR_3->flags & VAR_0) == 0) {
  VAR_3->refcount++;
  VAR_4 = 0;
 }
 FUNC_1();

 return (VAR_4);
}
