
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct section {size_t link; int scn; } ;
struct readelf {size_t shnum; scalar_t__ ec; struct section* sl; } ;
struct TYPE_3__ {int d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct section*,int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(struct readelf *VAR_2, struct section *VAR_3)
{
 struct section *VAR_4;
 Elf_Data *VAR_5;
 uint32_t *VAR_6;
 uint32_t *VAR_7, *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;
 uint32_t *VAR_13, *VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 (void) FUNC_2();
 if ((VAR_5 = FUNC_3(VAR_3->scn, ((void*)0))) == ((void*)0)) {
  VAR_17 = FUNC_2();
  if (VAR_17 != 0)
   FUNC_8("elf_getdata failed: %s",
       FUNC_1(VAR_17));
  return;
 }
 if (VAR_5->d_size < 4 * sizeof(uint32_t)) {
  FUNC_8(".gnu.hash section too small");
  return;
 }
 VAR_6 = VAR_5->d_buf;
 VAR_9 = VAR_6[0];
 VAR_11 = VAR_6[1];
 VAR_12 = VAR_6[2];
 VAR_6 += 4;
 if (VAR_3->link >= VAR_2->shnum)
  return;
 VAR_4 = &VAR_2->sl[VAR_3->link];
 if (!FUNC_6(VAR_4, &VAR_18))
  return;
 if (VAR_11 >= (uint32_t)VAR_18) {
  FUNC_8("Malformed .gnu.hash section (symndx out of range)");
  return;
 }
 VAR_10 = VAR_18 - VAR_11;
 if (VAR_5->d_size != 4 * sizeof(uint32_t) + VAR_12 *
     (VAR_2->ec == VAR_0 ? sizeof(uint32_t) : sizeof(uint64_t)) +
     (VAR_9 + VAR_10) * sizeof(uint32_t)) {
  FUNC_8("Malformed .gnu.hash section");
  return;
 }
 VAR_7 = VAR_6 + (VAR_2->ec == VAR_0 ? VAR_12 : VAR_12 * 2);
 VAR_8 = VAR_7 + VAR_9;

 VAR_15 = 0;
 if ((VAR_13 = FUNC_0(VAR_9, sizeof(*VAR_13))) == ((void*)0))
  FUNC_4(VAR_1, "calloc failed");
 for (VAR_19 = 0; (uint32_t)VAR_19 < VAR_9; VAR_19++)
  for (VAR_20 = VAR_7[VAR_19]; VAR_20 > 0 && (uint32_t)VAR_20 - VAR_11 < VAR_10;
       VAR_20++) {
   if (++VAR_13[VAR_19] > VAR_15)
    VAR_15 = VAR_13[VAR_19];
   if (VAR_8[VAR_20 - VAR_11] & 1)
    break;
  }
 if ((VAR_14 = FUNC_0(VAR_15 + 1, sizeof(*VAR_14))) == ((void*)0))
  FUNC_4(VAR_1, "calloc failed");
 for (VAR_19 = 0; (uint32_t)VAR_19 < VAR_9; VAR_19++)
  VAR_14[VAR_13[VAR_19]]++;
 FUNC_7("Histogram for bucket list length (total of %u buckets):\n",
     VAR_9);
 FUNC_7(" Length\tNumber\t\t%% of total\tCoverage\n");
 VAR_16 = 0;
 for (VAR_19 = 0; (uint32_t)VAR_19 <= VAR_15; VAR_19++) {
  VAR_16 += VAR_14[VAR_19] * VAR_19;
  FUNC_7("%7u\t%-10u\t(%5.1f%%)\t%5.1f%%\n", VAR_19, VAR_14[VAR_19],
      VAR_14[VAR_19] * 100.0 / VAR_9, VAR_16 * 100.0 / (VAR_10 - 1));
 }
 FUNC_5(VAR_14);
 FUNC_5(VAR_13);
}
