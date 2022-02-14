
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {char* name; } ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 struct test* VAR_1 ;

__attribute__((used)) static void FUNC_2(const char* VAR_2)
{
  FUNC_1("%s %s: run a string related benchmark.\n"
         "usage: %s [-c block-size] [-l loop-count] [-a alignment|src_alignment:dst_alignment] [-f] [-t test-name] [-r run-id]\n"
         , VAR_2, VAR_0, VAR_2);

  FUNC_1("Tests:");

  for (const struct test *VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++)
    {
      FUNC_1(" %s", VAR_3->name);
    }

  FUNC_1("\n");

  FUNC_0(-1);
}
