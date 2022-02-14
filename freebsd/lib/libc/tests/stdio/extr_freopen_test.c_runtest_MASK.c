
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char const*,char const*,char const*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char const*) ;
 int * FUNC_3 (char const*,char const*,int *) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, bool VAR_5)
{
 FILE *VAR_6, *VAR_7;
 const char *VAR_8;

 VAR_8 = VAR_3 != ((void*)0) ? VAR_3 : "<NULL>";
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_6 != ((void*)0),
     "fopen(\"%s\", \"%s\") failed; errno=%d", VAR_1, VAR_2, VAR_0);
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_5 == 0,
      "freopen(\"%s\", \"%s\", fopen(\"%s\", \"%s\")) succeeded "
      "unexpectedly", VAR_8, VAR_4, VAR_1, VAR_2);
  return;
 }
 FUNC_0(VAR_5 == 1,
     "freopen(\"%s\", \"%s\", fopen(\"%s\", \"%s\")) failed: %d",
     VAR_8, VAR_4, VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_7);
}
