
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int u; } ;
typedef TYPE_1__ br_union_u64 ;


 scalar_t__ FUNC_0 (unsigned char const*) ;

__attribute__((used)) static inline uint64_t
FUNC_1(const void *VAR_0)
{



 const unsigned char *VAR_1;

 VAR_1 = VAR_0;
 return (uint64_t)FUNC_0(VAR_1)
  | ((uint64_t)FUNC_0(VAR_1 + 4) << 32);

}
