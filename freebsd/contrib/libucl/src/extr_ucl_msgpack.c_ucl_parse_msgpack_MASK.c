
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucl_object_t ;
struct ucl_parser {int * cur_obj; int * top_obj; int err; TYPE_2__* stack; TYPE_1__* chunks; } ;
struct TYPE_4__ {int * obj; } ;
struct TYPE_3__ {unsigned char* begin; scalar_t__ remain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ucl_parser*) ;

bool
FUNC_3 (struct ucl_parser *VAR_0)
{
 ucl_object_t *VAR_1 = ((void*)0);
 const unsigned char *VAR_2;
 bool VAR_3;

 FUNC_0 (VAR_0 != ((void*)0));
 FUNC_0 (VAR_0->chunks != ((void*)0));
 FUNC_0 (VAR_0->chunks->begin != ((void*)0));
 FUNC_0 (VAR_0->chunks->remain != 0);

 VAR_2 = VAR_0->chunks->begin;

 if (VAR_0->stack) {
  VAR_1 = VAR_0->stack->obj;
 }






 if (VAR_1 == ((void*)0)) {
  if ((*VAR_2 & 0x80) != 0x80 && !(*VAR_2 >= 0xdc && *VAR_2 <= 0xdf)) {
   FUNC_1 (&VAR_0->err, "bad top level object for msgpack");
   return 0;
  }
 }

 VAR_3 = FUNC_2 (VAR_0);

 if (VAR_3 && VAR_0->top_obj == ((void*)0)) {
  VAR_0->top_obj = VAR_0->cur_obj;
 }

 return VAR_3;
}
