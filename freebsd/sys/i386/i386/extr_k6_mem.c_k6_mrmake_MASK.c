
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mem_range_desc {int mr_base; int mr_len; int mr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static __inline int
FUNC_3(struct mem_range_desc *VAR_5, u_int32_t *VAR_6)
{
 u_int32_t VAR_7 = 0, VAR_8, VAR_9;
 int VAR_10;

 if (VAR_5->mr_base &~ 0xfffe0000)
  return (VAR_0);
 if (VAR_5->mr_len < 131072 || !FUNC_2(VAR_5->mr_len))
  return (VAR_0);
 if (VAR_5->mr_flags &~ (VAR_4|VAR_3|VAR_2))
  return (VAR_1);

 for (VAR_10 = FUNC_1(VAR_5->mr_len >> 17) - 1; VAR_10 < 15; VAR_10++)
  VAR_7 |= 1 << VAR_10;
 VAR_8 = (VAR_5->mr_flags & VAR_4) ? 1 : 0;
 VAR_9 = (VAR_5->mr_flags & VAR_3) ? 1 : 0;

 *VAR_6 = FUNC_0(VAR_5->mr_base, VAR_7, VAR_8, VAR_9);
 return (0);
}
