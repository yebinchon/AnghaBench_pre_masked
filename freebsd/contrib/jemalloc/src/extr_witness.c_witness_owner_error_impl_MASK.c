
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rank; int name; } ;
typedef TYPE_1__ witness_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(const witness_t *VAR_0) {
 FUNC_1("<jemalloc>: Should own %s(%u)\n", VAR_0->name,
     VAR_0->rank);
 FUNC_0();
}
