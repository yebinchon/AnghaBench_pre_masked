
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct phys_sge_pairs {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int
FUNC_1(int VAR_0)
{
 int VAR_1;

 VAR_1 = (VAR_0 / 8) * sizeof(struct phys_sge_pairs);
 if ((VAR_0 % 8) != 0) {
  VAR_1 += sizeof(uint16_t) * 8;
  VAR_1 += FUNC_0(VAR_0 % 8, 2) * sizeof(uint64_t);
 }
 return (VAR_1);
}
