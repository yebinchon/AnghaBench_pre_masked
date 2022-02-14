
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct g_provider {int sectorsize; int name; } ;
struct g_consumer {struct g_provider* provider; } ;
struct TYPE_6__ {int* BS_FilSysType; int* BS_VolLab; int BPB_NumFATs; int BPB_BytsPerSec; int BPB_FATSz32; int BPB_RsvdSecCnt; } ;
struct TYPE_5__ {int* BS_FilSysType; int* BS_VolLab; int BPB_FATSz16; } ;
struct TYPE_4__ {int* DIR_Name; int DIR_Attr; } ;
typedef TYPE_1__ FAT_DES ;
typedef TYPE_2__ FAT_BSBPB ;
typedef TYPE_3__ FAT32_BSBPB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,...) ;
 char* VAR_2 ;
 int FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (char*,size_t) ;
 scalar_t__ FUNC_7 (struct g_consumer*,int,int,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int*,int ) ;
 scalar_t__ FUNC_10 (int*,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct g_consumer *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct g_provider *VAR_6;
 FAT_BSBPB *VAR_7;
 FAT32_BSBPB *VAR_8;
 FAT_DES *VAR_9;
 uint8_t *VAR_10, *VAR_11;

 FUNC_8();
 VAR_6 = VAR_3->provider;
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 FUNC_4(VAR_4, VAR_5);


 switch(VAR_6->sectorsize) {
 case 512:
 case 1024:
 case 2048:
 case 4096:
  break;
 default:
  FUNC_0(1, "MSDOSFS: %s: sector size %d not compatible.",
      VAR_6->name, VAR_6->sectorsize);
  return;
 }


 VAR_10 = (uint8_t *)FUNC_7(VAR_3, 0, VAR_6->sectorsize, ((void*)0));
 if (VAR_10 == ((void*)0))
  return;


 if (VAR_10[510] != 0x55 || VAR_10[511] != 0xaa) {
  FUNC_0(1, "MSDOSFS: %s: no FAT signature found.",
      VAR_6->name);
  goto error;
 }






 VAR_7 = (FAT_BSBPB *)VAR_10;
 VAR_8 = (FAT32_BSBPB *)VAR_10;

 if (FUNC_2(VAR_7->BPB_FATSz16) != 0) {




  if (FUNC_10(VAR_7->BS_FilSysType, "FAT", 3) != 0) {
   FUNC_0(1,
       "MSDOSFS: %s: FAT12/16 volume not valid.",
       VAR_6->name);
   goto error;
  }
  FUNC_0(1, "MSDOSFS: %s: FAT12/FAT16 volume detected.",
      VAR_6->name);


  if (FUNC_10(VAR_7->BS_VolLab, VAR_2,
      sizeof(VAR_7->BS_VolLab)) == 0) {
   FUNC_0(1,
       "MSDOSFS: %s: FAT12/16 volume has no name.",
       VAR_6->name);
   goto error;
  }
  FUNC_9(VAR_4, VAR_7->BS_VolLab,
      FUNC_1(VAR_5, sizeof(VAR_7->BS_VolLab) + 1));
 } else if (FUNC_3(VAR_8->BPB_FATSz32) != 0) {
  uint32_t VAR_12, VAR_13, VAR_14;





  if (FUNC_10(VAR_8->BS_FilSysType, "FAT", 3) != 0) {
   FUNC_0(1, "MSDOSFS: %s: FAT32 volume not valid.",
       VAR_6->name);
   goto error;
  }
  FUNC_0(1, "MSDOSFS: %s: FAT32 volume detected.",
      VAR_6->name);




  if (FUNC_10(VAR_8->BS_VolLab, VAR_2,
      sizeof(VAR_8->BS_VolLab)) != 0) {
   FUNC_9(VAR_4, VAR_8->BS_VolLab,
       FUNC_1(VAR_5, sizeof(VAR_8->BS_VolLab) + 1));
   goto endofchecks;
  }






  VAR_12 =
      FUNC_2(VAR_8->BPB_RsvdSecCnt) +
      (VAR_8->BPB_NumFATs *
       FUNC_3(VAR_8->BPB_FATSz32));
  VAR_13 = FUNC_2(VAR_8->BPB_BytsPerSec);

  FUNC_0(2,
      "MSDOSFS: FAT_FirstDataSector=0x%x, FAT_BytesPerSector=%d",
      VAR_12, VAR_13);

  for (VAR_14 = VAR_13 * VAR_12;;
      VAR_14 += VAR_13) {
   VAR_11 = (uint8_t *)FUNC_7(VAR_3, VAR_14,
       VAR_13, ((void*)0));
   if (VAR_11 == ((void*)0))
    goto error;

   VAR_9 = (FAT_DES *)VAR_11;
   do {

    if (VAR_9->DIR_Name[0] == 0) {
     FUNC_0(1, "MSDOSFS: %s: "
         "FAT32 volume has no name.",
         VAR_6->name);
     goto error;
    }


    if (VAR_9->DIR_Name[0] == 0xe5 ||
        (VAR_9->DIR_Attr &
         VAR_0) ==
        VAR_0) {
     continue;
    }





    if (VAR_9->DIR_Attr &
        VAR_1) {
     FUNC_9(VAR_4, VAR_9->DIR_Name,
         FUNC_1(VAR_5,
         sizeof(VAR_9->DIR_Name) + 1));
     goto endofchecks;
    }
   } while((uint8_t *)(++VAR_9) <
       (uint8_t *)(VAR_11 + VAR_13));
   FUNC_5(VAR_11);
  }
 } else {
  FUNC_0(1, "MSDOSFS: %s: no FAT volume detected.",
      VAR_6->name);
  goto error;
 }

endofchecks:
 FUNC_6(VAR_4, VAR_5);

error:
 if (VAR_10 != ((void*)0))
  FUNC_5(VAR_10);
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11);
}
