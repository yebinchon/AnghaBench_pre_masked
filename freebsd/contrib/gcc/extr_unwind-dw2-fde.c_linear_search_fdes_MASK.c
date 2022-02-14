
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
struct dwarf_cie {int dummy; } ;
struct TYPE_12__ {scalar_t__ CIE_delta; unsigned char const* pc_begin; } ;
typedef TYPE_3__ fde ;
typedef int _Unwind_Ptr ;


 int VAR_0 ;
 int FUNC_0 (int,struct object*) ;
 struct dwarf_cie* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (struct dwarf_cie const*) ;
 int FUNC_3 (struct object*,TYPE_3__ const*) ;
 TYPE_3__* FUNC_4 (TYPE_3__ const*) ;
 unsigned char* FUNC_5 (int,int,unsigned char const*,int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static const fde *
FUNC_7 (struct object *VAR_1, const fde *VAR_2, void *VAR_3)
{
  const struct dwarf_cie *VAR_4 = 0;
  int VAR_5 = VAR_1->s.b.encoding;
  _Unwind_Ptr VAR_6 = FUNC_0 (VAR_1->s.b.encoding, VAR_1);

  for (; ! FUNC_3 (VAR_1, VAR_2); VAR_2 = FUNC_4 (VAR_2))
    {
      const struct dwarf_cie *VAR_7;
      _Unwind_Ptr VAR_8, VAR_9;


      if (VAR_2->CIE_delta == 0)
 continue;

      if (VAR_1->s.b.mixed_encoding)
 {


   VAR_7 = FUNC_1 (VAR_2);
   if (VAR_7 != VAR_4)
     {
       VAR_4 = VAR_7;
       VAR_5 = FUNC_2 (VAR_7);
       VAR_6 = FUNC_0 (VAR_5, VAR_1);
     }
 }

      if (VAR_5 == VAR_0)
 {
   VAR_8 = ((_Unwind_Ptr *) VAR_2->pc_begin)[0];
   VAR_9 = ((_Unwind_Ptr *) VAR_2->pc_begin)[1];
   if (VAR_8 == 0)
     continue;
 }
      else
 {
   _Unwind_Ptr VAR_10;
   const unsigned char *VAR_11;

   VAR_11 = FUNC_5 (VAR_5, VAR_6,
         VAR_2->pc_begin, &VAR_8);
   FUNC_5 (VAR_5 & 0x0F, 0, VAR_11, &VAR_9);





   VAR_10 = FUNC_6 (VAR_5);
   if (VAR_10 < sizeof (void *))
     VAR_10 = (1L << (VAR_10 << 3)) - 1;
   else
     VAR_10 = -1;

   if ((VAR_8 & VAR_10) == 0)
     continue;
 }

      if ((_Unwind_Ptr) VAR_3 - VAR_8 < VAR_9)
 return VAR_2;
    }

  return ((void*)0);
}
