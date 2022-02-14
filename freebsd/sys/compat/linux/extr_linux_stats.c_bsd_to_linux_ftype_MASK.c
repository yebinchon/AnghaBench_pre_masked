
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static long
FUNC_1(const char *VAR_0)
{
 int VAR_1;
 static struct {const char *bsd_name; long linux_type;} VAR_2[] = {
  {"ufs", 129},
  {"zfs", 128},
  {"cd9660", 136},
  {"nfs", 133},
  {"ext2fs", 138},
  {"procfs", 131},
  {"msdosfs", 135},
  {"ntfs", 132},
  {"nwfs", 134},
  {"hpfs", 137},
  {"coda", 140},
  {"devfs", 139},
  {"tmpfs", 130},
  {((void*)0), 0L}};

 for (VAR_1 = 0; VAR_2[VAR_1].bsd_name != ((void*)0); VAR_1++)
  if (FUNC_0(VAR_2[VAR_1].bsd_name, VAR_0) == 0)
   return (VAR_2[VAR_1].linux_type);

 return (0L);
}
