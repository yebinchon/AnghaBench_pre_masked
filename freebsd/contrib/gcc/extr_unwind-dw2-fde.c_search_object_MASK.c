
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * single; int ** array; } ;
struct TYPE_5__ {scalar_t__ encoding; scalar_t__ from_array; scalar_t__ mixed_encoding; scalar_t__ sorted; } ;
struct TYPE_6__ {TYPE_2__ b; } ;
struct object {void* pc_begin; TYPE_1__ u; TYPE_3__ s; } ;
typedef int fde ;


 scalar_t__ VAR_0 ;
 int const* FUNC_0 (struct object*,void*) ;
 int const* FUNC_1 (struct object*,void*) ;
 int const* FUNC_2 (struct object*,void*) ;
 int FUNC_3 (struct object*) ;
 int const* FUNC_4 (struct object*,int *,void*) ;

__attribute__((used)) static const fde *
FUNC_5 (struct object* VAR_1, void *VAR_2)
{


  if (! VAR_1->s.b.sorted)
    {
      FUNC_3 (VAR_1);




      if (VAR_2 < VAR_1->pc_begin)
 return ((void*)0);
    }

  if (VAR_1->s.b.sorted)
    {
      if (VAR_1->s.b.mixed_encoding)
 return FUNC_0 (VAR_1, VAR_2);
      else if (VAR_1->s.b.encoding == VAR_0)
 return FUNC_2 (VAR_1, VAR_2);
      else
 return FUNC_1 (VAR_1, VAR_2);
    }
  else
    {

      if (VAR_1->s.b.from_array)
 {
   fde **VAR_3;
   for (VAR_3 = VAR_1->u.array; *VAR_3 ; VAR_3++)
     {
       const fde *VAR_4 = FUNC_4 (VAR_1, *VAR_3, VAR_2);
       if (VAR_4)
  return VAR_4;
     }
   return ((void*)0);
 }
      else
 return FUNC_4 (VAR_1, VAR_1->u.single, VAR_2);
    }
}
