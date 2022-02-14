
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; } ;
typedef TYPE_1__ MEM ;



__attribute__((used)) static unsigned long FUNC_0(const MEM *VAR_0)
{
    size_t VAR_1;

    VAR_1 = (size_t)VAR_0->addr;

    VAR_1 = VAR_1 * 17851 + (VAR_1 >> 14) * 7 + (VAR_1 >> 4) * 251;
    return VAR_1;
}
