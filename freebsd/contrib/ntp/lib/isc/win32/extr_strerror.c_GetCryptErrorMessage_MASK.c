
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(int VAR_0) {
 char *VAR_1;

 switch (VAR_0) {

 case 142:
  VAR_1 = "The dwFlags parameter has an illegal value.";
  break;
 case 141:
  VAR_1 = "The Registry entry for the key container "
   "could not be opened and may not exist.";
  break;
 case 140:
  VAR_1 = "The pszContainer or pszProvider parameter "
   "is set to an illegal value.";
  break;
 case 139:
  VAR_1 = "The value of the dwProvType parameter is out "
   "of range. All provider types must be from "
   "1 to 999, inclusive.";
  break;
 case 138:
  VAR_1 = "The provider DLL signature did not verify "
   "correctly. Either the DLL or the digital "
   "signature has been tampered with.";
  break;
 case 137:
  VAR_1 = "The dwFlags parameter is CRYPT_NEWKEYSET, but the key"
        " container already exists.";
  break;
 case 136:
  VAR_1 = "The Registry entry for the pszContainer key container "
        "was found (in the HKEY_CURRENT_USER window), but is "
        "corrupt. See the section System Administration for "
        " etails about CryptoAPI's Registry usage.";
  break;
 case 135:
  VAR_1 = "No Registry entry exists in the HKEY_CURRENT_USER "
   "window for the key container specified by "
   "pszContainer.";
  break;
 case 134:
  VAR_1 = "The CSP ran out of memory during the operation.";
  break;
 case 132:
  VAR_1 = "The provider DLL file does not exist or is not on the "
        "current path.";
  break;
 case 131:
  VAR_1 = "The Registry entry for the provider type specified by "
        "dwProvType is corrupt. This error may relate to "
        "either the user default CSP list or the machine "
        "default CSP list. See the section System "
        "Administration for details about CryptoAPI's "
        "Registry usage.";
  break;
 case 129:
  VAR_1 = "The provider type specified by dwProvType does not "
        "match the provider type found in the Registry. Note "
        "that this error can only occur when pszProvider "
        "specifies an actual CSP name.";
  break;
 case 130:
  VAR_1 = "No Registry entry exists for the provider type "
        "specified by dwProvType.";
  break;
 case 133:
  VAR_1 = "The provider DLL file could not be loaded, and "
        "may not exist. If it exists, then the file is "
        "not a valid DLL.";
  break;
 case 128:
  VAR_1 = "An error occurred while loading the DLL file image, "
        "prior to verifying its signature.";
  break;

 default:
  VAR_1 = ((void*)0);
  break;
 }
 return VAR_1;
}
