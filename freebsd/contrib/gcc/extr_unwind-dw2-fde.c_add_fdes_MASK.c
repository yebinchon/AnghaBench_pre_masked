
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int encoding; scalar_t__ mixed_encoding; } ;
struct TYPE_11__ {TYPE_1__ b; } ;
struct object {TYPE_2__ s; } ;
struct fde_accumulator {int dummy; } ;
struct dwarf_cie {int dummy; } ;
struct TYPE_12__ {scalar_t__ CIE_delta; scalar_t__ pc_begin; } ;
typedef TYPE_3__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct object*) ;
 int FUNC_1 (struct fde_accumulator*,TYPE_3__ const*) ;
 struct dwarf_cie* FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (struct dwarf_cie const*) ;
 int FUNC_4 (struct object*,TYPE_3__ const*) ;
 TYPE_3__* FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (int,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (struct object *VAR_1, struct fde_accumulator *VAR_2, const fde *VAR_3)
{
  const struct dwarf_cie *VAR_4 = 0;
  int VAR_5 = VAR_1->s.b.encoding;
  _Unwind_Ptr VAR_6 = FUNC_0 (VAR_1->s.b.encoding, VAR_1);

  for (; ! FUNC_4 (VAR_1, VAR_3); VAR_3 = FUNC_5 (VAR_3))
    {
      const struct dwarf_cie *VAR_7;


      if (VAR_3->CIE_delta == 0)
 continue;

      if (VAR_1->s.b.mixed_encoding)
 {


   VAR_7 = FUNC_2 (VAR_3);
   if (VAR_7 != VAR_4)
     {
       VAR_4 = VAR_7;
       VAR_5 = FUNC_3 (VAR_7);
       VAR_6 = FUNC_0 (VAR_5, VAR_1);
     }
 }

      if (VAR_5 == VAR_0)
 {
   if (*(_Unwind_Ptr *) VAR_3->pc_begin == 0)
     continue;
 }
      else
 {
   _Unwind_Ptr VAR_8, VAR_9;

   FUNC_6 (VAR_5, VAR_6, VAR_3->pc_begin,
     &VAR_8);





   VAR_9 = FUNC_7 (VAR_5);
   if (VAR_9 < sizeof (void *))
     VAR_9 = (1L << (VAR_9 << 3)) - 1;
   else
     VAR_9 = -1;

   if ((VAR_8 & VAR_9) == 0)
     continue;
 }

      FUNC_1 (VAR_2, VAR_3);
    }
}
