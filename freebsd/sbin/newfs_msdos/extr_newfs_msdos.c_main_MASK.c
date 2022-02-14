
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_options {int no_create; int align; int volume_id_set; int media_descriptor_set; int hidden_sectors_set; int timestamp_set; void* create_size; void* sectors_per_track; int timestamp; void* size; void* reserved_sectors; void* hidden_sectors; void* num_FAT; void* media_descriptor; void* backup_sector; void* info_sector; void* drive_heads; void* floppy; void* directory_entries; int block_size; void* sectors_per_cluster; void* sectors_per_fat; void* bytes_per_sector; void* OEM_string; void* volume_label; void* volume_id; int fat_type; void* bootstrap; void* offset; } ;
typedef int o ;
typedef int buf ;


 int VAR_0 ;
 char* VAR_1 ;
 void* FUNC_0 (void*,int,char*) ;
 void* FUNC_1 (void*,int,char*) ;
 void* FUNC_2 (void*,int,char*) ;
 void* FUNC_3 (void*,char*) ;
 int FUNC_4 (void*,int,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int,char**,char const*) ;
 int FUNC_10 (struct msdos_options*,int ,int) ;
 int FUNC_11 (char const*,char const*,struct msdos_options*) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (char*,int,char*,char*,char const*) ;
 int FUNC_13 (char const*,char) ;
 int FUNC_14 (void*,char*) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_4, char *VAR_5[])
{
    static const char VAR_6[] = "@:NAB:C:F:I:L:O:S:a:b:c:e:f:h:i:k:m:n:o:r:s:T:u:";
    struct msdos_options VAR_7;
    const char *VAR_8, *VAR_9;
    char VAR_10[VAR_0];
    int VAR_11;

    FUNC_10(&VAR_7, 0, sizeof(VAR_7));

    while ((VAR_11 = FUNC_9(VAR_4, VAR_5, VAR_6)) != -1)
 switch (VAR_11) {
 case '@':
     VAR_7.offset = FUNC_3(VAR_2, "offset");
     break;
 case 'N':
     VAR_7.no_create = 1;
     break;
 case 'A':
     VAR_7.align = 1;
     break;
 case 'B':
     VAR_7.bootstrap = VAR_2;
     break;
 case 'C':
     VAR_7.create_size = FUNC_3(VAR_2, "create size");
     break;
 case 'F':
     if (FUNC_14(VAR_2, "12") &&
  FUNC_14(VAR_2, "16") &&
  FUNC_14(VAR_2, "32"))
  FUNC_7(1, "%s: bad FAT type", VAR_2);
     VAR_7.fat_type = FUNC_5(VAR_2);
     break;
 case 'I':
     VAR_7.volume_id = FUNC_2(VAR_2, 0, "volume ID");
     VAR_7.volume_id_set = 1;
     break;
 case 'L':
     VAR_7.volume_label = VAR_2;
     break;
 case 'O':
     VAR_7.OEM_string = VAR_2;
     break;
 case 'S':
     VAR_7.bytes_per_sector = FUNC_1(VAR_2, 1, "bytes/sector");
     break;
 case 'a':
     VAR_7.sectors_per_fat = FUNC_2(VAR_2, 1, "sectors/FAT");
     break;
 case 'b':
     VAR_7.block_size = FUNC_4(VAR_2, 1, "block size");
     VAR_7.sectors_per_cluster = 0;
     break;
 case 'c':
     VAR_7.sectors_per_cluster = FUNC_0(VAR_2, 1, "sectors/cluster");
     VAR_7.block_size = 0;
     break;
 case 'e':
     VAR_7.directory_entries = FUNC_1(VAR_2, 1, "directory entries");
     break;
 case 'f':
     VAR_7.floppy = VAR_2;
     break;
 case 'h':
     VAR_7.drive_heads = FUNC_1(VAR_2, 1, "drive heads");
     break;
 case 'i':
     VAR_7.info_sector = FUNC_1(VAR_2, 1, "info sector");
     break;
 case 'k':
     VAR_7.backup_sector = FUNC_1(VAR_2, 1, "backup sector");
     break;
 case 'm':
     VAR_7.media_descriptor = FUNC_0(VAR_2, 0, "media descriptor");
     VAR_7.media_descriptor_set = 1;
     break;
 case 'n':
     VAR_7.num_FAT = FUNC_0(VAR_2, 1, "number of FATs");
     break;
 case 'o':
     VAR_7.hidden_sectors = FUNC_2(VAR_2, 0, "hidden sectors");
     VAR_7.hidden_sectors_set = 1;
     break;
 case 'r':
     VAR_7.reserved_sectors = FUNC_1(VAR_2, 1, "reserved sectors");
     break;
 case 's':
     VAR_7.size = FUNC_2(VAR_2, 1, "file system size");
     break;
 case 'T':
     VAR_7.timestamp_set = 1;
     VAR_7.timestamp = FUNC_8(VAR_2);
     break;
 case 'u':
     VAR_7.sectors_per_track = FUNC_1(VAR_2, 1, "sectors/track");
     break;
 default:
     FUNC_16();
 }
    VAR_4 -= VAR_3;
    VAR_5 += VAR_3;
    if (VAR_4 < 1 || VAR_4 > 2)
 FUNC_16();
 if (VAR_7.align) {
  if (VAR_7.hidden_sectors_set)
      FUNC_7(1, "align (-A) is incompatible with -r");
 }
    VAR_8 = *VAR_5++;
    if (!VAR_7.create_size && !FUNC_13(VAR_8, '/')) {
 FUNC_12(VAR_10, sizeof(VAR_10), "%s%s", VAR_1, VAR_8);
 if (!(VAR_8 = FUNC_15(VAR_10)))
     FUNC_6(1, ((void*)0));
    }
    VAR_9 = *VAR_5;
    return !!FUNC_11(VAR_8, VAR_9, &VAR_7);
}
