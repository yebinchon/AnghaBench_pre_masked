
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ud; } ;
struct TYPE_7__ {int keylen; } ;
struct TYPE_8__ {int len; int flags; scalar_t__ type; TYPE_1__ value; struct TYPE_8__** trash_stack; TYPE_2__ hh; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_object_userdata {int (* dtor ) (int ) ;} ;


 int FUNC_0 (int,TYPE_3__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (ucl_object_t *VAR_4)
{
 if (VAR_4->trash_stack[VAR_1] != ((void*)0)) {
  FUNC_0 (VAR_4->hh.keylen, VAR_4->trash_stack[VAR_1]);
 }
 if (VAR_4->trash_stack[VAR_2] != ((void*)0)) {
  FUNC_0 (VAR_4->len, VAR_4->trash_stack[VAR_2]);
 }

 if ((VAR_4->flags & VAR_0) == 0) {
  if (VAR_4->type != VAR_3) {
   FUNC_0 (sizeof (ucl_object_t), VAR_4);
  }
  else {
   struct ucl_object_userdata *VAR_5 = (struct ucl_object_userdata *)VAR_4;
   if (VAR_5->dtor) {
    VAR_5->dtor (VAR_4->value.ud);
   }
   FUNC_0 (sizeof (*VAR_5), VAR_4);
  }
 }
}
