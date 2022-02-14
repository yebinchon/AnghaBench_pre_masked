
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int u; } ;
typedef TYPE_1__ br_union_u32 ;



__attribute__((used)) static inline void
FUNC_0(void *VAR_0, uint32_t VAR_1)
{



 unsigned char *VAR_2;

 VAR_2 = VAR_0;
 VAR_2[0] = (unsigned char)(VAR_1 >> 24);
 VAR_2[1] = (unsigned char)(VAR_1 >> 16);
 VAR_2[2] = (unsigned char)(VAR_1 >> 8);
 VAR_2[3] = (unsigned char)VAR_1;

}
