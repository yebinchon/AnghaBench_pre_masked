
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int* raw; } ;
typedef int u16 ;
struct TYPE_2__ {union ib_gid dgid; } ;
struct ib_ah_attr {TYPE_1__ grh; } ;



__attribute__((used)) static inline bool
FUNC_0(struct ib_ah_attr *VAR_0, u16 *VAR_1)
{
 u16 VAR_2;
 union ib_gid *VAR_3 = &VAR_0->grh.dgid;

 VAR_2 = (VAR_3->raw[11] << 8) | VAR_3->raw[12];
 if (VAR_2 < 0x1000) {
  *VAR_1 = VAR_2;
  return 1;
 } else {
  *VAR_1 = 0;
  return 0;
 }
}
