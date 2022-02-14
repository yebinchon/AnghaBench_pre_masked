
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;

void FUNC_1(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 unsigned VAR_4 = *(unsigned *)VAR_2;
 char *VAR_5 = VAR_0;

 VAR_5 += FUNC_0(VAR_5, "0x%x\n", VAR_4);
 if (VAR_4 & (1 << 1))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSM\n");
 if (VAR_4 & (1 << 2))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsNoticeSupported\n");
 if (VAR_4 & (1 << 3))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsTrapSupported\n");
 if (VAR_4 & (1 << 4))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsOptionalIPDSupported\n");
 if (VAR_4 & (1 << 5))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsAutomaticMigrationSupported\n");
 if (VAR_4 & (1 << 6))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSLMappingSupported\n");
 if (VAR_4 & (1 << 7))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsMKeyNVRAM\n");
 if (VAR_4 & (1 << 8))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsPKeyNVRAM\n");
 if (VAR_4 & (1 << 9))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsLedInfoSupported\n");
 if (VAR_4 & (1 << 10))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSMdisabled\n");
 if (VAR_4 & (1 << 11))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSystemImageGUIDsupported\n");
 if (VAR_4 & (1 << 12))
  VAR_5 += FUNC_0(VAR_5,
        "\t\t\t\tIsPkeySwitchExternalPortTrapSupported\n");
 if (VAR_4 & (1 << 14))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsExtendedSpeedsSupported\n");
 if (VAR_4 & (1 << 15))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsCapabilityMask2Supported\n");
 if (VAR_4 & (1 << 16))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsCommunicatonManagementSupported\n");
 if (VAR_4 & (1 << 17))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSNMPTunnelingSupported\n");
 if (VAR_4 & (1 << 18))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsReinitSupported\n");
 if (VAR_4 & (1 << 19))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsDeviceManagementSupported\n");
 if (VAR_4 & (1 << 20))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsVendorClassSupported\n");
 if (VAR_4 & (1 << 21))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsDRNoticeSupported\n");
 if (VAR_4 & (1 << 22))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsCapabilityMaskNoticeSupported\n");
 if (VAR_4 & (1 << 23))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsBootManagementSupported\n");
 if (VAR_4 & (1 << 24))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsLinkRoundTripLatencySupported\n");
 if (VAR_4 & (1 << 25))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsClientRegistrationSupported\n");
 if (VAR_4 & (1 << 26))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsOtherLocalChangesNoticeSupported\n");
 if (VAR_4 & (1 << 27))
  VAR_5 += FUNC_0(VAR_5,
        "\t\t\t\tIsLinkSpeedWidthPairsTableSupported\n");
 if (VAR_4 & (1 << 28))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsVendorSpecificMadsTableSupported\n");
 if (VAR_4 & (1 << 29))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsMcastPkeyTrapSuppressionSupported\n");
 if (VAR_4 & (1 << 30))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsMulticastFDBTopSupported\n");
 if (VAR_4 & (1 << 31))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsHierarchyInfoSupported\n");

 if (VAR_5 != VAR_0)
  *(--VAR_5) = 0;
}
