
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_section {int size; int offset; int filename; } ;
struct iscache_fixture {int iscache; struct pt_section** section; } ;


 int FUNC_0 (int *,struct pt_section*,unsigned long long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,unsigned long long) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (struct pt_section*) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct iscache_fixture *VAR_0)
{
 struct pt_section *VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_1 = VAR_0->section[0];
 FUNC_6(VAR_1);

 VAR_4 = FUNC_0(&VAR_0->iscache, VAR_1, 0ull);
 FUNC_4(VAR_4, 0);

 VAR_2 = FUNC_1(&VAR_0->iscache);
 FUNC_3(VAR_2, 0);


 VAR_3 = FUNC_2(&VAR_0->iscache, VAR_1->filename,
    VAR_1->offset, VAR_1->size, 0ull);
 FUNC_3(VAR_3, 0);

 return FUNC_5();
}
