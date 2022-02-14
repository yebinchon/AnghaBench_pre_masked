
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_periph {int refcount; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3(struct cam_periph *VAR_0)
{

 FUNC_1();
 FUNC_0(VAR_0->refcount >= 1,
     ("cam_periph_doacquire() with refcount == %d", VAR_0->refcount));
 VAR_0->refcount++;
 FUNC_2();
}
