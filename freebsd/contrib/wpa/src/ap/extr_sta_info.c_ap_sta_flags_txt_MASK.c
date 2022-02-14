
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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
 int FUNC_0 (char*,size_t,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (size_t,int) ;

int FUNC_2(u32 VAR_18, char *VAR_19, size_t VAR_20)
{
 int VAR_21;

 VAR_19[0] = '\0';
 VAR_21 = FUNC_0(VAR_19, VAR_20, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
     (VAR_18 & VAR_1 ? "[AUTH]" : ""),
     (VAR_18 & VAR_0 ? "[ASSOC]" : ""),
     (VAR_18 & VAR_2 ? "[AUTHORIZED]" : ""),
     (VAR_18 & VAR_8 ? "[PENDING_POLL" :
      ""),
     (VAR_18 & VAR_10 ?
      "[SHORT_PREAMBLE]" : ""),
     (VAR_18 & VAR_9 ? "[PREAUTH]" : ""),
     (VAR_18 & VAR_14 ? "[WMM]" : ""),
     (VAR_18 & VAR_6 ? "[MFP]" : ""),
     (VAR_18 & VAR_16 ? "[WPS]" : ""),
     (VAR_18 & VAR_5 ? "[MAYBE_WPS]" : ""),
     (VAR_18 & VAR_13 ? "[WDS]" : ""),
     (VAR_18 & VAR_7 ? "[NonERP]" : ""),
     (VAR_18 & VAR_17 ? "[WPS2]" : ""),
     (VAR_18 & VAR_3 ? "[GAS]" : ""),
     (VAR_18 & VAR_4 ? "[HT]" : ""),
     (VAR_18 & VAR_12 ? "[VHT]" : ""),
     (VAR_18 & VAR_11 ? "[VENDOR_VHT]" : ""),
     (VAR_18 & VAR_15 ?
      "[WNM_SLEEP_MODE]" : ""));
 if (FUNC_1(VAR_20, VAR_21))
  VAR_21 = -1;

 return VAR_21;
}
