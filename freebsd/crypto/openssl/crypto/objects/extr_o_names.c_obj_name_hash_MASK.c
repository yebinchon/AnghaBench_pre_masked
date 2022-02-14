
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long (* hash_func ) (int ) ;} ;
struct TYPE_4__ {unsigned long type; int name; } ;
typedef TYPE_1__ OBJ_NAME ;


 int * VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(const OBJ_NAME *VAR_1)
{
    unsigned long VAR_2;

    if ((VAR_0 != ((void*)0))
        && (FUNC_1(VAR_0) > VAR_1->type)) {
        VAR_2 =
            FUNC_2(VAR_0,
                                VAR_1->type)->hash_func(VAR_1->name);
    } else {
        VAR_2 = FUNC_0(VAR_1->name);
    }
    VAR_2 ^= VAR_1->type;
    return VAR_2;
}
