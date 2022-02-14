
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long error; } ;
typedef TYPE_1__ ERR_STRING_DATA ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(const ERR_STRING_DATA *VAR_0)
{
    unsigned long VAR_1, VAR_2;

    VAR_2 = VAR_0->error;
    VAR_1 = VAR_2 ^ FUNC_1(VAR_2) ^ FUNC_0(VAR_2);
    return (VAR_1 ^ VAR_1 % 19 * 13);
}
