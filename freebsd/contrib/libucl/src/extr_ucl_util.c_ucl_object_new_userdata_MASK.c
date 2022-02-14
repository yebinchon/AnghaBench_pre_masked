
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucl_userdata_emitter ;
typedef int ucl_userdata_dtor ;
typedef int ucl_object_t ;
struct TYPE_3__ {void* ud; } ;
struct TYPE_4__ {int ref; TYPE_1__ value; int * prev; int * next; int type; } ;
struct ucl_object_userdata {TYPE_2__ obj; int emitter; int dtor; } ;


 struct ucl_object_userdata* FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct ucl_object_userdata*,int ,size_t) ;

ucl_object_t*
FUNC_2 (ucl_userdata_dtor VAR_1,
  ucl_userdata_emitter VAR_2,
  void *VAR_3)
{
 struct ucl_object_userdata *VAR_4;
 size_t VAR_5 = sizeof (*VAR_4);

 VAR_4 = FUNC_0 (VAR_5);
 if (VAR_4 != ((void*)0)) {
  FUNC_1 (VAR_4, 0, VAR_5);
  VAR_4->obj.ref = 1;
  VAR_4->obj.type = VAR_0;
  VAR_4->obj.next = ((void*)0);
  VAR_4->obj.prev = (ucl_object_t *)VAR_4;
  VAR_4->dtor = VAR_1;
  VAR_4->emitter = VAR_2;
  VAR_4->obj.value.ud = VAR_3;
 }

 return (ucl_object_t *)VAR_4;
}
