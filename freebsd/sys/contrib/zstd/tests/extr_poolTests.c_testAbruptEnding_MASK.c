
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int test ;
struct TYPE_4__ {int mut; } ;
typedef TYPE_1__ abruptEndCanary_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__) ;

__attribute__((used)) static int FUNC_5(void) {
    int VAR_0;
    abruptEndCanary_t VAR_1;

    FUNC_3(&VAR_1, 0, sizeof(VAR_1));
    FUNC_0( FUNC_2(&VAR_1.mut, ((void*)0)) );

    VAR_0 = FUNC_4(VAR_1);

    FUNC_1(&VAR_1.mut);
    return VAR_0;
}
