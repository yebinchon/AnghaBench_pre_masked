
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_suite {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ptunit_suite,int ) ;
 struct ptunit_suite FUNC_1 (int,char**) ;
 int FUNC_2 (struct ptunit_suite*) ;

int FUNC_3(int VAR_4, char **VAR_5)
{
 struct ptunit_suite VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_5);

 FUNC_0(VAR_6, VAR_3);
 FUNC_0(VAR_6, VAR_2);
 FUNC_0(VAR_6, VAR_0);
 FUNC_0(VAR_6, VAR_1);

 return FUNC_2(&VAR_6);
}
