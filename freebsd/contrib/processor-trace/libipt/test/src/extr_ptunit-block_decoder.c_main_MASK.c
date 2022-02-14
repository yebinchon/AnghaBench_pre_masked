
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_fixture {int * fini; int init; } ;
struct ptunit_suite {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ptunit_suite,int ) ;
 int FUNC_1 (struct ptunit_suite,int ,struct test_fixture) ;
 struct ptunit_suite FUNC_2 (int,char**) ;
 int FUNC_3 (struct ptunit_suite*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int FUNC_4(int VAR_21, char **VAR_22)
{
 struct test_fixture VAR_23;
 struct ptunit_suite VAR_24;

 VAR_23.init = VAR_19;
 VAR_23.fini = ((void*)0);

 VAR_24 = FUNC_2(VAR_21, VAR_22);

 FUNC_0(VAR_24, VAR_4);
 FUNC_0(VAR_24, VAR_3);
 FUNC_0(VAR_24, VAR_0);
 FUNC_0(VAR_24, VAR_6);

 FUNC_0(VAR_24, VAR_16);
 FUNC_0(VAR_24, VAR_15);
 FUNC_0(VAR_24, VAR_18);
 FUNC_1(VAR_24, VAR_17, VAR_23);

 FUNC_0(VAR_24, VAR_11);
 FUNC_1(VAR_24, VAR_10, VAR_23);
 FUNC_0(VAR_24, VAR_12);

 FUNC_0(VAR_24, VAR_9);
 FUNC_0(VAR_24, VAR_14);

 FUNC_0(VAR_24, VAR_8);
 FUNC_1(VAR_24, VAR_7, VAR_23);

 FUNC_0(VAR_24, VAR_20);
 FUNC_0(VAR_24, VAR_2);
 FUNC_0(VAR_24, VAR_1);

 FUNC_0(VAR_24, VAR_13);
 FUNC_0(VAR_24, VAR_5);

 return FUNC_3(&VAR_24);
}
