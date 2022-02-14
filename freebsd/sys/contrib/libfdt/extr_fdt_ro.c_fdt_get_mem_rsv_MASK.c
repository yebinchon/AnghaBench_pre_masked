
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int size; int address; } ;


 int FUNC_0 (void const*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (void const*,int) ;

int FUNC_3(const void *VAR_0, int VAR_1, uint64_t *VAR_2, uint64_t *VAR_3)
{
 FUNC_0(VAR_0);
 *VAR_2 = FUNC_1(FUNC_2(VAR_0, VAR_1)->address);
 *VAR_3 = FUNC_1(FUNC_2(VAR_0, VAR_1)->size);
 return 0;
}
