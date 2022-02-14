
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct symver {int dummy; } ;
struct section {scalar_t__ link; char* name; int scn; } ;
struct readelf {scalar_t__ shnum; int ver_sz; TYPE_5__* ver; struct section* vd_s; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {scalar_t__ d_size; int * d_buf; } ;
struct TYPE_7__ {scalar_t__ vda_next; int vda_name; } ;
struct TYPE_6__ {int vd_version; int vd_flags; int vd_ndx; int vd_cnt; int vd_aux; scalar_t__ vd_next; } ;
typedef TYPE_1__ Elf_Verdef ;
typedef TYPE_2__ Elf_Verdaux ;
typedef TYPE_3__ Elf_Data ;


 int FUNC_0 (int,char const*,int) ;
 TYPE_5__* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int ,int *) ;
 char* FUNC_5 (struct readelf*,scalar_t__,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct readelf *VAR_0, int VAR_1)
{
 struct section *VAR_2;
 struct symver *VAR_3;
 Elf_Data *VAR_4;
 Elf_Verdef *VAR_5;
 Elf_Verdaux *VAR_6;
 uint8_t *VAR_7, *VAR_8, *VAR_9;
 const char *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if ((VAR_2 = VAR_0->vd_s) == ((void*)0))
  return;
 if (VAR_2->link >= VAR_0->shnum)
  return;

 if (VAR_0->ver == ((void*)0)) {
  VAR_0->ver_sz = 16;
  if ((VAR_0->ver = FUNC_1(VAR_0->ver_sz, sizeof(*VAR_0->ver))) ==
      ((void*)0)) {
   FUNC_7("calloc failed");
   return;
  }
  VAR_0->ver[0].name = "*local*";
  VAR_0->ver[1].name = "*global*";
 }

 if (VAR_1)
  FUNC_6("\nVersion definition section (%s):\n", VAR_2->name);
 (void) FUNC_3();
 if ((VAR_4 = FUNC_4(VAR_2->scn, ((void*)0))) == ((void*)0)) {
  VAR_11 = FUNC_3();
  if (VAR_11 != 0)
   FUNC_8("elf_getdata failed: %s", FUNC_2(VAR_11));
  return;
 }
 if (VAR_4->d_size == 0)
  return;

 VAR_7 = VAR_4->d_buf;
 VAR_8 = VAR_7 + VAR_4->d_size;
 while (VAR_7 + sizeof(Elf_Verdef) <= VAR_8) {
  VAR_5 = (Elf_Verdef *) (uintptr_t) VAR_7;
  if (VAR_1) {
   FUNC_6("  0x%4.4lx", (unsigned long)
       (VAR_7 - (uint8_t *)VAR_4->d_buf));
   FUNC_6(" vd_version: %u vd_flags: %d"
       " vd_ndx: %u vd_cnt: %u", VAR_5->vd_version,
       VAR_5->vd_flags, VAR_5->vd_ndx, VAR_5->vd_cnt);
  }
  VAR_9 = VAR_7 + VAR_5->vd_aux;
  VAR_13 = 0;
  while (VAR_9 + sizeof(Elf_Verdaux) <= VAR_8 && VAR_13 < VAR_5->vd_cnt) {
   VAR_6 = (Elf_Verdaux *) (uintptr_t) VAR_9;
   VAR_10 = FUNC_5(VAR_0, VAR_2->link, VAR_6->vda_name);
   if (VAR_13 == 0) {
    if (VAR_1)
     FUNC_6(" vda_name: %s\n", VAR_10);
    FUNC_0((int)VAR_5->vd_ndx, VAR_10, 1);
   } else if (VAR_1)
    FUNC_6("  0x%4.4lx parent: %s\n",
        (unsigned long) (VAR_9 -
        (uint8_t *)VAR_4->d_buf), VAR_10);
   if (VAR_6->vda_next == 0)
    break;
   VAR_9 += VAR_6->vda_next;
   VAR_13++;
  }
  if (VAR_5->vd_next == 0)
   break;
  VAR_7 += VAR_5->vd_next;
 }
}
