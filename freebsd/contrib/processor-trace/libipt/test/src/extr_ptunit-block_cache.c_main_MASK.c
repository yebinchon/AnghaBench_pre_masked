
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_suite {int dummy; } ;
struct bcache_fixture {void* fini; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ptunit_suite,int ) ;
 int FUNC_1 (struct ptunit_suite,int ,struct bcache_fixture) ;
 int FUNC_2 (struct ptunit_suite,int ,struct bcache_fixture,unsigned long long) ;
 struct ptunit_suite FUNC_3 (int,char**) ;
 int FUNC_4 (struct ptunit_suite*) ;
 int VAR_17 ;

int FUNC_5(int VAR_18, char **VAR_19)
{
 struct bcache_fixture VAR_20, VAR_21;
 struct ptunit_suite VAR_22;

 VAR_20.init = VAR_10;
 VAR_20.fini = VAR_9;

 VAR_21.init = VAR_12;
 VAR_21.fini = VAR_9;

 VAR_22 = FUNC_3(VAR_18, VAR_19);

 FUNC_0(VAR_22, VAR_7);
 FUNC_0(VAR_22, VAR_8);

 FUNC_0(VAR_22, VAR_13);
 FUNC_0(VAR_22, VAR_2);
 FUNC_0(VAR_22, VAR_16);

 FUNC_1(VAR_22, VAR_3, VAR_21);
 FUNC_1(VAR_22, VAR_4, VAR_21);
 FUNC_1(VAR_22, VAR_5, VAR_21);
 FUNC_1(VAR_22, VAR_6, VAR_21);

 FUNC_1(VAR_22, VAR_14, VAR_20);

 FUNC_1(VAR_22, VAR_1, VAR_20);
 FUNC_1(VAR_22, VAR_15, VAR_20);

 FUNC_2(VAR_22, VAR_0, VAR_20, 0ull);
 FUNC_2(VAR_22, VAR_0, VAR_20, VAR_11 - 1ull);
 FUNC_1(VAR_22, VAR_17, VAR_20);

 return FUNC_4(&VAR_22);
}
