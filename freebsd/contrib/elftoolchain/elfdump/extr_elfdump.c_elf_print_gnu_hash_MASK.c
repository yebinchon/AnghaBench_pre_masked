
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct section {size_t link; int scn; int name; } ;
struct elfdump {int flags; size_t shnum; scalar_t__ ec; struct section* sl; } ;
typedef int idx ;
struct TYPE_3__ {int d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct section*,int*) ;
 int FUNC_7 (struct elfdump*,size_t,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(struct elfdump *VAR_3, struct section *VAR_4)
{
 struct section *VAR_5;
 Elf_Data *VAR_6;
 uint32_t *VAR_7;
 uint32_t *VAR_8, *VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 uint32_t *VAR_15, *VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;
 char VAR_24[10];

 if (VAR_3->flags & VAR_2)
  FUNC_0("\nGNU Hash Section:  %s\n", VAR_4->name);
 else
  FUNC_0("\ngnu hash table (%s):\n", VAR_4->name);
 (void) FUNC_3();
 if ((VAR_6 = FUNC_4(VAR_4->scn, ((void*)0))) == ((void*)0)) {
  VAR_22 = FUNC_3();
  if (VAR_22 != 0)
   FUNC_9("elf_getdata failed: %s",
       FUNC_2(VAR_22));
  return;
 }
 if (VAR_6->d_size < 4 * sizeof(uint32_t)) {
  FUNC_9(".gnu.hash section too small");
  return;
 }
 VAR_7 = VAR_6->d_buf;
 VAR_10 = VAR_7[0];
 VAR_12 = VAR_7[1];
 VAR_13 = VAR_7[2];
 VAR_14 = VAR_7[3];
 VAR_7 += 4;
 if (VAR_4->link >= VAR_3->shnum) {
  FUNC_9("Malformed .gnu.hash section");
  return;
 }
 VAR_5 = &VAR_3->sl[VAR_4->link];
 if (!FUNC_6(VAR_5, &VAR_23))
  return;
 if (VAR_12 >= (uint32_t)VAR_23) {
  FUNC_9("Malformed .gnu.hash section");
  return;
 }
 VAR_11 = VAR_23 - VAR_12;
 if (VAR_6->d_size != 4 * sizeof(uint32_t) + VAR_13 *
     (VAR_3->ec == VAR_0 ? sizeof(uint32_t) : sizeof(uint64_t)) +
     ((uint64_t)VAR_10 + (uint64_t)VAR_11) * sizeof(uint32_t)) {
  FUNC_9("Malformed .gnu.hash section");
  return;
 }
 VAR_8 = VAR_7 + (VAR_3->ec == VAR_0 ? VAR_13 : VAR_13 * 2);
 VAR_9 = VAR_8 + VAR_10;

 if (VAR_3->flags & VAR_2) {
  VAR_17 = 0;
  if ((VAR_15 = FUNC_1(VAR_10, sizeof(*VAR_15))) == ((void*)0))
   FUNC_5(VAR_1, "calloc failed");
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
   for (VAR_20 = VAR_8[VAR_19]; VAR_20 > 0 && VAR_20 - VAR_12 < VAR_11; VAR_20++) {
    if (++VAR_15[VAR_19] > VAR_17)
     VAR_17 = VAR_15[VAR_19];
    if (VAR_9[VAR_20 - VAR_12] & 1)
     break;
   }
  if ((VAR_16 = FUNC_1(VAR_17 + 1, sizeof(*VAR_16))) == ((void*)0))
   FUNC_5(VAR_1, "calloc failed");
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
   VAR_16[VAR_15[VAR_19]]++;
  FUNC_0("    bucket    symndx    name\n");
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
   VAR_21 = 1;
   for (VAR_20 = VAR_8[VAR_19]; VAR_20 > 0 && VAR_20 - VAR_12 < VAR_11; VAR_20++) {
    if (VAR_21) {
     FUNC_0("%10d  ", VAR_19);
     VAR_21 = 0;
    } else
     FUNC_0("            ");
    FUNC_8(VAR_24, sizeof(VAR_24), "[%d]", VAR_20 );
    FUNC_0("%-10s  ", VAR_24);
    FUNC_0("%s\n", FUNC_7(VAR_3, VAR_4->link, VAR_20));
    if (VAR_9[VAR_20 - VAR_12] & 1)
     break;
   }
  }
  FUNC_0("\n");
  VAR_18 = 0;
  for (VAR_19 = 0; VAR_19 <= VAR_17; VAR_19++) {
   VAR_18 += VAR_16[VAR_19] * VAR_19;
   FUNC_0("%10u  buckets contain %8d symbols\n", VAR_16[VAR_19], VAR_19);
  }
  FUNC_0("%10u  buckets         %8u symbols (globals)\n", VAR_10,
      VAR_18);
 } else {
  FUNC_0("\nnbucket: %u\n", VAR_10);
  FUNC_0("symndx: %u\n", VAR_12);
  FUNC_0("maskwords: %u\n", VAR_13);
  FUNC_0("shift2: %u\n", VAR_14);
  FUNC_0("nchain: %u\n\n", VAR_11);
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
   FUNC_0("bucket[%d]:\n\t%u\n\n", VAR_19, VAR_8[VAR_19]);
  for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++)
   FUNC_0("chain[%d]:\n\t%u\n\n", VAR_19, VAR_9[VAR_19]);
 }
}
