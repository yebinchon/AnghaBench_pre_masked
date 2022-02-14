
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct image_fixture {TYPE_1__* asid; scalar_t__ nsecs; int iscache; int * section; int * mapping; int * status; int copy; int image; } ;
struct TYPE_2__ {int cr3; } ;


 int FUNC_0 (struct image_fixture*,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,int) ;
 struct ptunit_result FUNC_5 () ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct image_fixture *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->image, ((void*)0));
 FUNC_3(&VAR_0->copy, ((void*)0));

 FUNC_1(VAR_0->status, 0, sizeof(VAR_0->status));
 FUNC_1(VAR_0->mapping, 0, sizeof(VAR_0->mapping));
 FUNC_1(VAR_0->section, 0, sizeof(VAR_0->section));
 FUNC_1(&VAR_0->iscache, 0, sizeof(VAR_0->iscache));

 VAR_0->nsecs = 0;

 VAR_1 = FUNC_0(VAR_0, "file-0");
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_0(VAR_0, "file-1");
 FUNC_4(VAR_1, 1);

 VAR_1 = FUNC_0(VAR_0, "file-2");
 FUNC_4(VAR_1, 2);

 FUNC_2(&VAR_0->asid[0]);
 VAR_0->asid[0].cr3 = 0xa000;

 FUNC_2(&VAR_0->asid[1]);
 VAR_0->asid[1].cr3 = 0xb000;

 FUNC_2(&VAR_0->asid[2]);
 VAR_0->asid[2].cr3 = 0xc000;

 return FUNC_5();
}
