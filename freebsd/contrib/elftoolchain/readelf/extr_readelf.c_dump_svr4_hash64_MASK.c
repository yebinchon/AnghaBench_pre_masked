
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct section {int scn; } ;
struct TYPE_9__ {int * e_ident; } ;
struct readelf {TYPE_1__ ehdr; int elf; } ;
struct TYPE_10__ {int d_size; int* d_buf; int d_type; } ;
typedef TYPE_2__ Elf_Data ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int*) ;
 TYPE_2__* FUNC_6 (int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(struct readelf *VAR_3, struct section *VAR_4)
{
 Elf_Data *VAR_5, VAR_6;
 uint64_t *VAR_7;
 uint64_t VAR_8, VAR_9;
 uint64_t *VAR_10, *VAR_11;
 uint64_t *VAR_12, *VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;






 (void) FUNC_2();
 if ((VAR_5 = FUNC_3(VAR_4->scn, ((void*)0))) == ((void*)0)) {
  VAR_16 = FUNC_2();
  if (VAR_16 != 0)
   FUNC_9("elf_rawdata failed: %s",
       FUNC_1(VAR_16));
  return;
 }
 VAR_5->d_type = VAR_1;
 FUNC_7(&VAR_6, VAR_5, sizeof(Elf_Data));
 if (FUNC_6(VAR_3->elf, &VAR_6, VAR_5,
  VAR_3->ehdr.e_ident[VAR_0]) != &VAR_6) {
  FUNC_9("gelf_xlatetom failed: %s", FUNC_1(-1));
  return;
 }
 if (VAR_6.d_size < 2 * sizeof(uint64_t)) {
  FUNC_9(".hash section too small");
  return;
 }
 VAR_7 = VAR_6.d_buf;
 VAR_8 = VAR_7[0];
 VAR_9 = VAR_7[1];
 if (VAR_8 <= 0 || VAR_9 <= 0) {
  FUNC_9("Malformed .hash section");
  return;
 }
 if (VAR_5->d_size != (VAR_8 + VAR_9 + 2) * sizeof(uint32_t)) {
  FUNC_9("Malformed .hash section");
  return;
 }
 VAR_10 = &VAR_7[2];
 VAR_11 = &VAR_7[2 + VAR_8];

 VAR_14 = 0;
 if ((VAR_12 = FUNC_0(VAR_8, sizeof(*VAR_12))) == ((void*)0))
  FUNC_4(VAR_2, "calloc failed");
 for (VAR_17 = 0; (uint32_t)VAR_17 < VAR_8; VAR_17++)
  for (VAR_18 = VAR_10[VAR_17]; VAR_18 > 0 && (uint32_t)VAR_18 < VAR_9; VAR_18 = VAR_11[VAR_18])
   if (++VAR_12[VAR_17] > VAR_14)
    VAR_14 = VAR_12[VAR_17];
 if ((VAR_13 = FUNC_0(VAR_14 + 1, sizeof(*VAR_13))) == ((void*)0))
  FUNC_4(VAR_2, "calloc failed");
 for (VAR_17 = 0; (uint64_t)VAR_17 < VAR_8; VAR_17++)
  VAR_13[VAR_12[VAR_17]]++;
 FUNC_8("Histogram for bucket list length (total of %ju buckets):\n",
     (uintmax_t)VAR_8);
 FUNC_8(" Length\tNumber\t\t%% of total\tCoverage\n");
 VAR_15 = 0;
 for (VAR_17 = 0; (uint64_t)VAR_17 <= VAR_14; VAR_17++) {
  VAR_15 += VAR_13[VAR_17] * VAR_17;
  FUNC_8("%7u\t%-10ju\t(%5.1f%%)\t%5.1f%%\n", VAR_17, (uintmax_t)VAR_13[VAR_17],
      VAR_13[VAR_17] * 100.0 / VAR_8, VAR_15 * 100.0 / (VAR_9 - 1));
 }
 FUNC_5(VAR_13);
 FUNC_5(VAR_12);
}
