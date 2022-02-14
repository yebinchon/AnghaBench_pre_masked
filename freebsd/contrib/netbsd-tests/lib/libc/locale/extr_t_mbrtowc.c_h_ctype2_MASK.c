
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int wbuf ;
struct test {char* locale; char* data; int* wchars; int* widths; int length; } ;
typedef int st ;
typedef int mbstate_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (size_t,int ,char*,int,...) ;
 int FUNC_3 (char*,char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 char const* VAR_6 ;
 int FUNC_5 (int ,char*,char*) ;
 size_t FUNC_6 (int*,char const*,size_t,int*) ;
 scalar_t__ FUNC_7 (int*) ;
 size_t FUNC_8 (int*,char const**,int,int*) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (int ,char*) ;
 int VAR_7 ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_13(const struct test *VAR_8, bool VAR_9)
{
 mbstate_t *VAR_10;
 mbstate_t VAR_11;
 char VAR_12[VAR_3];
 char *VAR_13;
 size_t VAR_14;

 FUNC_3(FUNC_11(VAR_1, "C"), "C");



 if (FUNC_11(VAR_2, VAR_8->locale) == ((void*)0)) {
  FUNC_5(VAR_7, "Locale %s not found.\n", VAR_8->locale);
  return;
 }


 (void)FUNC_12(VAR_12, VAR_8->data, VAR_5 | VAR_4);
 (void)FUNC_10("Checking string: \"%s\"\n", VAR_12);

 FUNC_0((VAR_13 = FUNC_11(VAR_1, ((void*)0))) != ((void*)0));
 (void)FUNC_10("Using locale: %s\n", VAR_13);

 (void)FUNC_10("Using mbstate: %s\n", VAR_9 ? "yes" : "no");

 (void)FUNC_9(&VAR_11, 0, sizeof(VAR_11));

 VAR_10 = VAR_9 ? &VAR_11 : 0;

 for (VAR_14 = 9; VAR_14 > 0; VAR_14--) {
  const char *VAR_15 = VAR_8->data;
  wchar_t VAR_16;
  size_t VAR_17 = 0;
  int VAR_18 = 0;

  FUNC_0(FUNC_7(VAR_10) != 0);

  for (;;) {
   size_t VAR_19 = FUNC_6(&VAR_16, VAR_15, VAR_14, VAR_10);

   if (VAR_19 == 0)
    break;

   if (VAR_19 == (size_t)-2) {
    VAR_15 += VAR_14;
    VAR_18 += VAR_14;

    continue;
   }
   if (VAR_19 == (size_t)-1) {
    FUNC_1(VAR_6, VAR_0);
    FUNC_4("Invalid sequence");

   }

   VAR_18 += VAR_19;
   VAR_15 += VAR_19;

   if (VAR_16 != VAR_8->wchars[VAR_17] ||
       VAR_18 != VAR_8->widths[VAR_17]) {
    (void)FUNC_10("At position %zd:\n", VAR_17);
    (void)FUNC_10("  expected: 0x%04X (%u)\n",
     VAR_8->wchars[VAR_17], VAR_8->widths[VAR_17]);
    (void)FUNC_10("  got     : 0x%04X (%u)\n",
     VAR_16, VAR_18);
    FUNC_4("Test failed");
   }

   VAR_17++;
   VAR_18 = 0;
  }

  FUNC_2(VAR_16, 0, "Incorrect terminating character: "
   "0x%04X (expected: 0x00)", VAR_16);

  FUNC_2(VAR_17, VAR_8->length, "Incorrect length: "
   "%zd (expected: %zd)", VAR_17, VAR_8->length);
 }

 {
  wchar_t VAR_20[VAR_3];
  size_t VAR_21;
  char const *VAR_22 = VAR_8->data;
  int VAR_23;

  (void)FUNC_9(VAR_20, 0xFF, sizeof(VAR_20));

  VAR_21 = FUNC_8(VAR_20, &VAR_22, VAR_3, VAR_10);

  FUNC_2(VAR_21, VAR_8->length, "Incorrect length: %zd "
   "(expected: %zd)", VAR_21, VAR_8->length);
  FUNC_1(VAR_22, ((void*)0));

  for (VAR_23 = 0; VAR_20[VAR_23] != 0; ++VAR_23) {
   if (VAR_20[VAR_23] == VAR_8->wchars[VAR_23])
    continue;

   (void)FUNC_10("At position %d:\n", VAR_23);
   (void)FUNC_10("  expected: 0x%04X\n", VAR_8->wchars[VAR_23]);
   (void)FUNC_10("  got     : 0x%04X\n", VAR_20[VAR_23]);
   FUNC_4("Test failed");
  }

  FUNC_2((size_t)VAR_23, VAR_8->length, "Incorrect length: "
   "%d (expected: %zd)", VAR_23, VAR_8->length);
 }

 (void)FUNC_10("Ok.\n");
}
