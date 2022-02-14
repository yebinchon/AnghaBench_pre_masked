
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct test {char* locale; char* data; size_t wclen; size_t* mblen; } ;
typedef int st ;
typedef int mbstate_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (size_t,int,char*,size_t,int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*) ;
 size_t FUNC_6 (int*,char const**,int,int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (int ,char*) ;
 int VAR_7 ;
 int FUNC_10 (char*,char*,int) ;
 size_t FUNC_11 (char*,int,int *) ;
 size_t FUNC_12 (char*,int) ;

__attribute__((used)) static void
FUNC_13(const struct test *VAR_8, char VAR_9)
{
 wchar_t VAR_10[16 + 2];
 char VAR_11[128];
 char VAR_12[VAR_2];
 const char *VAR_13;
 char *VAR_14;
 mbstate_t VAR_15;
 mbstate_t *VAR_16 = ((void*)0);
 size_t VAR_17, VAR_18, VAR_19;

 FUNC_3(FUNC_9(VAR_0, "C"), "C");



 if (FUNC_9(VAR_1, VAR_8->locale) == ((void*)0)) {
  FUNC_5(VAR_7, "Locale %s not found.\n", VAR_8->locale);
  return;
 }


 (void)FUNC_10(VAR_11, VAR_8->data, VAR_6 | VAR_5);
 (void)FUNC_8("Checking sequence: \"%s\"\n", VAR_11);

 FUNC_0((VAR_14 = FUNC_9(VAR_0, ((void*)0))) != ((void*)0));
 (void)FUNC_8("Using locale: %s\n", VAR_14);

 if (VAR_9 == VAR_3) {
  (void)FUNC_7(&VAR_15, 0, sizeof(VAR_15));
  VAR_16 = &VAR_15;
 }

 VAR_10[VAR_8->wclen] = L'X';
 VAR_13 = VAR_8->data;
 VAR_17 = FUNC_6(VAR_10, &VAR_13, VAR_8->wclen + 2, ((void*)0));
 FUNC_2(VAR_17, VAR_8->wclen, "mbsrtowcs() returned: "
  "%zu, expected: %zu", VAR_17, VAR_8->wclen);
 FUNC_1(VAR_10[VAR_8->wclen], 0);

 for (VAR_19 = 0; VAR_19 < VAR_8->wclen + 1; VAR_19++) {
  if (VAR_9 == VAR_4)
   VAR_18 = FUNC_12(VAR_12, VAR_10[VAR_19]);
  else
   VAR_18 = FUNC_11(VAR_12, VAR_10[VAR_19], VAR_16);

  if (VAR_18 == VAR_8->mblen[VAR_19])
   continue;

  (void)FUNC_8("At position %zd:\n", VAR_19);
  (void)FUNC_8("  expected: %zd\n", VAR_8->mblen[VAR_19]);
  (void)FUNC_8("  got     : %zd\n", VAR_18);
  FUNC_4("Test failed");

 }

 (void)FUNC_8("Ok.\n");
}
