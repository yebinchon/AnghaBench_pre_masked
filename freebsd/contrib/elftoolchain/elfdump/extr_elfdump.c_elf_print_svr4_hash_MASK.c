
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct section {int link; int scn; int name; } ;
struct elfdump {int flags; } ;
typedef int idx ;
struct TYPE_3__ {int d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct elfdump*,int ,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(struct elfdump *VAR_2, struct section *VAR_3)
{
 Elf_Data *VAR_4;
 uint32_t *VAR_5;
 uint32_t *VAR_6, *VAR_7;
 uint32_t VAR_8, VAR_9;
 uint32_t *VAR_10, *VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15;
 int VAR_16, VAR_17;
 char VAR_18[10];

 if (VAR_2->flags & VAR_1)
  FUNC_0("\nHash Section:  %s\n", VAR_3->name);
 else
  FUNC_0("\nhash table (%s):\n", VAR_3->name);
 (void) FUNC_3();
 if ((VAR_4 = FUNC_4(VAR_3->scn, ((void*)0))) == ((void*)0)) {
  VAR_17 = FUNC_3();
  if (VAR_17 != 0)
   FUNC_8("elf_getdata failed: %s",
       FUNC_2(VAR_17));
  return;
 }
 if (VAR_4->d_size < 2 * sizeof(uint32_t)) {
  FUNC_8(".hash section too small");
  return;
 }
 VAR_5 = VAR_4->d_buf;
 VAR_8 = VAR_5[0];
 VAR_9 = VAR_5[1];
 if (VAR_8 <= 0 || VAR_9 <= 0) {
  FUNC_8("Malformed .hash section");
  return;
 }
 if (VAR_4->d_size !=
     ((uint64_t)VAR_8 + (uint64_t)VAR_9 + 2) * sizeof(uint32_t)) {
  FUNC_8("Malformed .hash section");
  return;
 }
 VAR_6 = &VAR_5[2];
 VAR_7 = &VAR_5[2 + VAR_8];

 if (VAR_2->flags & VAR_1) {
  VAR_12 = 0;
  if ((VAR_10 = FUNC_1(VAR_8, sizeof(*VAR_10))) == ((void*)0))
   FUNC_5(VAR_0, "calloc failed");
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   for (VAR_15 = VAR_6[VAR_14]; VAR_15 > 0 && VAR_15 < VAR_9; VAR_15 = VAR_7[VAR_15])
    if (++VAR_10[VAR_14] > VAR_12)
     VAR_12 = VAR_10[VAR_14];
  if ((VAR_11 = FUNC_1(VAR_12 + 1, sizeof(*VAR_11))) == ((void*)0))
   FUNC_5(VAR_0, "calloc failed");
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   VAR_11[VAR_10[VAR_14]]++;
  FUNC_0("    bucket    symndx    name\n");
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   VAR_16 = 1;
   for (VAR_15 = VAR_6[VAR_14]; VAR_15 > 0 && VAR_15 < VAR_9; VAR_15 = VAR_7[VAR_15]) {
    if (VAR_16) {
     FUNC_0("%10d  ", VAR_14);
     VAR_16 = 0;
    } else
     FUNC_0("            ");
    FUNC_7(VAR_18, sizeof(VAR_18), "[%d]", VAR_15);
    FUNC_0("%-10s  ", VAR_18);
    FUNC_0("%s\n", FUNC_6(VAR_2, VAR_3->link, VAR_15));
   }
  }
  FUNC_0("\n");
  VAR_13 = 0;
  for (VAR_14 = 0; VAR_14 <= VAR_12; VAR_14++) {
   VAR_13 += VAR_11[VAR_14] * VAR_14;
   FUNC_0("%10u  buckets contain %8d symbols\n", VAR_11[VAR_14], VAR_14);
  }
  FUNC_0("%10u  buckets         %8u symbols (globals)\n", VAR_8,
      VAR_13);
 } else {
  FUNC_0("\nnbucket: %u\n", VAR_8);
  FUNC_0("nchain: %u\n\n", VAR_9);
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   FUNC_0("bucket[%d]:\n\t%u\n\n", VAR_14, VAR_6[VAR_14]);
  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
   FUNC_0("chain[%d]:\n\t%u\n\n", VAR_14, VAR_7[VAR_14]);
 }
}
