
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_chinfo {int dummy; } ;
typedef int kobj_t ;





 int FUNC_0 (struct sc_chinfo*,int) ;
 int FUNC_1 (struct sc_chinfo*) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
    struct sc_chinfo *VAR_3 = VAR_1;

    switch(VAR_2) {
    case 129:
 FUNC_1(VAR_3);
 FUNC_0(VAR_3, 1);
 break;
    case 128:
    case 130:
 FUNC_0(VAR_3, 0);
 break;
    default:
 break;
    }


    return 0;
}
