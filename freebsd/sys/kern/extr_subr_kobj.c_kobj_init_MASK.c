
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kobj_t ;
typedef int kobj_class_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(kobj_t VAR_1, kobj_class_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_3 != 0)
  FUNC_1("kobj_init1 failed: error %d", VAR_3);
}
