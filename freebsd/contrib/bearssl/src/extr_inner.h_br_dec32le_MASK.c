
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int u; } ;
typedef TYPE_1__ br_union_u32 ;



__attribute__((used)) static inline uint32_t
FUNC_0(const void *VAR_0)
{



 const unsigned char *VAR_1;

 VAR_1 = VAR_0;
 return (uint32_t)VAR_1[0]
  | ((uint32_t)VAR_1[1] << 8)
  | ((uint32_t)VAR_1[2] << 16)
  | ((uint32_t)VAR_1[3] << 24);

}
