
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_periph {int refcount; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;

void
FUNC_3(struct cam_periph *VAR_1)
{

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1->refcount >= 1, ("periph->refcount >= 1"));
 if (--VAR_1->refcount == 0)
  FUNC_2(VAR_1);
}
