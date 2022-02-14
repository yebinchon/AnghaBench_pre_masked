
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * bsym; TYPE_1__* sy_frag; } ;
typedef TYPE_2__ symbolS ;
typedef int offsetT ;
struct TYPE_10__ {int fr_address; int insn_addr; int fr_subtype; int * fr_opcode; int fr_literal; TYPE_2__* fr_symbol; } ;
typedef TYPE_3__ fragS ;
typedef int addressT ;
struct TYPE_8__ {scalar_t__ fr_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 unsigned long FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8 (fragS * VAR_1)
{
  int VAR_2 = 0;
  int VAR_3 = 0;
  int VAR_4;
  int VAR_5;
  int VAR_6 = VAR_1->fr_address + VAR_1->insn_addr;

  addressT VAR_7 = 0;
  symbolS *VAR_8;
  offsetT VAR_9;
  unsigned long VAR_10;
  unsigned long VAR_11;






  VAR_4 = FUNC_1 (VAR_1->fr_subtype);
  VAR_5 = FUNC_0 (VAR_1->fr_subtype);
  VAR_3 = FUNC_2 (VAR_1->fr_subtype);

  VAR_8 = VAR_1->fr_symbol;

  if (VAR_8 == ((void*)0))
    VAR_6 = 0;
  else
    {
      if (VAR_8->bsym != 0)
 VAR_7 = (addressT) VAR_8->sy_frag->fr_address;
    }

  VAR_10 = FUNC_7 (VAR_1->fr_literal, VAR_0);


  VAR_9 = ((VAR_10 & 0x3ff0000) >> 6) | (VAR_10 & 0x3fe);
  if ((VAR_9 & 0x80000) == 0x80000)
    VAR_9 |= 0xfff00000;

  VAR_11 = VAR_9 + VAR_7 - VAR_6;
  if ((VAR_11 & 0x80000000) == 0x80000000)
    VAR_11 = 0xffffffff - VAR_11 + 1;


  if (VAR_3 && (VAR_8->bsym != ((void*)0)) && ((VAR_11 & 0xffffff00) == 0)
      && (FUNC_5 (VAR_8) && !FUNC_4 (VAR_8) && !FUNC_6 (VAR_8)))
    {

    }
  else
    {

      VAR_1->fr_opcode = ((void*)0);
      VAR_1->fr_subtype = FUNC_3 (VAR_1->fr_subtype);
    }

  return VAR_2;
}
