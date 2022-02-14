
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int vec; } ;
typedef TYPE_1__ prof_bt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,size_t*) ;

__attribute__((used)) static void
FUNC_2(const void *VAR_1, size_t VAR_2[2]) {
 prof_bt_t *VAR_3 = (prof_bt_t *)VAR_1;

 FUNC_0(VAR_0);

 FUNC_1(VAR_3->vec, VAR_3->len * sizeof(void *), 0x94122f33U, VAR_2);
}
