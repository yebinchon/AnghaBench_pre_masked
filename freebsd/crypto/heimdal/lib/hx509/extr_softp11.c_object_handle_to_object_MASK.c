
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_object {scalar_t__ object_handle; } ;
struct TYPE_3__ {int num_objs; struct st_object** objs; } ;
struct TYPE_4__ {TYPE_1__ object; } ;
typedef int CK_RV ;
typedef scalar_t__ CK_OBJECT_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static CK_RV
FUNC_1(CK_OBJECT_HANDLE VAR_3,
   struct st_object **VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3);

    *VAR_4 = ((void*)0);
    if (VAR_5 >= VAR_2.object.num_objs)
 return VAR_0;
    if (VAR_2.object.objs[VAR_5] == ((void*)0))
 return VAR_0;
    if (VAR_2.object.objs[VAR_5]->object_handle != VAR_3)
 return VAR_0;
    *VAR_4 = VAR_2.object.objs[VAR_5];
    return VAR_1;
}
