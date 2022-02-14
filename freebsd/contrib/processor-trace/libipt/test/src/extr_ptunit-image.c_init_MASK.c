
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_2__ {void* context; scalar_t__ callback; } ;
struct pt_image {void* name; void* sections; TYPE_1__ readmem; } ;
typedef int image ;


 int FUNC_0 (struct pt_image*,int,int) ;
 int FUNC_1 (struct pt_image*,int *) ;
 int FUNC_2 (void*) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_image VAR_0;

 FUNC_0(&VAR_0, 0xcd, sizeof(VAR_0));

 FUNC_1(&VAR_0, ((void*)0));
 FUNC_2(VAR_0.name);
 FUNC_2(VAR_0.sections);
 FUNC_2((void *) (uintptr_t) VAR_0.readmem.callback);
 FUNC_2(VAR_0.readmem.context);

 return FUNC_3();
}
