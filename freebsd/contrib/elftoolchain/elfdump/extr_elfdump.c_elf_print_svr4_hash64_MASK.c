
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uintmax_t ;
typedef int uint64_t ;
struct section {int link; int scn; int name; } ;
struct TYPE_9__ {int * e_ident; } ;
struct elfdump {int flags; TYPE_1__ ehdr; int elf; } ;
typedef int idx ;
struct TYPE_10__ {int d_size; int* d_buf; int d_type; } ;
typedef TYPE_2__ Elf_Data ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 TYPE_2__* FUNC_6 (int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_7 (struct elfdump*,int ,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_9 (char*,int,char*,size_t) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void
FUNC_11(struct elfdump *VAR_4, struct section *VAR_5)
{
 Elf_Data *VAR_6, VAR_7;
 uint64_t *VAR_8;
 uint64_t *VAR_9, *VAR_10;
 uint64_t VAR_11, VAR_12;
 uint64_t *VAR_13, *VAR_14, VAR_15, VAR_16, VAR_17;
 size_t VAR_18;
 int VAR_19, VAR_20;
 char VAR_21[10];

 if (VAR_4->flags & VAR_3)
  FUNC_0("\nHash Section:  %s\n", VAR_5->name);
 else
  FUNC_0("\nhash table (%s):\n", VAR_5->name);






 (void) FUNC_3();
 if ((VAR_6 = FUNC_4(VAR_5->scn, ((void*)0))) == ((void*)0)) {
  VAR_19 = FUNC_3();
  if (VAR_19 != 0)
   FUNC_10("elf_rawdata failed: %s",
       FUNC_2(VAR_19));
  return;
 }
 VAR_6->d_type = VAR_1;
 FUNC_8(&VAR_7, VAR_6, sizeof(Elf_Data));
 if (FUNC_6(VAR_4->elf, &VAR_7, VAR_6,
  VAR_4->ehdr.e_ident[VAR_0]) != &VAR_7) {
  FUNC_10("gelf_xlatetom failed: %s", FUNC_2(-1));
  return;
 }
 if (VAR_7.d_size < 2 * sizeof(uint64_t)) {
  FUNC_10(".hash section too small");
  return;
 }
 VAR_8 = VAR_7.d_buf;
 VAR_11 = VAR_8[0];
 VAR_12 = VAR_8[1];
 if (VAR_11 <= 0 || VAR_12 <= 0) {
  FUNC_10("Malformed .hash section");
  return;
 }
 if (VAR_7.d_size != (VAR_11 + VAR_12 + 2) * sizeof(uint64_t)) {
  FUNC_10("Malformed .hash section");
  return;
 }
 VAR_9 = &VAR_8[2];
 VAR_10 = &VAR_8[2 + VAR_11];

 if (VAR_4->flags & VAR_3) {
  VAR_16 = 0;
  if ((VAR_13 = FUNC_1(VAR_11, sizeof(*VAR_13))) == ((void*)0))
   FUNC_5(VAR_2, "calloc failed");
  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
   for (VAR_15 = VAR_9[VAR_18]; VAR_15 > 0 && VAR_15 < VAR_12; VAR_15 = VAR_10[VAR_15])
    if (++VAR_13[VAR_18] > VAR_16)
     VAR_16 = VAR_13[VAR_18];
  if ((VAR_14 = FUNC_1(VAR_16 + 1, sizeof(*VAR_14))) == ((void*)0))
   FUNC_5(VAR_2, "calloc failed");
  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
   VAR_14[VAR_13[VAR_18]]++;
  FUNC_0("    bucket    symndx    name\n");
  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
   VAR_20 = 1;
   for (VAR_15 = VAR_9[VAR_18]; VAR_15 > 0 && VAR_15 < VAR_12; VAR_15 = VAR_10[VAR_15]) {
    if (VAR_20) {
     FUNC_0("%10zu  ", VAR_18);
     VAR_20 = 0;
    } else
     FUNC_0("            ");
    FUNC_9(VAR_21, sizeof(VAR_21), "[%zu]", (size_t)VAR_15);
    FUNC_0("%-10s  ", VAR_21);
    FUNC_0("%s\n", FUNC_7(VAR_4, VAR_5->link, VAR_15));
   }
  }
  FUNC_0("\n");
  VAR_17 = 0;
  for (VAR_18 = 0; VAR_18 <= VAR_16; VAR_18++) {
   VAR_17 += VAR_14[VAR_18] * VAR_18;
   FUNC_0("%10ju  buckets contain %8zu symbols\n",
       (uintmax_t)VAR_14[VAR_18], VAR_18);
  }
  FUNC_0("%10ju  buckets         %8ju symbols (globals)\n",
      (uintmax_t)VAR_11, (uintmax_t)VAR_17);
 } else {
  FUNC_0("\nnbucket: %ju\n", (uintmax_t)VAR_11);
  FUNC_0("nchain: %ju\n\n", (uintmax_t)VAR_12);
  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
   FUNC_0("bucket[%zu]:\n\t%ju\n\n", VAR_18, (uintmax_t)VAR_9[VAR_18]);
  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
   FUNC_0("chain[%zu]:\n\t%ju\n\n", VAR_18, (uintmax_t)VAR_10[VAR_18]);
 }

}
