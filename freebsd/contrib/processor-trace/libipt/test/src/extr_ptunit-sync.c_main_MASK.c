
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_fixture {int * fini; int init; } ;
struct ptunit_suite {int dummy; } ;


 int FUNC_0 (struct ptunit_suite,int ,struct sync_fixture) ;
 struct ptunit_suite FUNC_1 (int,char**) ;
 int FUNC_2 (struct ptunit_suite*) ;
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
 int VAR_14 ;

int FUNC_3(int VAR_15, char **VAR_16)
{
 struct sync_fixture VAR_17;
 struct ptunit_suite VAR_18;

 VAR_17.init = VAR_0;
 VAR_17.fini = ((void*)0);

 VAR_18 = FUNC_1(VAR_15, VAR_16);

 FUNC_0(VAR_18, VAR_13, VAR_17);
 FUNC_0(VAR_18, VAR_6, VAR_17);

 FUNC_0(VAR_18, VAR_10, VAR_17);
 FUNC_0(VAR_18, VAR_3, VAR_17);

 FUNC_0(VAR_18, VAR_12, VAR_17);
 FUNC_0(VAR_18, VAR_5, VAR_17);

 FUNC_0(VAR_18, VAR_11, VAR_17);
 FUNC_0(VAR_18, VAR_4, VAR_17);

 FUNC_0(VAR_18, VAR_8, VAR_17);
 FUNC_0(VAR_18, VAR_1, VAR_17);

 FUNC_0(VAR_18, VAR_14, VAR_17);
 FUNC_0(VAR_18, VAR_7, VAR_17);

 FUNC_0(VAR_18, VAR_9, VAR_17);
 FUNC_0(VAR_18, VAR_2, VAR_17);

 return FUNC_2(&VAR_18);
}
