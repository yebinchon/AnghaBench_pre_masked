
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_1(VAR_0,
     "usage: %s [ -fsoptions ] special-device%s\n",
     FUNC_2(),
     " [device-type]");
 FUNC_1(VAR_0, "where fsoptions are:\n");
 FUNC_1(VAR_0, "\t-E Erase previous disk content\n");
 FUNC_1(VAR_0, "\t-J Enable journaling via gjournal\n");
 FUNC_1(VAR_0, "\t-L volume label to add to superblock\n");
 FUNC_1(VAR_0,
     "\t-N do not create file system, just print out parameters\n");
 FUNC_1(VAR_0, "\t-O file system format: 1 => UFS1, 2 => UFS2\n");
 FUNC_1(VAR_0, "\t-R regression test, suppress random factors\n");
 FUNC_1(VAR_0, "\t-S sector size\n");
 FUNC_1(VAR_0, "\t-T disktype\n");
 FUNC_1(VAR_0, "\t-U enable soft updates\n");
 FUNC_1(VAR_0, "\t-a maximum contiguous blocks\n");
 FUNC_1(VAR_0, "\t-b block size\n");
 FUNC_1(VAR_0, "\t-c blocks per cylinders group\n");
 FUNC_1(VAR_0, "\t-d maximum extent size\n");
 FUNC_1(VAR_0, "\t-e maximum blocks per file in a cylinder group\n");
 FUNC_1(VAR_0, "\t-f frag size\n");
 FUNC_1(VAR_0, "\t-g average file size\n");
 FUNC_1(VAR_0, "\t-h average files per directory\n");
 FUNC_1(VAR_0, "\t-i number of bytes per inode\n");
 FUNC_1(VAR_0, "\t-j enable soft updates journaling\n");
 FUNC_1(VAR_0, "\t-k space to hold for metadata blocks\n");
 FUNC_1(VAR_0, "\t-l enable multilabel MAC\n");
 FUNC_1(VAR_0, "\t-n do not create .snap directory\n");
 FUNC_1(VAR_0, "\t-m minimum free space %%\n");
 FUNC_1(VAR_0, "\t-o optimization preference (`space' or `time')\n");
 FUNC_1(VAR_0, "\t-p partition name (a..h)\n");
 FUNC_1(VAR_0, "\t-r reserved sectors at the end of device\n");
 FUNC_1(VAR_0, "\t-s file system size (sectors)\n");
 FUNC_1(VAR_0, "\t-t enable TRIM\n");
 FUNC_0(1);
}
