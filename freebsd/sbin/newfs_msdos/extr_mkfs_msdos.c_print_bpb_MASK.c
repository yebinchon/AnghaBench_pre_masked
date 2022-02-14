
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpb {int bpbBytesPerSec; int bpbSecPerClust; int bpbResSectors; int bpbFATs; int bpbRootDirEnts; int bpbSectors; int bpbMedia; int bpbFATsecs; int bpbSecPerTrack; int bpbHeads; int bpbHiddenSecs; int bpbHugeSectors; int bpbBigFATsecs; int bpbRootClust; scalar_t__ bpbFSInfo; scalar_t__ bpbBackup; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct bpb *VAR_1)
{
    FUNC_0("BytesPerSec=%u SecPerClust=%u ResSectors=%u FATs=%u",
    VAR_1->bpbBytesPerSec, VAR_1->bpbSecPerClust, VAR_1->bpbResSectors,
    VAR_1->bpbFATs);
    if (VAR_1->bpbRootDirEnts)
 FUNC_0(" RootDirEnts=%u", VAR_1->bpbRootDirEnts);
    if (VAR_1->bpbSectors)
 FUNC_0(" Sectors=%u", VAR_1->bpbSectors);
    FUNC_0(" Media=%#x", VAR_1->bpbMedia);
    if (VAR_1->bpbFATsecs)
 FUNC_0(" FATsecs=%u", VAR_1->bpbFATsecs);
    FUNC_0(" SecPerTrack=%u Heads=%u HiddenSecs=%u", VAR_1->bpbSecPerTrack,
    VAR_1->bpbHeads, VAR_1->bpbHiddenSecs);
    if (VAR_1->bpbHugeSectors)
 FUNC_0(" HugeSectors=%u", VAR_1->bpbHugeSectors);
    if (!VAR_1->bpbFATsecs) {
 FUNC_0(" FATsecs=%u RootCluster=%u", VAR_1->bpbBigFATsecs,
        VAR_1->bpbRootClust);
 FUNC_0(" FSInfo=");
 FUNC_0(VAR_1->bpbFSInfo == VAR_0 ? "%#x" : "%u", VAR_1->bpbFSInfo);
 FUNC_0(" Backup=");
 FUNC_0(VAR_1->bpbBackup == VAR_0 ? "%#x" : "%u", VAR_1->bpbBackup);
    }
    FUNC_0("\n");
}
