
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int command ;
typedef int atf_tc_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int const*,char*) ;
 int FUNC_3 (int *,int const) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*,int const) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(const atf_tc_t *VAR_1, const int VAR_2)
{
 FILE *VAR_3;
 char VAR_4[1024];

 FUNC_0((VAR_3 = FUNC_5("out", "w")) != ((void*)0));
 FUNC_3(VAR_3, VAR_2);
 FUNC_4(VAR_3);





 FUNC_6(VAR_4, sizeof(VAR_4), "diff -u %s/d_bitstring_%d.out out",
     FUNC_2(VAR_1, "srcdir"), VAR_2);
 if (FUNC_7(VAR_4) != VAR_0)
  FUNC_1("Test failed; see output for details");
}
