
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sglist_seg {int ss_paddr; int ss_len; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static __be64
FUNC_1(struct sglist_seg *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_2 / 3) * 2;

 switch (VAR_2 % 3) {
 case 0: {
  uint64_t VAR_4;

  VAR_4 = (uint64_t)VAR_0[VAR_3].ss_len << 32;
  if (VAR_3 + 1 < VAR_1)
   VAR_4 |= (uint64_t)(VAR_0[VAR_3 + 1].ss_len);

  return (FUNC_0(VAR_4));
 }
 case 1:
  return (FUNC_0(VAR_0[VAR_3].ss_paddr));
 case 2:
  return (FUNC_0(VAR_0[VAR_3 + 1].ss_paddr));
 }

 return (0);
}
