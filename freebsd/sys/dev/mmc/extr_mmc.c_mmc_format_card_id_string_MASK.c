
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int oid; int psn; int pnm; int prv; int mdt_month; int mdt_year; char* mid; } ;
struct mmc_ivars {scalar_t__ mode; TYPE_1__ cid; scalar_t__ high_cap; int card_id_string; int card_sn_string; } ;
typedef int oidstr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct mmc_ivars *VAR_1)
{
 char VAR_2[8];
 uint8_t VAR_3;
 uint8_t VAR_4;
 VAR_3 = (VAR_1->cid.oid >> 8) & 0x0ff;
 VAR_4 = VAR_1->cid.oid & 0x0ff;
 if (VAR_3 > 0x1f && VAR_3 < 0x7f && VAR_4 > 0x1f && VAR_4 < 0x7f)
  FUNC_0(VAR_2, sizeof(VAR_2), "%c%c", VAR_3, VAR_4);
 else
  FUNC_0(VAR_2, sizeof(VAR_2), "0x%04x", VAR_1->cid.oid);
 FUNC_0(VAR_1->card_sn_string, sizeof(VAR_1->card_sn_string),
     "%08X", VAR_1->cid.psn);
 FUNC_0(VAR_1->card_id_string, sizeof(VAR_1->card_id_string),
     "%s%s %s %d.%d SN %08X MFG %02d/%04d by %d %s",
     VAR_1->mode == VAR_0 ? "SD" : "MMC", VAR_1->high_cap ? "HC" : "",
     VAR_1->cid.pnm, VAR_1->cid.prv >> 4, VAR_1->cid.prv & 0x0f,
     VAR_1->cid.psn, VAR_1->cid.mdt_month, VAR_1->cid.mdt_year,
     VAR_1->cid.mid, VAR_2);
}
