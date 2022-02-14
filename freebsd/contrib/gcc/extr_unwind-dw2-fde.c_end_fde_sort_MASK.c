
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ encoding; scalar_t__ mixed_encoding; } ;
struct TYPE_10__ {TYPE_1__ b; } ;
struct object {TYPE_2__ s; } ;
struct fde_accumulator {TYPE_3__* linear; TYPE_3__* erratic; } ;
typedef int fde_compare_t ;
struct TYPE_11__ {size_t count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct object*,int ,TYPE_3__*,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct object*,int ,TYPE_3__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (struct object*,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline void
FUNC_5 (struct object *VAR_4, struct fde_accumulator *VAR_5, size_t VAR_6)
{
  fde_compare_t VAR_7;

  FUNC_4 (!VAR_5->linear || VAR_5->linear->count == VAR_6);

  if (VAR_4->s.b.mixed_encoding)
    VAR_7 = VAR_1;
  else if (VAR_4->s.b.encoding == VAR_0)
    VAR_7 = VAR_3;
  else
    VAR_7 = VAR_2;

  if (VAR_5->erratic)
    {
      FUNC_1 (VAR_4, VAR_7, VAR_5->linear, VAR_5->erratic);
      FUNC_4 (VAR_5->linear->count + VAR_5->erratic->count == VAR_6);
      FUNC_2 (VAR_4, VAR_7, VAR_5->erratic);
      FUNC_0 (VAR_4, VAR_7, VAR_5->linear, VAR_5->erratic);
      FUNC_3 (VAR_5->erratic);
    }
  else
    {


      FUNC_2 (VAR_4, VAR_7, VAR_5->linear);
    }
}
