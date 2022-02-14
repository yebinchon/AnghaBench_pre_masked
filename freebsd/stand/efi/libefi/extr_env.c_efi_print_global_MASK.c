
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int UINTN ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef char EFI_DEVICE_PATH ;
typedef scalar_t__ CHAR16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (scalar_t__ const*,char**) ;

__attribute__((used)) static int
FUNC_11(const CHAR16 *VAR_3, uint8_t *VAR_4, UINTN VAR_5)
{
 int VAR_6 = -1;
 char *VAR_7 = ((void*)0);

 if (FUNC_10(VAR_3, &VAR_7) != 0)
  return (VAR_0);

 if (FUNC_8("AuditMode", VAR_7) == 0) {
  FUNC_7(" = ");
  FUNC_7("0x%x", *VAR_4);
  goto done;
 }

 if (FUNC_8("BootOptionSupport", VAR_7) == 0) {
  FUNC_7(" = ");
  FUNC_7("0x%x", *((uint32_t *)VAR_4));
  goto done;
 }

 if (FUNC_8("BootCurrent", VAR_7) == 0 ||
     FUNC_8("BootNext", VAR_7) == 0 ||
     FUNC_8("Timeout", VAR_7) == 0) {
  FUNC_7(" = ");
  FUNC_7("%u", *((uint16_t *)VAR_4));
  goto done;
 }

 if (FUNC_8("BootOrder", VAR_7) == 0 ||
     FUNC_8("DriverOrder", VAR_7) == 0) {
  UINTN VAR_8;
  UINT16 *VAR_9 = (UINT16 *)VAR_4;

  FUNC_7(" =");
  for (VAR_8 = 0; VAR_8 < VAR_5 / sizeof (UINT16); VAR_8++)
   FUNC_7(" %u", VAR_9[VAR_8]);
  goto done;
 }
 if (FUNC_9("Boot", VAR_7, 4) == 0 ||
     FUNC_9("Driver", VAR_7, 5) == 0 ||
     FUNC_9("SysPrep", VAR_7, 7) == 0 ||
     FUNC_9("OsRecovery", VAR_7, 10) == 0) {
  UINT16 VAR_10;
  CHAR16 *VAR_11;
  int VAR_12;
  EFI_DEVICE_PATH *VAR_13;

  VAR_4 += sizeof(UINT32);
  VAR_10 = *(uint16_t *)VAR_4;
  VAR_4 += sizeof (UINT16);
  VAR_11 = (CHAR16 *)VAR_4;

  for (VAR_12 = 0; VAR_11[VAR_12] != 0; VAR_12++)
   ;
  if (VAR_12 != 0) {

   VAR_12 = (VAR_12 + 1) * 2;
  }

  FUNC_7(" = ");
  FUNC_7("%S", VAR_11);
  if (VAR_10 != 0) {

   if (FUNC_6("\n")) {
    VAR_6 = VAR_2;
    goto done;
   }
   VAR_13 = FUNC_4(VAR_10);
   if (VAR_13 == ((void*)0))
    goto done;

   FUNC_5(VAR_13, VAR_4 + VAR_12, VAR_10);
   VAR_11 = FUNC_0(VAR_13);
   if (VAR_11 != ((void*)0)) {
    FUNC_7("\t%S", VAR_11);
    FUNC_1(VAR_11);
   }
   FUNC_3(VAR_13);
  }
  goto done;
 }

 if (FUNC_8("ConIn", VAR_7) == 0 ||
     FUNC_8("ConInDev", VAR_7) == 0 ||
     FUNC_8("ConOut", VAR_7) == 0 ||
     FUNC_8("ConOutDev", VAR_7) == 0 ||
     FUNC_8("ErrOut", VAR_7) == 0 ||
     FUNC_8("ErrOutDev", VAR_7) == 0) {
  CHAR16 *VAR_14;

  FUNC_7(" = ");
  VAR_14 = FUNC_0((EFI_DEVICE_PATH *)VAR_4);
  if (VAR_14 != ((void*)0)) {
   FUNC_7("%S", VAR_14);
   FUNC_1(VAR_14);
  }
  goto done;
 }

 if (FUNC_8("PlatformLang", VAR_7) == 0 ||
     FUNC_8("PlatformLangCodes", VAR_7) == 0 ||
     FUNC_8("LangCodes", VAR_7) == 0 ||
     FUNC_8("Lang", VAR_7) == 0) {
  FUNC_7(" = ");
  FUNC_7("%s", VAR_4);
  goto done;
 }





 if (FUNC_8("OsIndicationsSupported", VAR_7) == 0) {
  FUNC_7(" = ");
  if (VAR_5 == 4)
   FUNC_7("0x%x", *((uint32_t *)VAR_4));
  else
   FUNC_7("0x%jx", *((uint64_t *)VAR_4));
  goto done;
 }


 VAR_6 = FUNC_2(VAR_4, VAR_5);
done:
 if (VAR_6 == -1) {
  if (FUNC_6("\n"))
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_1;
 }
 FUNC_3(VAR_7);
 return (VAR_6);
}
