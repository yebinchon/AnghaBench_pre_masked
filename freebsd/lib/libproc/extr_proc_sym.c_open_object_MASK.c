
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {char* pr_mapname; } ;
struct map_info {TYPE_1__ map; struct file_info* file; } ;
struct file_info {int fd; int * elf; int ehdr; } ;
typedef TYPE_1__ prmap_t ;
typedef int path ;
typedef int crc ;
struct TYPE_9__ {int d_size; char* d_buf; } ;
struct TYPE_8__ {scalar_t__ sh_type; int sh_name; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf_Data ;
typedef int Elf ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 TYPE_3__* FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,size_t*) ;
 int * FUNC_9 (int *,int *) ;
 char* FUNC_10 (int *,size_t,int ) ;
 int * FUNC_11 (int *,int *) ;
 TYPE_2__* FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (struct file_info*) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*,char const*,int ) ;
 int FUNC_17 (char*,int,char*) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (char*,int) ;

__attribute__((used)) static int
FUNC_22(struct map_info *VAR_6)
{
 char VAR_7[VAR_4];
 GElf_Shdr VAR_8;
 Elf *VAR_9, *VAR_10;
 Elf_Data *VAR_11;
 Elf_Scn *VAR_12;
 struct file_info *VAR_13;
 prmap_t *VAR_14;
 const char *VAR_15, *VAR_16;
 size_t VAR_17;
 uint32_t VAR_18;
 int VAR_19, VAR_20;

 if (VAR_6->map.pr_mapname[0] == '\0')
  return (-1);
 if (VAR_6->file->elf != ((void*)0))
  return (0);

 VAR_13 = VAR_6->file;
 VAR_14 = &VAR_6->map;
 if ((VAR_19 = FUNC_15(VAR_14->pr_mapname, VAR_2 | VAR_1)) < 0) {
  FUNC_0("ERROR: open %s failed", VAR_14->pr_mapname);
  return (-1);
 }
 if ((VAR_9 = FUNC_4(VAR_19, VAR_0, ((void*)0))) == ((void*)0)) {
  FUNC_1("ERROR: elf_begin() failed: %s", FUNC_6(-1));
  goto err;
 }
 if (FUNC_11(VAR_9, &VAR_13->ehdr) != &VAR_13->ehdr) {
  FUNC_1("ERROR: elf_getehdr() failed: %s", FUNC_6(-1));
  goto err;
 }

 VAR_12 = ((void*)0);
 while ((VAR_12 = FUNC_9(VAR_9, VAR_12)) != ((void*)0)) {
  if (FUNC_12(VAR_12, &VAR_8) != &VAR_8) {
   FUNC_1("ERROR: gelf_getshdr failed: %s",
       FUNC_6(-1));
   goto err;
  }
  if (VAR_8.sh_type != VAR_5)
   continue;
  if (FUNC_8(VAR_9, &VAR_17) != 0) {
   FUNC_1("ERROR: elf_getshdrstrndx failed: %s",
       FUNC_6(-1));
   goto err;
  }
  if ((VAR_16 = FUNC_10(VAR_9, VAR_17, VAR_8.sh_name)) == ((void*)0))
   continue;

  if (FUNC_18(VAR_16, ".gnu_debuglink") == 0)
   break;
 }
 if (VAR_12 == ((void*)0))
  goto internal;

 if ((VAR_11 = FUNC_7(VAR_12, ((void*)0))) == ((void*)0)) {
  FUNC_1("ERROR: elf_getdata failed: %s", FUNC_6(-1));
  goto err;
 }





 if (VAR_11->d_size < sizeof(VAR_18) + 1) {
  FUNC_1("ERROR: debuglink section is too small (%zd bytes)",
      VAR_11->d_size);
  goto internal;
 }
 if (FUNC_21(VAR_11->d_buf, VAR_11->d_size) >= VAR_11->d_size - sizeof(VAR_18)) {
  FUNC_1("ERROR: no null-terminator in gnu_debuglink section");
  goto internal;
 }

 VAR_15 = VAR_11->d_buf;
 FUNC_14(&VAR_18, (char *)VAR_11->d_buf + VAR_11->d_size - sizeof(VAR_18),
     sizeof(VAR_18));
 (void)FUNC_20(VAR_7, VAR_14->pr_mapname, sizeof(VAR_7));
 (void)FUNC_3(VAR_7);

 if ((VAR_20 = FUNC_16(VAR_7, VAR_15, VAR_18)) >= 0)
  goto external;

 if (FUNC_19(VAR_7, "/.debug", sizeof(VAR_7)) < sizeof(VAR_7) &&
     (VAR_20 = FUNC_16(VAR_7, VAR_15, VAR_18)) >= 0)
  goto external;

 (void)FUNC_17(VAR_7, sizeof(VAR_7), VAR_3);
 if (FUNC_19(VAR_7, VAR_14->pr_mapname, sizeof(VAR_7)) < sizeof(VAR_7)) {
  (void)FUNC_3(VAR_7);
  if ((VAR_20 = FUNC_16(VAR_7, VAR_15, VAR_18)) >= 0)
   goto external;
 }

internal:

 VAR_13->elf = VAR_9;
 VAR_13->fd = VAR_19;
 FUNC_13(VAR_13);
 return (0);

external:
 if ((VAR_10 = FUNC_4(VAR_20, VAR_0, ((void*)0))) == ((void*)0)) {
  FUNC_1("ERROR: elf_begin failed: %s", FUNC_6(-1));
  (void)FUNC_2(VAR_20);
  goto err;
 }
 (void)FUNC_5(VAR_9);
 (void)FUNC_2(VAR_19);
 VAR_13->elf = VAR_10;
 VAR_13->fd = VAR_20;
 FUNC_13(VAR_13);
 return (0);

err:
 if (VAR_9 != ((void*)0))
  (void)FUNC_5(VAR_9);
 (void)FUNC_2(VAR_19);
 return (-1);
}
