
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_4__ {int fr_offset; int fr_subtype; scalar_t__ fr_fix; scalar_t__ fr_address; int fr_symbol; } ;
typedef TYPE_1__ fragS ;
typedef scalar_t__ bfd_boolean ;
typedef int asection ;
typedef scalar_t__ addressT ;
struct TYPE_5__ {scalar_t__ isa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_8 (fragS *VAR_6, asection *VAR_7, int VAR_8)
{
  bfd_boolean VAR_9;
  int VAR_10;

  if (VAR_6
      && FUNC_7 (VAR_6->fr_symbol)
      && VAR_7 == FUNC_5 (VAR_6->fr_symbol))
    {
      addressT VAR_11;
      offsetT VAR_12;

      VAR_12 = FUNC_6 (VAR_6->fr_symbol) + VAR_6->fr_offset;

      VAR_11 = VAR_6->fr_address + VAR_6->fr_fix + 4;

      VAR_12 -= VAR_11;

      VAR_9 = VAR_12 < - (0x8000 << 2) || VAR_12 >= (0x8000 << 2);
    }
  else if (VAR_6)



    VAR_9 = VAR_0;
  else
    VAR_9 = VAR_3;

  if (VAR_6 && VAR_8 && VAR_9 != FUNC_3 (VAR_6->fr_subtype))
    VAR_6->fr_subtype
      = FUNC_0 (FUNC_4 (VAR_6->fr_subtype),
        FUNC_1 (VAR_6->fr_subtype),
        FUNC_2 (VAR_6->fr_subtype),
        VAR_9);

  VAR_10 = 4;
  if (VAR_9)
    {
      if (VAR_6 ? FUNC_1 (VAR_6->fr_subtype) : (VAR_8 > 0))
 VAR_10 += 8;

      if (VAR_5 != VAR_2)
 {

   VAR_10 += 8;
   if (VAR_4.isa == VAR_1)

     VAR_10 += 4;
 }


      if (VAR_6 ? !FUNC_4 (VAR_6->fr_subtype) : (VAR_8 >= 0))
 VAR_10 += 8;
    }

  return VAR_10;
}
