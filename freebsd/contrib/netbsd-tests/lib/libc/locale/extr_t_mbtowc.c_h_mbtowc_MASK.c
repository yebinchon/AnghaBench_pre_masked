
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (char*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int ,char*,char const*) ;
 size_t FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (int ,char const*) ;
 int VAR_6 ;
 char* FUNC_7 (size_t) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int) ;
 size_t FUNC_10 (int *,int) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_7, const char *VAR_8, const char *VAR_9)
{
 char VAR_10[64];
 size_t VAR_11, VAR_12;
 char *VAR_13;

 FUNC_2(FUNC_6(VAR_1, "C"), "C");



 if (FUNC_6(VAR_2, VAR_7) == ((void*)0)) {
  FUNC_3(VAR_6, "Locale %s not found.\n", VAR_7);
  return;
 }


 FUNC_0((VAR_13 = FUNC_6(VAR_1, ((void*)0))) != ((void*)0));
 (void)FUNC_5("Using locale: %s\n", VAR_13);

 VAR_11 = FUNC_10(((void*)0), L'\0');
 (void)FUNC_5("Locale is state-%sdependent\n",
  VAR_11 ? "in" : "");


 VAR_12 = FUNC_4(((void*)0), ((void*)0), 0);
 FUNC_0(VAR_11 ? VAR_12 : !VAR_12);

 (void)FUNC_9(VAR_10, VAR_8, VAR_4 | VAR_3);
 (void)FUNC_5("Checking illegal sequence: \"%s\"\n", VAR_10);

 VAR_12 = FUNC_4(((void*)0), VAR_8, FUNC_8(VAR_8));
 (void)FUNC_5("mbtowc() returned: %zd\n", VAR_12);
 FUNC_1(VAR_12, (size_t)-1);
 (void)FUNC_5("errno: %s\n", FUNC_7(VAR_5));
 FUNC_1(VAR_5, VAR_0);


 if (VAR_11) {

  VAR_12 = FUNC_4(((void*)0), ((void*)0), 0);
  FUNC_0(VAR_11 ? VAR_12 : !VAR_12);
 }


 (void)FUNC_9(VAR_10, VAR_9, VAR_4 | VAR_3);
 (void)FUNC_5("Checking legal sequence: \"%s\"\n", VAR_10);

 VAR_5 = 0;
 VAR_12 = FUNC_4(((void*)0), VAR_9, FUNC_8(VAR_9));
 (void)FUNC_5("mbtowc() returned: %zd\n", VAR_12);
 FUNC_0(VAR_12 != (size_t)-1);
 (void)FUNC_5("errno: %s\n", FUNC_7(VAR_5));
 FUNC_1(VAR_5, 0);

 (void)FUNC_5("Ok.\n");
}
