
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct image_fixture {TYPE_1__* status; TYPE_2__* section; int copy; } ;
struct TYPE_4__ {int mcount; int ucount; } ;
struct TYPE_3__ {int bad_put; int deleted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct image_fixture*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_2);

 FUNC_0(&VAR_2->copy);

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  FUNC_2(VAR_2->section[VAR_3].ucount, 0);
  FUNC_2(VAR_2->section[VAR_3].mcount, 0);
  FUNC_3(VAR_2->status[VAR_3].deleted, 1);
  FUNC_2(VAR_2->status[VAR_3].bad_put, 0);
 }

 return FUNC_4();
}
