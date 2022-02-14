
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;
typedef size_t U32 ;


 int FUNC_0 (int ,int ,int ) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(const paramValues_t VAR_3)
{
    U32 VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_0(VAR_3.vals[VAR_4], VAR_2[VAR_4], VAR_1[VAR_4]);
    }
    return 1;
}
