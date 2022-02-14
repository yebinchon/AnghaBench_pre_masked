
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_namespace_data {int nsfeat; int flbas; int nlbaf; int dpc; int dps; int nmic; int rescap; int fpi; int dlfeat; int noiob; int npwg; int npwa; int npdg; int npda; int nows; int* nguid; int* eui64; int* lbaf; int nvmcap; scalar_t__ nuse; scalar_t__ ncap; scalar_t__ nsze; } ;
typedef int cbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*,int) ;

void
FUNC_3(struct nvme_namespace_data *VAR_57)
{
 char VAR_58[VAR_56 + 1];
 uint32_t VAR_59;
 uint32_t VAR_60, VAR_61, VAR_62, VAR_63;
 uint8_t VAR_64, VAR_65;
 uint8_t VAR_66, VAR_67;

 VAR_64 = (VAR_57->nsfeat >> VAR_39) &
  VAR_38;

 VAR_66 = (VAR_57->flbas >> VAR_23) &
  VAR_22;

 FUNC_0("Size:                        %lld blocks\n",
     (long long)VAR_57->nsze);
 FUNC_0("Capacity:                    %lld blocks\n",
     (long long)VAR_57->ncap);
 FUNC_0("Utilization:                 %lld blocks\n",
     (long long)VAR_57->nuse);
 FUNC_0("Thin Provisioning:           %s\n",
  VAR_64 ? "Supported" : "Not Supported");
 FUNC_0("Number of LBA Formats:       %d\n", VAR_57->nlbaf+1);
 FUNC_0("Current LBA Format:          LBA Format #%02d\n", VAR_66);
 FUNC_0("Data Protection Caps:        %s%s%s%s%s%s\n",
     (VAR_57->dpc == 0) ? "Not Supported" : "",
     ((VAR_57->dpc >> VAR_10) &
      VAR_9) ? "Last Bytes, " : "",
     ((VAR_57->dpc >> VAR_12) &
      VAR_11) ? "First Bytes, " : "",
     ((VAR_57->dpc >> VAR_17) &
      VAR_16) ? "Type 3, " : "",
     ((VAR_57->dpc >> VAR_15) &
      VAR_14) ? "Type 2, " : "",
     ((VAR_57->dpc >> VAR_14) &
      VAR_13) ? "Type 1" : "");
 FUNC_0("Data Protection Settings:    ");
 VAR_65 = (VAR_57->dps >> VAR_21) &
     VAR_20;
 if (VAR_65) {
  FUNC_0("Type %d, %s Bytes\n", VAR_65,
      ((VAR_57->dps >> VAR_19) &
       VAR_18) ? "First" : "Last");
 } else {
  FUNC_0("Not Enabled\n");
 }
 FUNC_0("Multi-Path I/O Capabilities: %s%s\n",
     (VAR_57->nmic == 0) ? "Not Supported" : "",
     ((VAR_57->nmic >> VAR_35) &
      VAR_34) ? "May be shared" : "");
 FUNC_0("Reservation Capabilities:    %s%s%s%s%s%s%s%s%s\n",
     (VAR_57->rescap == 0) ? "Not Supported" : "",
     ((VAR_57->rescap >> VAR_47) &
      VAR_46) ? "IEKEY13, " : "",
     ((VAR_57->rescap >> VAR_41) &
      VAR_40) ? "EX_AC_AR, " : "",
     ((VAR_57->rescap >> VAR_51) &
      VAR_50) ? "WR_EX_AR, " : "",
     ((VAR_57->rescap >> VAR_44) &
      VAR_43) ? "EX_AC_RO, " : "",
     ((VAR_57->rescap >> VAR_54) &
      VAR_53) ? "WR_EX_RO, " : "",
     ((VAR_57->rescap >> VAR_45) &
      VAR_42) ? "EX_AC, " : "",
     ((VAR_57->rescap >> VAR_55) &
      VAR_52) ? "WR_EX, " : "",
     ((VAR_57->rescap >> VAR_49) &
      VAR_48) ? "PTPL" : "");
 FUNC_0("Format Progress Indicator:   ");
 if ((VAR_57->fpi >> VAR_27) &
     VAR_26) {
  FUNC_0("%u%% remains\n",
      (VAR_57->fpi >> VAR_25) &
      VAR_24);
 } else
  FUNC_0("Not Supported\n");
 VAR_67 = (VAR_57->dlfeat >> VAR_8) &
     VAR_6;
 FUNC_0("Deallocate Logical Block:    Read %s%s%s\n",
     (VAR_67 == VAR_7) ? "Not Reported" :
     (VAR_67 == VAR_4) ? "00h" :
     (VAR_67 == VAR_5) ? "FFh" : "Unknown",
     (VAR_57->dlfeat >> VAR_1) &
      VAR_0 ? ", Write Zero" : "",
     (VAR_57->dlfeat >> VAR_3) &
      VAR_2 ? ", Guard CRC" : "");
 FUNC_0("Optimal I/O Boundary:        %u blocks\n", VAR_57->noiob);
 FUNC_0("NVM Capacity:                %s bytes\n",
    FUNC_2(FUNC_1(VAR_57->nvmcap), VAR_58, sizeof(VAR_58)));
 if ((VAR_57->nsfeat >> VAR_37) &
     VAR_36) {
  FUNC_0("Preferred Write Granularity: %u blocks",
      VAR_57->npwg + 1);
  FUNC_0("Preferred Write Alignment:   %u blocks",
      VAR_57->npwa + 1);
  FUNC_0("Preferred Deallocate Granul: %u blocks",
      VAR_57->npdg + 1);
  FUNC_0("Preferred Deallocate Align:  %u blocks",
      VAR_57->npda + 1);
  FUNC_0("Optimal Write Size:          %u blocks",
      VAR_57->nows + 1);
 }
 FUNC_0("Globally Unique Identifier:  ");
 for (VAR_59 = 0; VAR_59 < sizeof(VAR_57->nguid); VAR_59++)
  FUNC_0("%02x", VAR_57->nguid[VAR_59]);
 FUNC_0("\n");
 FUNC_0("IEEE EUI64:                  ");
 for (VAR_59 = 0; VAR_59 < sizeof(VAR_57->eui64); VAR_59++)
  FUNC_0("%02x", VAR_57->eui64[VAR_59]);
 FUNC_0("\n");
 for (VAR_59 = 0; VAR_59 <= VAR_57->nlbaf; VAR_59++) {
  VAR_60 = VAR_57->lbaf[VAR_59];
  VAR_61 = (VAR_60 >> VAR_29) &
   VAR_28;
  VAR_62 = (VAR_60 >> VAR_31) &
   VAR_30;
  VAR_63 = (VAR_60 >> VAR_33) &
   VAR_32;
  FUNC_0("LBA Format #%02d: Data Size: %5d  Metadata Size: %5d"
      "  Performance: %s\n",
      VAR_59, 1 << VAR_61, VAR_62, (VAR_63 == 0) ? "Best" :
      (VAR_63 == 1) ? "Better" : (VAR_63 == 2) ? "Good" : "Degraded");
 }
}
