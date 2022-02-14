
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitstr_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int const) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int const) ;
 int FUNC_6 (int *,int,int const) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int const) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int const) ;

__attribute__((used)) static void
FUNC_14(FILE *VAR_0, const int VAR_1)
{
 int VAR_2;
 bitstr_t *VAR_3;

 FUNC_2(VAR_1 >= 4);

 (void) FUNC_11(VAR_0, "Testing with TEST_LENGTH = %d\n\n", VAR_1);

 (void) FUNC_11(VAR_0, "test _bit_byte, _bit_mask, and bitstr_size\n");
 (void) FUNC_11(VAR_0, "  i   _bit_byte(i)   _bit_mask(i) bitstr_size(i)\n");

 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  (void) FUNC_11(VAR_0, "%3d%15u%15u%15zu\n",
   VAR_2, FUNC_0(VAR_2), FUNC_1(VAR_2), FUNC_9(VAR_2));
 }

 VAR_3 = FUNC_3(VAR_1);
 FUNC_10(VAR_3, VAR_1);
 (void) FUNC_11(VAR_0, "\ntest bit_alloc, clearbits, bit_ffc, bit_ffs\n");
 (void) FUNC_11(VAR_0, "be:   0  -1 ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '0');
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 (void) FUNC_11(VAR_0, "\ntest bit_set\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2+=3)
  FUNC_7(VAR_3, VAR_2);
 (void) FUNC_11(VAR_0, "be:   1   0 ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", "100"[VAR_2 % 3]);
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 (void) FUNC_11(VAR_0, "\ntest bit_clear\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2+=6)
  FUNC_4(VAR_3, VAR_2);
 (void) FUNC_11(VAR_0, "be:   0   3 ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", "000100"[VAR_2 % 6]);
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 (void) FUNC_11(VAR_0, "\ntest bit_test using previous bitstring\n");
 (void) FUNC_11(VAR_0, "  i    bit_test(i)\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%3d%15d\n", VAR_2, FUNC_8(VAR_3, VAR_2));

 FUNC_10(VAR_3, VAR_1);
 (void) FUNC_11(VAR_0, "\ntest clearbits\n");
 (void) FUNC_11(VAR_0, "be:   0  -1 ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '0');
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 (void) FUNC_11(VAR_0, "\ntest bit_nset and bit_nclear\n");
 FUNC_6(VAR_3, 1, VAR_1 - 2);
 (void) FUNC_11(VAR_0, "be:   0   1 0");
 for (VAR_2=0; VAR_2 < VAR_1 - 2; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '1');
 (void) FUNC_11(VAR_0, "0\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 FUNC_5(VAR_3, 2, VAR_1 - 3);
 (void) FUNC_11(VAR_0, "be:   0   1 01");
 for (VAR_2=0; VAR_2 < VAR_1 - 4; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '0');
 (void) FUNC_11(VAR_0, "10\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 FUNC_5(VAR_3, 0, VAR_1 - 1);
 (void) FUNC_11(VAR_0, "be:   0  -1 ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '0');
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);
 FUNC_6(VAR_3, 0, VAR_1 - 2);
 (void) FUNC_11(VAR_0, "be: %3d   0 ",VAR_1 - 1);
 for (VAR_2=0; VAR_2 < VAR_1 - 1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '1');
 FUNC_11(VAR_0, "%c", '0');
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);
 FUNC_5(VAR_3, 0, VAR_1 - 1);
 (void) FUNC_11(VAR_0, "be:   0  -1 ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  (void) FUNC_11(VAR_0, "%c", '0');
 (void) FUNC_11(VAR_0, "\nis: ");
 FUNC_13(VAR_0, VAR_3, VAR_1);

 (void) FUNC_11(VAR_0, "\n");
 (void) FUNC_11(VAR_0, "first 1 bit should move right 1 position each line\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_5(VAR_3, 0, VAR_1 - 1);
  FUNC_6(VAR_3, VAR_2, VAR_1 - 1);
  (void) FUNC_11(VAR_0, "%3d ", VAR_2); FUNC_13(VAR_0, VAR_3, VAR_1);
 }

 (void) FUNC_11(VAR_0, "\n");
 (void) FUNC_11(VAR_0, "first 0 bit should move right 1 position each line\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_6(VAR_3, 0, VAR_1 - 1);
  FUNC_5(VAR_3, VAR_2, VAR_1 - 1);
  (void) FUNC_11(VAR_0, "%3d ", VAR_2); FUNC_13(VAR_0, VAR_3, VAR_1);
 }

 (void) FUNC_11(VAR_0, "\n");
 (void) FUNC_11(VAR_0, "first 0 bit should move left 1 position each line\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_5(VAR_3, 0, VAR_1 - 1);
  FUNC_6(VAR_3, 0, VAR_1 - 1 - VAR_2);
  (void) FUNC_11(VAR_0, "%3d ", VAR_2); FUNC_13(VAR_0, VAR_3, VAR_1);
 }

 (void) FUNC_11(VAR_0, "\n");
 (void) FUNC_11(VAR_0, "first 1 bit should move left 1 position each line\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_6(VAR_3, 0, VAR_1 - 1);
  FUNC_5(VAR_3, 0, VAR_1 - 1 - VAR_2);
  (void) FUNC_11(VAR_0, "%3d ", VAR_2); FUNC_13(VAR_0, VAR_3, VAR_1);
 }

 (void) FUNC_11(VAR_0, "\n");
 (void) FUNC_11(VAR_0, "0 bit should move right 1 position each line\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_6(VAR_3, 0, VAR_1 - 1);
  FUNC_5(VAR_3, VAR_2, VAR_2);
  (void) FUNC_11(VAR_0, "%3d ", VAR_2); FUNC_13(VAR_0, VAR_3, VAR_1);
 }

 (void) FUNC_11(VAR_0, "\n");
 (void) FUNC_11(VAR_0, "1 bit should move right 1 position each line\n");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_5(VAR_3, 0, VAR_1 - 1);
  FUNC_6(VAR_3, VAR_2, VAR_2);
  (void) FUNC_11(VAR_0, "%3d ", VAR_2); FUNC_13(VAR_0, VAR_3, VAR_1);
 }

 (void) FUNC_12(VAR_3);
}
