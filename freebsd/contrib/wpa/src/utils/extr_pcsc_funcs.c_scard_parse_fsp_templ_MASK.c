
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,char*,unsigned char*,unsigned char) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_4, size_t VAR_5,
     int *VAR_6, int *VAR_7)
{
 unsigned char *VAR_8, *VAR_9;

 if (VAR_6)
  *VAR_6 = -1;
 if (VAR_7)
  *VAR_7 = -1;

 VAR_8 = VAR_4;
 VAR_9 = VAR_8 + VAR_5;
 if (*VAR_8 != VAR_2) {
  FUNC_2(VAR_0, "SCARD: file header did not "
      "start with FSP template tag");
  return -1;
 }
 VAR_8++;
 if (VAR_8 >= VAR_9)
  return -1;
 if (VAR_8[0] < VAR_9 - VAR_8)
  VAR_9 = VAR_8 + 1 + VAR_8[0];
 VAR_8++;
 FUNC_1(VAR_0, "SCARD: file header FSP template",
      VAR_8, VAR_9 - VAR_8);

 while (VAR_9 - VAR_8 >= 2) {
  unsigned char VAR_10, VAR_11;

  VAR_10 = VAR_8[0];
  VAR_11 = VAR_8[1];
  FUNC_2(VAR_1, "SCARD: file header TLV 0x%02x len=%d",
      VAR_10, VAR_11);
  VAR_8 += 2;

  if (VAR_11 > (unsigned int) (VAR_9 - VAR_8))
   break;

  switch (VAR_10) {
  case 138:
   FUNC_1(VAR_1, "SCARD: File Descriptor TLV",
        VAR_8, VAR_11);
   break;
  case 137:
   FUNC_1(VAR_1, "SCARD: File Identifier TLV",
        VAR_8, VAR_11);
   break;
  case 139:
   FUNC_1(VAR_1, "SCARD: DF name (AID) TLV",
        VAR_8, VAR_11);
   break;
  case 133:
   FUNC_1(VAR_1, "SCARD: Proprietary "
        "information TLV", VAR_8, VAR_11);
   break;
  case 135:
   FUNC_1(VAR_1, "SCARD: Life Cycle Status "
        "Integer TLV", VAR_8, VAR_11);
   break;
  case 136:
   FUNC_1(VAR_1, "SCARD: File size TLV",
        VAR_8, VAR_11);
   if ((VAR_11 == 1 || VAR_11 == 2) && VAR_7) {
    if (VAR_11 == 1)
     *VAR_7 = (int) VAR_8[0];
    else
     *VAR_7 = FUNC_0(VAR_8);
    FUNC_2(VAR_0, "SCARD: file_size=%d",
        *VAR_7);
   }
   break;
  case 128:
   FUNC_1(VAR_1, "SCARD: Total file size TLV",
        VAR_8, VAR_11);
   break;
  case 134:
   FUNC_1(VAR_1, "SCARD: PIN Status Template "
        "DO TLV", VAR_8, VAR_11);
   if (VAR_11 >= 2 && VAR_8[0] == VAR_3 &&
       VAR_8[1] >= 1 && VAR_6) {
    FUNC_2(VAR_0, "SCARD: PS_DO=0x%02x",
        VAR_8[2]);
    *VAR_6 = (int) VAR_8[2];
   }
   break;
  case 129:
   FUNC_1(VAR_1, "SCARD: Short File "
        "Identifier (SFI) TLV", VAR_8, VAR_11);
   break;
  case 132:
  case 131:
  case 130:
   FUNC_1(VAR_1, "SCARD: Security attribute "
        "TLV", VAR_8, VAR_11);
   break;
  default:
   FUNC_1(VAR_1, "SCARD: Unrecognized TLV",
        VAR_8, VAR_11);
   break;
  }

  VAR_8 += VAR_11;

  if (VAR_8 == VAR_9)
   return 0;
 }
 return -1;
}
