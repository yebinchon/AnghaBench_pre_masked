
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_entry* entryinfo; struct ebt_vlan_info* matchinfo; } ;
struct ebt_vlan_info {int bitmask; int invflags; unsigned short id; unsigned short prio; scalar_t__ encap; } ;
struct ebt_entry {scalar_t__ ethproto; } ;


 int FUNC_0 (char*,unsigned short,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned short VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned short FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(const struct xt_mtchk_param *VAR_7)
{
 struct ebt_vlan_info *VAR_8 = VAR_7->matchinfo;
 const struct ebt_entry *VAR_9 = VAR_7->entryinfo;


 if (VAR_9->ethproto != FUNC_2(VAR_4)) {
  FUNC_0
      ("passed entry proto %2.4X is not 802.1Q (8100)\n",
       (unsigned short) FUNC_3(VAR_9->ethproto));
  return 0;
 }



 if (VAR_8->bitmask & ~VAR_2) {
  FUNC_0("bitmask %2X is out of mask (%2X)\n",
     VAR_8->bitmask, VAR_2);
  return 0;
 }


 if (VAR_8->invflags & ~VAR_2) {
  FUNC_0("inversion flags %2X is out of mask (%2X)\n",
     VAR_8->invflags, VAR_2);
  return 0;
 }







 if (FUNC_1(VAR_1)) {
  if (!!VAR_8->id) {
   if (VAR_8->id > VAR_6) {
    FUNC_0
        ("id %d is out of range (1-4096)\n",
         VAR_8->id);
    return 0;
   }




   VAR_8->bitmask &= ~VAR_3;
  }

 }

 if (FUNC_1(VAR_3)) {
  if ((unsigned char) VAR_8->prio > 7) {
   FUNC_0("prio %d is out of range (0-7)\n",
        VAR_8->prio);
   return 0;
  }
 }



 if (FUNC_1(VAR_0)) {
  if ((unsigned short) FUNC_3(VAR_8->encap) < VAR_5) {
   FUNC_0
       ("encap frame length %d is less than minimal\n",
        FUNC_3(VAR_8->encap));
   return 0;
  }
 }

 return 1;
}
