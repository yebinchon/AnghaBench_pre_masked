
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_4__ {void* context; scalar_t__ callback; } ;
struct TYPE_5__ {void* sections; TYPE_1__ readmem; int name; } ;
struct image_fixture {TYPE_2__ image; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (void*) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_0)
{
 FUNC_0(&VAR_0->image, 0xcd, sizeof(VAR_0->image));

 FUNC_1(&VAR_0->image, "image-name");
 FUNC_4(VAR_0->image.name, "image-name");
 FUNC_2(VAR_0->image.sections);
 FUNC_2((void *) (uintptr_t) VAR_0->image.readmem.callback);
 FUNC_2(VAR_0->image.readmem.context);

 return FUNC_3();
}
