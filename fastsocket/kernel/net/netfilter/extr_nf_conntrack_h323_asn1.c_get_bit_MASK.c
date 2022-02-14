
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* cur; int bit; } ;
typedef TYPE_1__ bitstr_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static unsigned int FUNC_1(bitstr_t *VAR_0)
{
 unsigned int VAR_1 = (*VAR_0->cur) & (0x80 >> VAR_0->bit);

 FUNC_0(VAR_0);

 return VAR_1;
}
