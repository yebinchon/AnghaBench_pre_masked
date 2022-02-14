
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_mark_m_info* matchinfo; } ;
struct ebt_mark_m_info {int bitmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(const struct xt_mtchk_param *VAR_3)
{
 const struct ebt_mark_m_info *VAR_4 = VAR_3->matchinfo;

 if (VAR_4->bitmask & ~VAR_1)
  return 0;
 if ((VAR_4->bitmask & VAR_2) && (VAR_4->bitmask & VAR_0))
  return 0;
 if (!VAR_4->bitmask)
  return 0;
 return 1;
}
