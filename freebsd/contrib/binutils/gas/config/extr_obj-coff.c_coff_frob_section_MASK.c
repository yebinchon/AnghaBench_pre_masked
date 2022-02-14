
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int symbolS ;
typedef TYPE_2__* segT ;
struct TYPE_16__ {int fr_address; int fr_fix; char* fr_literal; struct TYPE_16__* fr_next; int fr_offset; } ;
typedef TYPE_3__ fragS ;
typedef int bfd_vma ;
typedef int bfd_byte ;
struct TYPE_17__ {TYPE_1__* frchainP; } ;
struct TYPE_15__ {int name; scalar_t__ alignment_power; } ;
struct TYPE_14__ {TYPE_3__* frch_root; TYPE_3__* frch_last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,TYPE_2__*,int) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int * FUNC_9 (TYPE_2__*) ;
 TYPE_6__* FUNC_10 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;
 TYPE_2__* FUNC_12 (int ,int ) ;
 TYPE_2__* VAR_7 ;

void
FUNC_13 (segT VAR_8)
{
  segT VAR_9;
  char *VAR_10;
  fragS *VAR_11;
  bfd_vma VAR_12, VAR_13, VAR_14;
  bfd_vma VAR_15 = (bfd_vma)VAR_8->alignment_power + VAR_1;






  VAR_12 = FUNC_5 (VAR_8);
  VAR_14 = ((bfd_vma) 1 << VAR_15) - 1;

  if (VAR_12 & VAR_14)
    {
      bfd_vma VAR_16;
      fragS *VAR_17;

      VAR_16 = (VAR_12 + VAR_14) & ~VAR_14;
      FUNC_8 (VAR_6, VAR_8, VAR_16);



      VAR_11 = FUNC_10 (VAR_8)->frchainP->frch_root;
      VAR_17 = FUNC_10 (VAR_8)->frchainP->frch_last;
      while (VAR_11->fr_next != VAR_17)
 VAR_11 = VAR_11->fr_next;
      VAR_17->fr_address = VAR_12;
      VAR_11->fr_offset += VAR_16 - VAR_12;
    }






  if (VAR_12 != 0
      || VAR_8 == VAR_7
      || VAR_8 == VAR_5
      || VAR_8 == VAR_4)

    {
      symbolS *VAR_18 = FUNC_9 (VAR_8);

      FUNC_3 (VAR_18, VAR_0);
      FUNC_2 (VAR_18, 1);
      FUNC_1 (VAR_18);
      FUNC_0 (VAR_18, VAR_12);
    }
  if (! FUNC_11 (".stabstr", VAR_8->name))
    return;

  VAR_9 = VAR_8;
  VAR_8 = FUNC_12 (".stab", 0);

  VAR_12 = FUNC_5 (VAR_9);

  VAR_13 = FUNC_5 (VAR_8) / 12 - 1;


  VAR_11 = FUNC_10 (VAR_8)->frchainP->frch_root;
  while (VAR_11 && VAR_11->fr_fix == 0)
    VAR_11 = VAR_11->fr_next;
  FUNC_4 (VAR_11 != 0 && VAR_11->fr_fix >= 12);


  VAR_10 = VAR_11->fr_literal;
  FUNC_6 (VAR_6, VAR_13, (bfd_byte *) VAR_10 + 6);
  FUNC_7 (VAR_6, VAR_12, (bfd_byte *) VAR_10 + 8);
}
