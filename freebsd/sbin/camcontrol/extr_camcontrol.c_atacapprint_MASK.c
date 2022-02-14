
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct TYPE_4__ {int extension; int command1; int command2; } ;
struct TYPE_3__ {int command2; int command1; int extension; } ;
struct ata_params {int config; int satacapabilities; char* model; char* revision; char* serial; int* wwn; char* product_id; char* media_serial; int cylinders; int heads; int sectors; int capabilities1; int mwdmamodes; int atavalid; int udmamodes; int media_rotation_rate; int support3; int satacapabilities2; int satasupport; int apm_value; int support2; int enabled2; int wrv_mode; int support_dsm; int max_dsm_blocks; int tcg; int multi; TYPE_2__ enabled; TYPE_1__ support; int acoustic; int queue; int version_major; scalar_t__ lba_size48_4; scalar_t__ lba_size48_3; scalar_t__ lba_size48_2; scalar_t__ lba_size48_1; scalar_t__ lba_size_2; scalar_t__ lba_size_1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;


 int VAR_48 ;
 scalar_t__ FUNC_3 (struct ata_params*) ;
 int FUNC_4 (struct ata_params*) ;
 int FUNC_5 (struct ata_params*) ;
 scalar_t__ FUNC_6 (struct ata_params*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ata_params*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(struct ata_params *VAR_49)
{
 const char *VAR_50;
 u_int32_t VAR_51 = (u_int32_t)VAR_49->lba_size_1 |
    ((u_int32_t)VAR_49->lba_size_2 << 16);

 u_int64_t VAR_52 = ((u_int64_t)VAR_49->lba_size48_1) |
    ((u_int64_t)VAR_49->lba_size48_2 << 16) |
    ((u_int64_t)VAR_49->lba_size48_3 << 32) |
    ((u_int64_t)VAR_49->lba_size48_4 << 48);

 FUNC_9("\n");
 FUNC_9("protocol              ");
 VAR_50 = (VAR_49->config == VAR_3) ? "CFA" :
  (VAR_49->config & VAR_2) ? "ATAPI" : "ATA";
 if (FUNC_7(VAR_49->version_major) == 0) {
  FUNC_9("%s", VAR_50);
 } else if (FUNC_7(VAR_49->version_major) <= 7) {
  FUNC_9("%s-%d", VAR_50,
      FUNC_7(VAR_49->version_major));
 } else if (FUNC_7(VAR_49->version_major) == 8) {
  FUNC_9("%s8-ACS", VAR_50);
 } else {
  FUNC_9("ACS-%d %s",
      FUNC_7(VAR_49->version_major) - 7, VAR_50);
 }
 if (VAR_49->satacapabilities && VAR_49->satacapabilities != 0xffff) {
  if (VAR_49->satacapabilities & VAR_6)
   FUNC_9(" SATA 3.x\n");
  else if (VAR_49->satacapabilities & VAR_5)
   FUNC_9(" SATA 2.x\n");
  else if (VAR_49->satacapabilities & VAR_4)
   FUNC_9(" SATA 1.x\n");
  else
   FUNC_9(" SATA\n");
 }
 else
  FUNC_9("\n");
 FUNC_9("device model          %.40s\n", VAR_49->model);
 FUNC_9("firmware revision     %.8s\n", VAR_49->revision);
 FUNC_9("serial number         %.20s\n", VAR_49->serial);
 if (VAR_49->enabled.extension & VAR_7) {
  FUNC_9("WWN                   %04x%04x%04x%04x\n",
      VAR_49->wwn[0], VAR_49->wwn[1], VAR_49->wwn[2], VAR_49->wwn[3]);
 }
 FUNC_9("additional product id %.8s\n", VAR_49->product_id);
 if (VAR_49->enabled.extension & VAR_26) {
  FUNC_9("media serial number   %.30s\n",
      VAR_49->media_serial);
 }

 FUNC_9("cylinders             %d\n", VAR_49->cylinders);
 FUNC_9("heads                 %d\n", VAR_49->heads);
 FUNC_9("sectors/track         %d\n", VAR_49->sectors);
 FUNC_9("sector size           logical %u, physical %lu, offset %lu\n",
     FUNC_4(VAR_49),
     (unsigned long)FUNC_6(VAR_49),
     (unsigned long)FUNC_3(VAR_49));

 if (VAR_49->config == VAR_3 ||
     (VAR_49->support.command2 & VAR_13))
  FUNC_9("CFA supported\n");

 FUNC_9("LBA%ssupported         ",
  VAR_49->capabilities1 & VAR_24 ? " " : " not ");
 if (VAR_51)
  FUNC_9("%d sectors\n", VAR_51);
 else
  FUNC_9("\n");

 FUNC_9("LBA48%ssupported       ",
  VAR_49->support.command2 & VAR_8 ? " " : " not ");
 if (VAR_52)
  FUNC_9("%ju sectors\n", (uintmax_t)VAR_52);
 else
  FUNC_9("\n");

 FUNC_9("PIO supported         PIO");
 switch (FUNC_5(VAR_49)) {
 case 130:
  FUNC_9("4");
  break;
 case 131:
  FUNC_9("3");
  break;
 case 132:
  FUNC_9("2");
  break;
 case 133:
  FUNC_9("1");
  break;
 default:
  FUNC_9("0");
 }
 if ((VAR_49->capabilities1 & VAR_23) == 0)
  FUNC_9(" w/o IORDY");
 FUNC_9("\n");

 FUNC_9("DMA%ssupported         ",
  VAR_49->capabilities1 & VAR_15 ? " " : " not ");
 if (VAR_49->capabilities1 & VAR_15) {
  if (VAR_49->mwdmamodes & 0xff) {
   FUNC_9("WDMA");
   if (VAR_49->mwdmamodes & 0x04)
    FUNC_9("2");
   else if (VAR_49->mwdmamodes & 0x02)
    FUNC_9("1");
   else if (VAR_49->mwdmamodes & 0x01)
    FUNC_9("0");
   FUNC_9(" ");
  }
  if ((VAR_49->atavalid & VAR_1) &&
      (VAR_49->udmamodes & 0xff)) {
   FUNC_9("UDMA");
   if (VAR_49->udmamodes & 0x40)
    FUNC_9("6");
   else if (VAR_49->udmamodes & 0x20)
    FUNC_9("5");
   else if (VAR_49->udmamodes & 0x10)
    FUNC_9("4");
   else if (VAR_49->udmamodes & 0x08)
    FUNC_9("3");
   else if (VAR_49->udmamodes & 0x04)
    FUNC_9("2");
   else if (VAR_49->udmamodes & 0x02)
    FUNC_9("1");
   else if (VAR_49->udmamodes & 0x01)
    FUNC_9("0");
   FUNC_9(" ");
  }
 }
 FUNC_9("\n");

 if (VAR_49->media_rotation_rate == 1) {
  FUNC_9("media RPM             non-rotating\n");
 } else if (VAR_49->media_rotation_rate >= 0x0401 &&
     VAR_49->media_rotation_rate <= 0xFFFE) {
  FUNC_9("media RPM             %d\n",
   VAR_49->media_rotation_rate);
 }

 FUNC_9("Zoned-Device Commands ");
 switch (VAR_49->support3 & VAR_48) {
  case 129:
   FUNC_9("device managed\n");
   break;
  case 128:
   FUNC_9("host aware\n");
   break;
  default:
   FUNC_9("no\n");
 }

 FUNC_9("\nFeature                      "
  "Support  Enabled   Value           Vendor\n");
 FUNC_9("read ahead                     %s	%s\n",
  VAR_49->support.command1 & VAR_25 ? "yes" : "no",
  VAR_49->enabled.command1 & VAR_25 ? "yes" : "no");
 FUNC_9("write cache                    %s	%s\n",
  VAR_49->support.command1 & VAR_46 ? "yes" : "no",
  VAR_49->enabled.command1 & VAR_46 ? "yes" : "no");
 FUNC_9("flush cache                    %s	%s\n",
  VAR_49->support.command2 & VAR_20 ? "yes" : "no",
  VAR_49->enabled.command2 & VAR_20 ? "yes" : "no");
 FUNC_9("Native Command Queuing (NCQ)   ");
 if (FUNC_8(VAR_49) && (VAR_49->satacapabilities & VAR_28)) {
  FUNC_9("yes		%d tags\n",
      FUNC_2(VAR_49->queue) + 1);
  FUNC_9("NCQ Priority Information       %s\n",
      VAR_49->satacapabilities & VAR_31 ?
      "yes" : "no");
  FUNC_9("NCQ Non-Data Command           %s\n",
      VAR_49->satacapabilities2 & VAR_30 ?
      "yes" : "no");
  FUNC_9("NCQ Streaming                  %s\n",
      VAR_49->satacapabilities2 & VAR_32 ?
      "yes" : "no");
  FUNC_9("Receive & Send FPDMA Queued    %s\n",
      VAR_49->satacapabilities2 & VAR_36 ?
      "yes" : "no");
  FUNC_9("NCQ Autosense                  %s\n",
      VAR_49->satasupport & VAR_29 ?
      "yes" : "no");
 } else
  FUNC_9("no\n");

 FUNC_9("SMART                          %s	%s\n",
  VAR_49->support.command1 & VAR_42 ? "yes" : "no",
  VAR_49->enabled.command1 & VAR_42 ? "yes" : "no");
 FUNC_9("security                       %s	%s\n",
  VAR_49->support.command1 & VAR_40 ? "yes" : "no",
  VAR_49->enabled.command1 & VAR_40 ? "yes" : "no");
 FUNC_9("power management               %s	%s\n",
  VAR_49->support.command1 & VAR_35 ? "yes" : "no",
  VAR_49->enabled.command1 & VAR_35 ? "yes" : "no");
 FUNC_9("microcode download             %s	%s\n",
  VAR_49->support.command2 & VAR_27 ? "yes" : "no",
  VAR_49->enabled.command2 & VAR_27 ? "yes" : "no");
 FUNC_9("advanced power management      %s	%s",
  VAR_49->support.command2 & VAR_10 ? "yes" : "no",
  VAR_49->enabled.command2 & VAR_10 ? "yes" : "no");
  if (VAR_49->support.command2 & VAR_10) {
   FUNC_9("	%d/0x%02X\n",
       VAR_49->apm_value & 0xff, VAR_49->apm_value & 0xff);
  } else
   FUNC_9("\n");
 FUNC_9("automatic acoustic management  %s	%s",
  VAR_49->support.command2 & VAR_11 ? "yes" :"no",
  VAR_49->enabled.command2 & VAR_11 ? "yes" :"no");
  if (VAR_49->support.command2 & VAR_11) {
   FUNC_9("	%d/0x%02X	%d/0x%02X\n",
       FUNC_0(VAR_49->acoustic),
       FUNC_0(VAR_49->acoustic),
       FUNC_1(VAR_49->acoustic),
       FUNC_1(VAR_49->acoustic));
  } else
   FUNC_9("\n");
 FUNC_9("media status notification      %s	%s\n",
  VAR_49->support.command2 & VAR_33 ? "yes" : "no",
  VAR_49->enabled.command2 & VAR_33 ? "yes" : "no");
 FUNC_9("power-up in Standby            %s	%s\n",
  VAR_49->support.command2 & VAR_43 ? "yes" : "no",
  VAR_49->enabled.command2 & VAR_43 ? "yes" : "no");
 FUNC_9("write-read-verify              %s	%s",
  VAR_49->support2 & VAR_47 ? "yes" : "no",
  VAR_49->enabled2 & VAR_47 ? "yes" : "no");
  if (VAR_49->support2 & VAR_47) {
   FUNC_9("	%d/0x%x\n",
       VAR_49->wrv_mode, VAR_49->wrv_mode);
  } else
   FUNC_9("\n");
 FUNC_9("unload                         %s	%s\n",
  VAR_49->support.extension & VAR_45 ? "yes" : "no",
  VAR_49->enabled.extension & VAR_45 ? "yes" : "no");
 FUNC_9("general purpose logging        %s	%s\n",
  VAR_49->support.extension & VAR_22 ? "yes" : "no",
  VAR_49->enabled.extension & VAR_22 ? "yes" : "no");
 FUNC_9("free-fall                      %s	%s\n",
  VAR_49->support2 & VAR_21 ? "yes" : "no",
  VAR_49->enabled2 & VAR_21 ? "yes" : "no");
 FUNC_9("sense data reporting           %s	%s\n",
  VAR_49->support2 & VAR_41 ? "yes" : "no",
  VAR_49->enabled2 & VAR_41 ? "yes" : "no");
 FUNC_9("extended power conditions      %s	%s\n",
  VAR_49->support2 & VAR_19 ? "yes" : "no",
  VAR_49->enabled2 & VAR_19 ? "yes" : "no");
 FUNC_9("device statistics notification %s	%s\n",
  VAR_49->support2 & VAR_18 ? "yes" : "no",
  VAR_49->enabled2 & VAR_18 ? "yes" : "no");
 FUNC_9("Data Set Management (DSM/TRIM) ");
 if (VAR_49->support_dsm & VAR_17) {
  FUNC_9("yes\n");
  FUNC_9("DSM - max 512byte blocks       ");
  if (VAR_49->max_dsm_blocks == 0x00)
   FUNC_9("yes              not specified\n");
  else
   FUNC_9("yes              %d\n",
    VAR_49->max_dsm_blocks);

  FUNC_9("DSM - deterministic read       ");
  if (VAR_49->support3 & VAR_16) {
   if (VAR_49->support3 & VAR_37)
    FUNC_9("yes              zeroed\n");
   else
    FUNC_9("yes              any value\n");
  } else {
   FUNC_9("no\n");
  }
 } else {
  FUNC_9("no\n");
 }
 FUNC_9("Trusted Computing              %s\n",
     ((VAR_49->tcg & 0xc000) == 0x4000) && (VAR_49->tcg & VAR_44) ?
     "yes" : "no");
 FUNC_9("encrypts all user data         %s\n",
  VAR_49->support3 & VAR_0 ? "yes" : "no");
 FUNC_9("Sanitize                       ");
 if (VAR_49->multi & VAR_38) {
  FUNC_9("yes\t\t%s%s%s\n",
      VAR_49->multi & VAR_12 ? "block, " : "",
      VAR_49->multi & VAR_34 ? "overwrite, " : "",
      VAR_49->multi & VAR_14 ? "crypto" : "");
  FUNC_9("Sanitize - commands allowed    %s\n",
      VAR_49->multi & VAR_39 ? "yes" : "no");
  FUNC_9("Sanitize - antifreeze lock     %s\n",
      VAR_49->multi & VAR_9 ? "yes" : "no");
 } else {
  FUNC_9("no\n");
 }
}
