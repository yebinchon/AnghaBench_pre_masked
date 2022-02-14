
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t count; int sorted; scalar_t__ from_array; } ;
struct TYPE_8__ {TYPE_3__ b; } ;
struct TYPE_5__ {TYPE_2__* sort; int * single; int ** array; } ;
struct object {TYPE_4__ s; TYPE_1__ u; } ;
struct fde_accumulator {TYPE_2__* linear; } ;
typedef int fde ;
struct TYPE_6__ {int * orig_data; } ;


 int FUNC_0 (struct object*,struct fde_accumulator*,int *) ;
 size_t FUNC_1 (struct object*,int *) ;
 int FUNC_2 (struct object*,struct fde_accumulator*,size_t) ;
 int FUNC_3 (struct fde_accumulator*,size_t) ;

__attribute__((used)) static inline void
FUNC_4 (struct object* VAR_0)
{
  struct fde_accumulator VAR_1;
  size_t VAR_2;

  VAR_2 = VAR_0->s.b.count;
  if (VAR_2 == 0)
    {
      if (VAR_0->s.b.from_array)
 {
   fde **VAR_3 = VAR_0->u.array;
   for (VAR_2 = 0; *VAR_3; ++VAR_3)
     VAR_2 += FUNC_1 (VAR_0, *VAR_3);
 }
      else
 VAR_2 = FUNC_1 (VAR_0, VAR_0->u.single);






      VAR_0->s.b.count = VAR_2;
      if (VAR_0->s.b.count != VAR_2)
 VAR_0->s.b.count = 0;
    }

  if (!FUNC_3 (&VAR_1, VAR_2))
    return;

  if (VAR_0->s.b.from_array)
    {
      fde **VAR_4;
      for (VAR_4 = VAR_0->u.array; *VAR_4; ++VAR_4)
 FUNC_0 (VAR_0, &VAR_1, *VAR_4);
    }
  else
    FUNC_0 (VAR_0, &VAR_1, VAR_0->u.single);

  FUNC_2 (VAR_0, &VAR_1, VAR_2);



  VAR_1.linear->orig_data = VAR_0->u.single;
  VAR_0->u.sort = VAR_1.linear;

  VAR_0->s.b.sorted = 1;
}
