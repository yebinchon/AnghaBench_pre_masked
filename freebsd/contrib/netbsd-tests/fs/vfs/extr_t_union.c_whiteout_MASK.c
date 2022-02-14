
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int atf_tc_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int const*,void*,char*,int ) ;
 int FUNC_5 (int const*,void**,char*,int,int *) ;
 int FUNC_6 (int const*,char*,int ) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct stat*) ;
 int FUNC_12 (char const*,int ) ;

__attribute__((used)) static void
FUNC_13(const atf_tc_t *VAR_6, const char *VAR_7)
{
 char VAR_8[VAR_2];
 struct stat VAR_9;
 void *VAR_10;





 FUNC_3(FUNC_5(VAR_6, &VAR_10, "daimage", 1024*1024*5, ((void*)0)));
 FUNC_3(FUNC_4(VAR_6, VAR_10, "/lower", 0));


 FUNC_3(FUNC_8("/lower"));
 FUNC_3(FUNC_9(VAR_5, 0777));
 FUNC_3(FUNC_9(VAR_4, 0777));
 FUNC_3(FUNC_8("/"));

 FUNC_3(FUNC_6(VAR_6, "/lower", 0));
 FUNC_3(FUNC_4(VAR_6, VAR_10, "/lower", VAR_3));

 FUNC_7(VAR_7, VAR_8);

 FUNC_1();
 FUNC_0(VAR_1, FUNC_10(VAR_5) == -1);
 FUNC_3(FUNC_10(VAR_4));
 FUNC_3(FUNC_10(VAR_5));
 FUNC_0(VAR_0, FUNC_11(VAR_4, &VAR_9) == -1);
 FUNC_0(VAR_0, FUNC_11(VAR_5, &VAR_9) == -1);

 FUNC_3(FUNC_9(VAR_5, 0777));
 FUNC_3(FUNC_11(VAR_5, &VAR_9));
 FUNC_0(VAR_0, FUNC_11(VAR_4, &VAR_9) == -1);
 FUNC_2();

 FUNC_3(FUNC_12(VAR_7, 0));
}
