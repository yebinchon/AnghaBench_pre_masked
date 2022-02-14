
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_FM_MACSEC_SetException; int f_FM_MACSEC_Disable; int f_FM_MACSEC_Enable; int f_FM_MACSEC_GetRevision; int f_FM_MACSEC_ConfigException; int f_FM_MACSEC_ConfigSectagWithoutSCI; int f_FM_MACSEC_ConfigKeysUnreadable; int f_FM_MACSEC_ConfigPnExhaustionThreshold; int f_FM_MACSEC_ConfigOnlyScbIsSetFrameTreatment; int f_FM_MACSEC_ConfigChangedTextWithNoEncryptFrameTreatment; int f_FM_MACSEC_ConfigUntagFrameTreatment; int f_FM_MACSEC_ConfigEncryptWithNoChangedTextFrameTreatment; int f_FM_MACSEC_ConfigInvalidTagsFrameTreatment; int f_FM_MACSEC_ConfigUnknownSciFrameTreatment; int f_FM_MACSEC_Free; int f_FM_MACSEC_Init; } ;
typedef TYPE_1__ t_FmMacsecControllerDriver ;


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

__attribute__((used)) static void FUNC_0(t_FmMacsecControllerDriver *VAR_16)
{
    VAR_16->f_FM_MACSEC_Init = VAR_14;
    VAR_16->f_FM_MACSEC_Free = VAR_12;
    VAR_16->f_FM_MACSEC_ConfigUnknownSciFrameTreatment = VAR_8;
    VAR_16->f_FM_MACSEC_ConfigInvalidTagsFrameTreatment = VAR_3;
    VAR_16->f_FM_MACSEC_ConfigEncryptWithNoChangedTextFrameTreatment = VAR_1;
    VAR_16->f_FM_MACSEC_ConfigUntagFrameTreatment = VAR_9;
    VAR_16->f_FM_MACSEC_ConfigChangedTextWithNoEncryptFrameTreatment = VAR_0;
    VAR_16->f_FM_MACSEC_ConfigOnlyScbIsSetFrameTreatment = VAR_5;
    VAR_16->f_FM_MACSEC_ConfigPnExhaustionThreshold = VAR_6;
    VAR_16->f_FM_MACSEC_ConfigKeysUnreadable = VAR_4;
    VAR_16->f_FM_MACSEC_ConfigSectagWithoutSCI = VAR_7;
    VAR_16->f_FM_MACSEC_ConfigException = VAR_2;
    VAR_16->f_FM_MACSEC_GetRevision = VAR_13;
    VAR_16->f_FM_MACSEC_Enable = VAR_11;
    VAR_16->f_FM_MACSEC_Disable = VAR_10;
    VAR_16->f_FM_MACSEC_SetException = VAR_15;
}
