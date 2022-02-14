
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bootblock {int ValidFat; int bpbBytesPerSec; int bpbSecPerClust; int bpbResSectors; int bpbFATs; int bpbRootDirEnts; int flags; int bpbSectors; int bpbMedia; int bpbFATsmall; int SecPerTrack; int bpbHeads; int bpbHiddenSecs; int bpbHugeSectors; int NumSectors; int FATsecs; int bpbRootClust; int bpbFSInfo; int bpbBackup; int FSFree; int FSNext; int FirstCluster; int NumClusters; int ClustMask; int NumFatEntries; int ClusterSize; int NumFiles; scalar_t__ NumFree; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 (int*,char*,int) ;
 int FUNC_3 (int*,char*,int) ;
 int FUNC_4 (struct bootblock*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int*,int) ;
 int FUNC_10 (int,int*,int) ;

int
FUNC_11(int VAR_11, struct bootblock *VAR_12)
{
 u_char VAR_13[VAR_3];
 u_char VAR_14[2 * VAR_3];
 int VAR_15 = VAR_8;

 if ((size_t)FUNC_9(VAR_11, VAR_13, sizeof VAR_13) != sizeof VAR_13) {
  FUNC_5("could not read boot block");
  return VAR_7;
 }

 if (VAR_13[510] != 0x55 || VAR_13[511] != 0xaa) {
  FUNC_6("Invalid signature in boot block: %02x%02x",
      VAR_13[511], VAR_13[510]);
  return VAR_7;
 }

 FUNC_4(VAR_12, 0, sizeof *VAR_12);
 VAR_12->ValidFat = -1;




 VAR_12->bpbBytesPerSec = VAR_13[11] + (VAR_13[12] << 8);
 if (VAR_12->bpbBytesPerSec < VAR_4 ||
     VAR_12->bpbBytesPerSec > VAR_3 ||
     !FUNC_7(VAR_12->bpbBytesPerSec)) {
  FUNC_6("Invalid sector size: %u", VAR_12->bpbBytesPerSec);
  return VAR_7;
 }


 VAR_12->bpbSecPerClust = VAR_13[13];
 if (VAR_12->bpbSecPerClust == 0 || !FUNC_7(VAR_12->bpbSecPerClust)) {
  FUNC_6("Invalid cluster size: %u", VAR_12->bpbSecPerClust);
  return VAR_7;
 }


 VAR_12->bpbResSectors = VAR_13[14] + (VAR_13[15] << 8);
 if (VAR_12->bpbResSectors < 1) {
  FUNC_6("Invalid reserved sectors: %u",
      VAR_12->bpbResSectors);
  return VAR_7;
 }


 VAR_12->bpbFATs = VAR_13[16];
 if (VAR_12->bpbFATs == 0) {
  FUNC_6("Invalid number of FATs: %u", VAR_12->bpbFATs);
  return VAR_7;
 }


 VAR_12->bpbRootDirEnts = VAR_13[17] + (VAR_13[18] << 8);
 if (!VAR_12->bpbRootDirEnts) {

  VAR_12->flags |= VAR_5;
 }


 VAR_12->bpbSectors = VAR_13[19] + (VAR_13[20] << 8);
 if (VAR_12->bpbSectors != 0 && (VAR_12->flags & VAR_5)) {
  FUNC_6("Invalid 16-bit total sector count on FAT32: %u",
      VAR_12->bpbSectors);
  return VAR_7;
 }


 VAR_12->bpbMedia = VAR_13[21];


 VAR_12->bpbFATsmall = VAR_13[22] + (VAR_13[23] << 8);
 if (VAR_12->bpbFATsmall != 0 && (VAR_12->flags & VAR_5)) {
  FUNC_6("Invalid 16-bit FAT sector count on FAT32: %u",
      VAR_12->bpbFATsmall);
  return VAR_7;
 }


 VAR_12->SecPerTrack = VAR_13[24] + (VAR_13[25] << 8);
 VAR_12->bpbHeads = VAR_13[26] + (VAR_13[27] << 8);


 VAR_12->bpbHiddenSecs = VAR_13[28] + (VAR_13[29] << 8) +
     (VAR_13[30] << 16) + (VAR_13[31] << 24);


 VAR_12->bpbHugeSectors = VAR_13[32] + (VAR_13[33] << 8) +
     (VAR_13[34] << 16) + (VAR_13[35] << 24);
 if (VAR_12->bpbHugeSectors == 0) {
  if (VAR_12->flags & VAR_5) {
   FUNC_6("FAT32 with sector count of zero");
   return VAR_7;
  } else if (VAR_12->bpbSectors == 0) {
   FUNC_6("FAT with sector count of zero");
   return VAR_7;
  }
  VAR_12->NumSectors = VAR_12->bpbSectors;
 } else {
  if (VAR_12->bpbSectors != 0) {
   FUNC_6("Invalid FAT sector count");
   return VAR_7;
  }
  VAR_12->NumSectors = VAR_12->bpbHugeSectors;
 }




 if (VAR_12->flags & VAR_5) {

  if (!FUNC_2(&VAR_13[3], "EXFAT   ", 8)) {
   FUNC_6("exFAT filesystem is not supported.");
   return VAR_7;
  }


  VAR_12->FATsecs = VAR_13[36] + (VAR_13[37] << 8)
    + (VAR_13[38] << 16) + (VAR_13[39] << 24);

  if (VAR_13[40] & 0x80)
   VAR_12->ValidFat = VAR_13[40] & 0x0f;


  if (VAR_13[42] || VAR_13[43]) {
   FUNC_6("Unknown file system version: %x.%x",
          VAR_13[43], VAR_13[42]);
   return VAR_7;
  }






  VAR_12->bpbRootClust = VAR_13[44] + (VAR_13[45] << 8)
          + (VAR_13[46] << 16) + (VAR_13[47] << 24);


  VAR_12->bpbFSInfo = VAR_13[48] + (VAR_13[49] << 8);


  VAR_12->bpbBackup = VAR_13[50] + (VAR_13[51] << 8);


  if (VAR_12->bpbFSInfo == 0) {





   FUNC_6("Invalid FAT32 Extended BIOS Parameter Block");
   return VAR_7;
  }


  if (FUNC_1(VAR_11, VAR_12->bpbFSInfo * VAR_12->bpbBytesPerSec,
      VAR_9) != VAR_12->bpbFSInfo * VAR_12->bpbBytesPerSec
      || FUNC_9(VAR_11, VAR_14, sizeof VAR_14) != sizeof VAR_14) {
   FUNC_5("could not read fsinfo block");
   return VAR_7;
  }
  if (FUNC_2(VAR_14, "RRaA", 4)
      || FUNC_2(VAR_14 + 0x1e4, "rrAa", 4)
      || VAR_14[0x1fc]
      || VAR_14[0x1fd]
      || VAR_14[0x1fe] != 0x55
      || VAR_14[0x1ff] != 0xaa
      || VAR_14[0x3fc]
      || VAR_14[0x3fd]
      || VAR_14[0x3fe] != 0x55
      || VAR_14[0x3ff] != 0xaa) {
   FUNC_8("Invalid signature in fsinfo block\n");
   if (FUNC_0(0, "Fix")) {
    FUNC_3(VAR_14, "RRaA", 4);
    FUNC_3(VAR_14 + 0x1e4, "rrAa", 4);
    VAR_14[0x1fc] = VAR_14[0x1fd] = 0;
    VAR_14[0x1fe] = 0x55;
    VAR_14[0x1ff] = 0xaa;
    VAR_14[0x3fc] = VAR_14[0x3fd] = 0;
    VAR_14[0x3fe] = 0x55;
    VAR_14[0x3ff] = 0xaa;
    if (FUNC_1(VAR_11, VAR_12->bpbFSInfo *
        VAR_12->bpbBytesPerSec, VAR_9)
        != VAR_12->bpbFSInfo * VAR_12->bpbBytesPerSec
        || FUNC_10(VAR_11, VAR_14, sizeof VAR_14)
        != sizeof VAR_14) {
     FUNC_5("Unable to write bpbFSInfo");
     return VAR_7;
    }
    VAR_15 = VAR_6;
   } else
    VAR_12->bpbFSInfo = 0;
  } else {

   VAR_12->FSFree = VAR_14[0x1e8] + (VAR_14[0x1e9] << 8)
           + (VAR_14[0x1ea] << 16)
           + (VAR_14[0x1eb] << 24);
   VAR_12->FSNext = VAR_14[0x1ec] + (VAR_14[0x1ed] << 8)
           + (VAR_14[0x1ee] << 16)
           + (VAR_14[0x1ef] << 24);
  }
 } else {

  VAR_12->FATsecs = VAR_12->bpbFATsmall;
 }

 if (VAR_12->FATsecs > VAR_10 / VAR_12->bpbFATs) {
  FUNC_6("Invalid FATs(%u) with FATsecs(%zu)",
   VAR_12->bpbFATs, (size_t)VAR_12->FATsecs);
  return VAR_7;
 }

 VAR_12->FirstCluster = (VAR_12->bpbRootDirEnts * 32 +
     VAR_12->bpbBytesPerSec - 1) / VAR_12->bpbBytesPerSec +
     VAR_12->bpbResSectors + VAR_12->bpbFATs * VAR_12->FATsecs;

 if (VAR_12->FirstCluster + VAR_12->bpbSecPerClust > VAR_12->NumSectors) {
  FUNC_6("Cluster offset too large (%u clusters)\n",
      VAR_12->FirstCluster);
  return VAR_7;
 }

 VAR_12->NumClusters = (VAR_12->NumSectors - VAR_12->FirstCluster) / VAR_12->bpbSecPerClust +
     VAR_1;

 if (VAR_12->flags & VAR_5)
  VAR_12->ClustMask = 128;
 else if (VAR_12->NumClusters < (VAR_2&VAR_0))
  VAR_12->ClustMask = VAR_0;
 else if (VAR_12->NumClusters < (VAR_2&129))
  VAR_12->ClustMask = 129;
 else {
  FUNC_6("Filesystem too big (%u clusters) for non-FAT32 partition",
         VAR_12->NumClusters);
  return VAR_7;
 }

 switch (VAR_12->ClustMask) {
 case 128:
  VAR_12->NumFatEntries = (VAR_12->FATsecs * VAR_12->bpbBytesPerSec) / 4;
  break;
 case 129:
  VAR_12->NumFatEntries = (VAR_12->FATsecs * VAR_12->bpbBytesPerSec) / 2;
  break;
 default:
  VAR_12->NumFatEntries = (VAR_12->FATsecs * VAR_12->bpbBytesPerSec * 2) / 3;
  break;
 }

 if (VAR_12->NumFatEntries < VAR_12->NumClusters - VAR_1) {
  FUNC_6("FAT size too small, %u entries won't fit into %u sectors\n",
         VAR_12->NumClusters, VAR_12->FATsecs);
  return VAR_7;
 }
 VAR_12->ClusterSize = VAR_12->bpbBytesPerSec * VAR_12->bpbSecPerClust;

 VAR_12->NumFiles = 1;
 VAR_12->NumFree = 0;

 return VAR_15;
}
