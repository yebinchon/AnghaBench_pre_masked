
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_ip6_info* matchinfo; struct ebt_entry* entryinfo; } ;
struct ebt_ip6_info {int bitmask; int invflags; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; } ;
struct ebt_entry {scalar_t__ ethproto; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_11)
{
 const struct ebt_entry *VAR_12 = VAR_11->entryinfo;
 struct ebt_ip6_info *VAR_13 = VAR_11->matchinfo;

 if (VAR_12->ethproto != FUNC_0(VAR_5) || VAR_12->invflags & VAR_4)
  return 0;
 if (VAR_13->bitmask & ~VAR_1 || VAR_13->invflags & ~VAR_1)
  return 0;
 if (VAR_13->bitmask & (VAR_0 | VAR_3)) {
  if (VAR_13->invflags & VAR_2)
   return 0;
  if (VAR_13->protocol != VAR_8 &&
      VAR_13->protocol != VAR_9 &&
      VAR_13->protocol != VAR_10 &&
      VAR_13->protocol != VAR_7 &&
      VAR_13->protocol != VAR_6)
   return 0;
 }
 if (VAR_13->bitmask & VAR_0 && VAR_13->dport[0] > VAR_13->dport[1])
  return 0;
 if (VAR_13->bitmask & VAR_3 && VAR_13->sport[0] > VAR_13->sport[1])
  return 0;
 return 1;
}
