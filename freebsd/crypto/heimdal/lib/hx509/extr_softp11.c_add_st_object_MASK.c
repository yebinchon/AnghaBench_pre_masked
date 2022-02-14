
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_object {int object_handle; } ;
struct TYPE_3__ {int num_objs; struct st_object** objs; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 struct st_object* FUNC_0 (int,int) ;
 int FUNC_1 (struct st_object*) ;
 int FUNC_2 () ;
 struct st_object** FUNC_3 (struct st_object**,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static struct st_object *
FUNC_4(void)
{
    struct st_object *VAR_2, **VAR_3;
    int VAR_4;

    VAR_2 = FUNC_0(1, sizeof(*VAR_2));
    if (VAR_2 == ((void*)0))
 return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_1.object.num_objs; VAR_4++) {
 if (VAR_1.object.objs == ((void*)0)) {
     VAR_1.object.objs[VAR_4] = VAR_2;
     break;
 }
    }
    if (VAR_4 == VAR_1.object.num_objs) {
 VAR_3 = FUNC_3(VAR_1.object.objs,
         (VAR_1.object.num_objs + 1) * sizeof(VAR_1.object.objs[0]));
 if (VAR_3 == ((void*)0)) {
     FUNC_1(VAR_2);
     return ((void*)0);
 }
 VAR_1.object.objs = VAR_3;
 VAR_1.object.objs[VAR_1.object.num_objs++] = VAR_2;
    }
    VAR_1.object.objs[VAR_4]->object_handle =
 (FUNC_2() & (~VAR_0)) | VAR_4;

    return VAR_2;
}
