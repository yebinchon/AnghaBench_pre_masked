
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int srcBuffer; int * srcPtrs; } ;
typedef TYPE_1__ buffers_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const) ;

__attribute__((used)) static void FUNC_2(const buffers_t VAR_0) {
    if(VAR_0.srcPtrs != ((void*)0)) {
        FUNC_0(VAR_0.srcBuffer);
    }
    FUNC_1(VAR_0);
}
