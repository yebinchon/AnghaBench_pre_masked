
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_entry* entryinfo; struct ebt_arp_info* matchinfo; } ;
struct ebt_entry {scalar_t__ ethproto; int invflags; } ;
struct ebt_arp_info {int bitmask; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_4)
{
 const struct ebt_arp_info *VAR_5 = VAR_4->matchinfo;
 const struct ebt_entry *VAR_6 = VAR_4->entryinfo;

 if ((VAR_6->ethproto != FUNC_0(VAR_2) &&
    VAR_6->ethproto != FUNC_0(VAR_3)) ||
    VAR_6->invflags & VAR_1)
  return 0;
 if (VAR_5->bitmask & ~VAR_0 || VAR_5->invflags & ~VAR_0)
  return 0;
 return 1;
}
