
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_fixture {int thrd; int * name; int * file; int * section; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int,int ) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int **,int **,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct section_fixture *VAR_1)
{
 int VAR_2;

 VAR_1->section = ((void*)0);
 VAR_1->file = ((void*)0);
 VAR_1->name = ((void*)0);

 VAR_2 = FUNC_3(&VAR_1->file, &VAR_1->name, "wb");
 FUNC_0(VAR_2, 0);

 FUNC_2(VAR_0, &VAR_1->thrd);

 return FUNC_1();
}
