
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_object {int lo_flags; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lock_object*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct lock_object*) ;
 int FUNC_3 (struct lock_object*) ;

void
FUNC_4(struct lock_object *VAR_1)
{

 FUNC_0(FUNC_3(VAR_1), ("lock %p is not initialized", VAR_1));
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, 0);
 VAR_1->lo_flags &= ~VAR_0;
}
