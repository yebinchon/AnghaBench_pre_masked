
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ib_net16_t ;
struct TYPE_3__ {int * raw; } ;
typedef TYPE_1__ ib_gid_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline boolean_t FUNC_1(const ib_gid_t *VAR_0)
{
 ib_net16_t VAR_1 = *(ib_net16_t *)&VAR_0->raw[2];
 return (VAR_1 == FUNC_0(0x401b) || VAR_1 == FUNC_0(0x601b));
}
