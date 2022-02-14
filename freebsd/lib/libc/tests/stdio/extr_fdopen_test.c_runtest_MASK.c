
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char const*,int,char const*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char const*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, int VAR_2, const char *VAR_3, bool VAR_4)
{
 FILE *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_2);
 FUNC_0(VAR_6 != -1,
     "open(\"%s\", %#x) failed; errno=%d", VAR_1, VAR_2, VAR_0);

 VAR_5 = FUNC_3(VAR_6, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_6);
  FUNC_0(VAR_4 == 0,
      "fdopen(open(\"%s\", %#x), \"%s\") succeeded unexpectedly",
      VAR_1, VAR_2, VAR_3);
  return;
 }
 FUNC_0(VAR_4 == 1,
     "fdopen(open(\"%s\", %#x), \"%s\") failed; errno=%d",
     VAR_1, VAR_2, VAR_3, VAR_0);
 FUNC_2(VAR_5);
}
