
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct xt_mtchk_param {struct ebt_entry* entryinfo; struct ebt_stp_info* matchinfo; } ;
struct ebt_stp_info {int bitmask; int invflags; } ;
struct ebt_entry {int bitmask; int destmsk; int destmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_2)
{
 const struct ebt_stp_info *VAR_3 = VAR_2->matchinfo;
 const uint8_t VAR_4[6] = {0x01, 0x80, 0xc2, 0x00, 0x00, 0x00};
 const uint8_t VAR_5[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
 const struct ebt_entry *VAR_6 = VAR_2->entryinfo;

 if (VAR_3->bitmask & ~VAR_1 || VAR_3->invflags & ~VAR_1 ||
     !(VAR_3->bitmask & VAR_1))
  return 0;

 if (FUNC_0(VAR_6->destmac, VAR_4) ||
     FUNC_0(VAR_6->destmsk, VAR_5) || !(VAR_6->bitmask & VAR_0))
  return 0;

 return 1;
}
