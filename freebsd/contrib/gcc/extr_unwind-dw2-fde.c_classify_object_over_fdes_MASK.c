
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int encoding; int mixed_encoding; } ;
struct TYPE_10__ {TYPE_1__ b; } ;
struct object {void* pc_begin; TYPE_2__ s; } ;
struct dwarf_cie {int dummy; } ;
struct TYPE_11__ {scalar_t__ CIE_delta; int pc_begin; } ;
typedef TYPE_3__ fde ;
typedef int _Unwind_Ptr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct object*) ;
 struct dwarf_cie* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (struct dwarf_cie const*) ;
 int FUNC_3 (struct object*,TYPE_3__ const*) ;
 TYPE_3__* FUNC_4 (TYPE_3__ const*) ;
 int FUNC_5 (int,int,int ,int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static size_t
FUNC_7 (struct object *VAR_2, const fde *VAR_3)
{
  const struct dwarf_cie *VAR_4 = 0;
  size_t VAR_5 = 0;
  int VAR_6 = VAR_0;
  _Unwind_Ptr VAR_7 = 0;

  for (; ! FUNC_3 (VAR_2, VAR_3); VAR_3 = FUNC_4 (VAR_3))
    {
      const struct dwarf_cie *VAR_8;
      _Unwind_Ptr VAR_9, VAR_10;


      if (VAR_3->CIE_delta == 0)
 continue;



      VAR_8 = FUNC_1 (VAR_3);
      if (VAR_8 != VAR_4)
 {
   VAR_4 = VAR_8;
   VAR_6 = FUNC_2 (VAR_8);
   VAR_7 = FUNC_0 (VAR_6, VAR_2);
   if (VAR_2->s.b.encoding == VAR_1)
     VAR_2->s.b.encoding = VAR_6;
   else if (VAR_2->s.b.encoding != VAR_6)
     VAR_2->s.b.mixed_encoding = 1;
 }

      FUNC_5 (VAR_6, VAR_7, VAR_3->pc_begin,
        &VAR_10);





      VAR_9 = FUNC_6 (VAR_6);
      if (VAR_9 < sizeof (void *))
 VAR_9 = (1L << (VAR_9 << 3)) - 1;
      else
 VAR_9 = -1;

      if ((VAR_10 & VAR_9) == 0)
 continue;

      VAR_5 += 1;
      if ((void *) VAR_10 < VAR_2->pc_begin)
 VAR_2->pc_begin = (void *) VAR_10;
    }

  return VAR_5;
}
