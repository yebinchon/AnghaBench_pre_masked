
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct section {int scn; } ;
struct TYPE_3__ {int d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct section *VAR_1)
{
 Elf_Data *VAR_2;
 uint32_t *VAR_3;
 uint32_t VAR_4, VAR_5;
 uint32_t *VAR_6, *VAR_7;
 uint32_t *VAR_8, *VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;


 (void) FUNC_2();
 if ((VAR_2 = FUNC_3(VAR_1->scn, ((void*)0))) == ((void*)0)) {
  VAR_12 = FUNC_2();
  if (VAR_12 != 0)
   FUNC_7("elf_getdata failed: %s", FUNC_1(VAR_12));
  return;
 }
 if (VAR_2->d_size < 2 * sizeof(uint32_t)) {
  FUNC_7(".hash section too small");
  return;
 }
 VAR_3 = VAR_2->d_buf;
 VAR_4 = VAR_3[0];
 VAR_5 = VAR_3[1];
 if (VAR_4 <= 0 || VAR_5 <= 0) {
  FUNC_7("Malformed .hash section");
  return;
 }
 if (VAR_2->d_size != (VAR_4 + VAR_5 + 2) * sizeof(uint32_t)) {
  FUNC_7("Malformed .hash section");
  return;
 }
 VAR_6 = &VAR_3[2];
 VAR_7 = &VAR_3[2 + VAR_4];

 VAR_10 = 0;
 if ((VAR_8 = FUNC_0(VAR_4, sizeof(*VAR_8))) == ((void*)0))
  FUNC_4(VAR_0, "calloc failed");
 for (VAR_13 = 0; (uint32_t)VAR_13 < VAR_4; VAR_13++)
  for (VAR_14 = VAR_6[VAR_13]; VAR_14 > 0 && (uint32_t)VAR_14 < VAR_5; VAR_14 = VAR_7[VAR_14])
   if (++VAR_8[VAR_13] > VAR_10)
    VAR_10 = VAR_8[VAR_13];
 if ((VAR_9 = FUNC_0(VAR_10 + 1, sizeof(*VAR_9))) == ((void*)0))
  FUNC_4(VAR_0, "calloc failed");
 for (VAR_13 = 0; (uint32_t)VAR_13 < VAR_4; VAR_13++)
  VAR_9[VAR_8[VAR_13]]++;
 FUNC_6("\nHistogram for bucket list length (total of %u buckets):\n",
     VAR_4);
 FUNC_6(" Length\tNumber\t\t%% of total\tCoverage\n");
 VAR_11 = 0;
 for (VAR_13 = 0; (uint32_t)VAR_13 <= VAR_10; VAR_13++) {
  VAR_11 += VAR_9[VAR_13] * VAR_13;
  FUNC_6("%7u\t%-10u\t(%5.1f%%)\t%5.1f%%\n", VAR_13, VAR_9[VAR_13],
      VAR_9[VAR_13] * 100.0 / VAR_4, VAR_11 * 100.0 / (VAR_5 - 1));
 }
 FUNC_5(VAR_9);
 FUNC_5(VAR_8);
}
