
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct section {int link; int scn; int name; } ;
struct elfdump {int flags; } ;
typedef int idx ;
struct TYPE_7__ {int vda_next; int vda_name; } ;
struct TYPE_6__ {int vd_ndx; int vd_flags; int vd_cnt; int vd_next; int vd_aux; int vd_hash; int vd_version; } ;
struct TYPE_5__ {int d_size; int * d_buf; } ;
typedef TYPE_1__ Elf_Data ;
typedef TYPE_2__ Elf32_Verdef ;
typedef TYPE_3__ Elf32_Verdaux ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 char* FUNC_4 (struct elfdump*,int ,int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(struct elfdump *VAR_2, struct section *VAR_3)
{
 Elf_Data *VAR_4;
 Elf32_Verdef *VAR_5;
 Elf32_Verdaux *VAR_6;
 const char *VAR_7;
 char VAR_8[10];
 uint8_t *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_2->flags & VAR_0)
  FUNC_0("Version Definition Section:  %s\n", VAR_3->name);
 else
  FUNC_0("\nversion definition section (%s):\n", VAR_3->name);
 (void) FUNC_2();
 if ((VAR_4 = FUNC_3(VAR_3->scn, ((void*)0))) == ((void*)0)) {
  VAR_14 = FUNC_2();
  if (VAR_14 != 0)
   FUNC_6("elf_getdata failed: %s",
       FUNC_1(VAR_14));
  return;
 }
 VAR_9 = VAR_4->d_buf;
 VAR_10 = VAR_9 + VAR_4->d_size;
 VAR_12 = 0;
 if (VAR_2->flags & VAR_0)
  FUNC_0("     index  version                     dependency\n");
 while (VAR_9 + sizeof(Elf32_Verdef) <= VAR_10) {
  VAR_5 = (Elf32_Verdef *) (uintptr_t) VAR_9;
  if (VAR_2->flags & VAR_0) {
   FUNC_5(VAR_8, sizeof(VAR_8), "[%d]", VAR_5->vd_ndx);
   FUNC_0("%10s  ", VAR_8);
  } else {
   FUNC_0("\nentry: %d\n", VAR_12++);
   FUNC_0("\tvd_version: %u\n", VAR_5->vd_version);
   FUNC_0("\tvd_flags: %u\n", VAR_5->vd_flags);
   FUNC_0("\tvd_ndx: %u\n", VAR_5->vd_ndx);
   FUNC_0("\tvd_cnt: %u\n", VAR_5->vd_cnt);
   FUNC_0("\tvd_hash: %u\n", VAR_5->vd_hash);
   FUNC_0("\tvd_aux: %u\n", VAR_5->vd_aux);
   FUNC_0("\tvd_next: %u\n\n", VAR_5->vd_next);
  }
  VAR_11 = VAR_9 + VAR_5->vd_aux;
  VAR_13 = 0;
  VAR_15 = 0;
  while (VAR_11 + sizeof(Elf32_Verdaux) <= VAR_10 && VAR_13 < VAR_5->vd_cnt) {
   VAR_6 = (Elf32_Verdaux *) (uintptr_t) VAR_11;
   VAR_7 = FUNC_4(VAR_2, VAR_3->link, VAR_6->vda_name);
   if (VAR_2->flags & VAR_0) {
    if (VAR_15 == 0)
     FUNC_0("%-26.26s", VAR_7);
    else if (VAR_15 == 1)
     FUNC_0("  %-20.20s", VAR_7);
    else {
     FUNC_0("\n%40.40s", "");
     FUNC_0("%s", VAR_7);
    }
   } else {
    FUNC_0("\t\tvda: %d\n", VAR_13++);
    FUNC_0("\t\t\tvda_name: %s\n", VAR_7);
    FUNC_0("\t\t\tvda_next: %u\n", VAR_6->vda_next);
   }
   if (VAR_6->vda_next == 0) {
    if (VAR_2->flags & VAR_0) {
     if (VAR_5->vd_flags & VAR_1) {
      if (VAR_15 == 0)
       FUNC_0("%-20.20s", "");
      FUNC_0("%s", "[ BASE ]");
     }
     FUNC_0("\n");
    }
    break;
   }
   if (VAR_2->flags & VAR_0)
    VAR_15++;
   VAR_11 += VAR_6->vda_next;
  }
  if (VAR_5->vd_next == 0)
   break;
  VAR_9 += VAR_5->vd_next;
 }
}
