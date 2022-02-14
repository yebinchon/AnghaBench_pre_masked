
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct fatEntry {int next; } ;
struct bootblock {size_t FATsecs; size_t bpbBytesPerSec; int ClustMask; scalar_t__ ValidFat; scalar_t__ NumClusters; int bpbFATs; size_t bpbResSectors; scalar_t__ NumFree; scalar_t__ bpbMedia; } ;
typedef size_t off_t ;
typedef scalar_t__ cl_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct bootblock*,scalar_t__,int**) ;
 int* FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int*) ;
 size_t FUNC_3 (int,size_t,int ) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int,int*,size_t) ;

int
FUNC_7(int VAR_5, struct bootblock *VAR_6, struct fatEntry *VAR_7, int VAR_8)
{
 u_char *VAR_9, *VAR_10;
 cl_t VAR_11;
 u_int VAR_12;
 size_t VAR_13;
 off_t VAR_14;
 int VAR_15 = VAR_3;

 VAR_13 = VAR_6->FATsecs * VAR_6->bpbBytesPerSec;
 VAR_9 = FUNC_1(VAR_6->FATsecs, VAR_6->bpbBytesPerSec);
 if (VAR_9 == ((void*)0)) {
  FUNC_5("No space for FAT sectors (%zu)",
      (size_t)VAR_6->FATsecs);
  return VAR_2;
 }
 VAR_6->NumFree = 0;
 VAR_10 = VAR_9;
 if (VAR_8) {
  *VAR_10++ = (u_char)VAR_6->bpbMedia;
  *VAR_10++ = 0xff;
  *VAR_10++ = 0xff;
  switch (VAR_6->ClustMask) {
  case 129:
   *VAR_10++ = 0xff;
   break;
  case 128:
   *VAR_10++ = 0x0f;
   *VAR_10++ = 0xff;
   *VAR_10++ = 0xff;
   *VAR_10++ = 0xff;
   *VAR_10++ = 0x0f;
   break;
  }
 } else {

  int VAR_16;
  u_char *VAR_17;

  switch (VAR_6->ClustMask) {
  case 128:
   VAR_16 = 8;
   break;
  case 129:
   VAR_16 = 4;
   break;
  default:
   VAR_16 = 3;
   break;
  }

  if (!FUNC_0(VAR_5, VAR_6, VAR_6->ValidFat >= 0 ? VAR_6->ValidFat :0,
      &VAR_17)) {
   FUNC_2(VAR_9);
   return VAR_2;
  }

  FUNC_4(VAR_10, VAR_17, VAR_16);
  FUNC_2(VAR_17);
  VAR_10 += VAR_16;
 }

 for (VAR_11 = VAR_0; VAR_11 < VAR_6->NumClusters; VAR_11++) {
  switch (VAR_6->ClustMask) {
  case 128:
   if (VAR_7[VAR_11].next == VAR_1)
    VAR_6->NumFree++;
   *VAR_10++ = (u_char)VAR_7[VAR_11].next;
   *VAR_10++ = (u_char)(VAR_7[VAR_11].next >> 8);
   *VAR_10++ = (u_char)(VAR_7[VAR_11].next >> 16);
   *VAR_10 &= 0xf0;
   *VAR_10++ |= (VAR_7[VAR_11].next >> 24)&0x0f;
   break;
  case 129:
   if (VAR_7[VAR_11].next == VAR_1)
    VAR_6->NumFree++;
   *VAR_10++ = (u_char)VAR_7[VAR_11].next;
   *VAR_10++ = (u_char)(VAR_7[VAR_11].next >> 8);
   break;
  default:
   if (VAR_7[VAR_11].next == VAR_1)
    VAR_6->NumFree++;
   *VAR_10++ = (u_char)VAR_7[VAR_11].next;
   *VAR_10 = (u_char)((VAR_7[VAR_11].next >> 8) & 0xf);
   VAR_11++;
   if (VAR_11 >= VAR_6->NumClusters)
    break;
   if (VAR_7[VAR_11].next == VAR_1)
    VAR_6->NumFree++;
   *VAR_10++ |= (u_char)(VAR_7[VAR_11].next << 4);
   *VAR_10++ = (u_char)(VAR_7[VAR_11].next >> 4);
   break;
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_6->bpbFATs; VAR_12++) {
  VAR_14 = VAR_6->bpbResSectors + VAR_12 * VAR_6->FATsecs;
  VAR_14 *= VAR_6->bpbBytesPerSec;
  if (FUNC_3(VAR_5, VAR_14, VAR_4) != VAR_14
      || (size_t)FUNC_6(VAR_5, VAR_9, VAR_13) != VAR_13) {
   FUNC_5("Unable to write FAT");
   VAR_15 = VAR_2;
  }
 }
 FUNC_2(VAR_9);
 return VAR_15;
}
