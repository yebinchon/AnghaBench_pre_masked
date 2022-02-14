
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
 int FUNC_0 (struct ptunit_suite,int ) ;
 int FUNC_1 (struct ptunit_suite,int ,struct test_fixture) ;
 struct ptunit_suite FUNC_2 (int,char**) ;
 int FUNC_3 (struct ptunit_suite*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_4(int VAR_16, char **VAR_17)
{
 struct test_fixture VAR_18;
 struct ptunit_suite VAR_19;

 VAR_18.init = VAR_15;
 VAR_18.fini = ((void*)0);

 VAR_19 = FUNC_2(VAR_16, VAR_17);

 FUNC_0(VAR_19, VAR_2);
 FUNC_0(VAR_19, VAR_1);
 FUNC_0(VAR_19, VAR_0);
 FUNC_0(VAR_19, VAR_3);

 FUNC_0(VAR_19, VAR_11);
 FUNC_0(VAR_19, VAR_10);
 FUNC_0(VAR_19, VAR_14);
 FUNC_1(VAR_19, VAR_12, VAR_18);

 FUNC_0(VAR_19, VAR_7);
 FUNC_1(VAR_19, VAR_6, VAR_18);
 FUNC_1(VAR_19, VAR_13, VAR_18);
 FUNC_0(VAR_19, VAR_8);

 FUNC_0(VAR_19, VAR_5);
 FUNC_1(VAR_19, VAR_4, VAR_18);

 FUNC_0(VAR_19, VAR_9);

 return FUNC_3(&VAR_19);
}
