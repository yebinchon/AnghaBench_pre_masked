
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int valueT ;
typedef int unw_rec_list ;
struct TYPE_4__ {int fr_var; int fr_literal; int fr_fix; scalar_t__ fr_offset; int fr_type; scalar_t__ fr_opcode; } ;
typedef TYPE_1__ fragS ;
typedef int bfd_vma ;
struct TYPE_5__ {int pointer_size; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int,int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5 (fragS *VAR_5)
{
  unw_rec_list *VAR_6;
  int VAR_7, VAR_8, VAR_9;
  valueT VAR_10;


  VAR_6 = (unw_rec_list *) VAR_5->fr_opcode;
  FUNC_2 (VAR_6, 0);

  VAR_7 = FUNC_1 (VAR_6);

  VAR_9 = VAR_7 % VAR_1.pointer_size;
  if (VAR_9 != 0)
    VAR_7 += VAR_1.pointer_size - VAR_9;

  VAR_8 = VAR_7 + 8;

  if (VAR_5->fr_offset)
    VAR_8 += VAR_1.pointer_size;



  FUNC_0 (VAR_5->fr_var >= VAR_8);



  if (VAR_5->fr_offset)
    {
      if (VAR_1.flags & VAR_0)
 VAR_10 = (bfd_vma) 3 << 32;
      else

 VAR_10 = (bfd_vma) 0x1003 << 32;
    }
  else
    VAR_10 = 0;

 FUNC_3 (VAR_5->fr_literal,
       (((bfd_vma) 1 << 48)
        | VAR_10
        | (VAR_7 / VAR_1.pointer_size)),
       8);


  VAR_4 = VAR_5->fr_literal + 8;
  FUNC_4 (VAR_6, VAR_2);


  if (VAR_9 != 0)
    FUNC_3 (VAR_5->fr_literal + VAR_7 + 8 - VAR_1.pointer_size + VAR_9, 0,
   VAR_1.pointer_size - VAR_9);

  VAR_5->fr_fix += VAR_8;
  VAR_5->fr_type = VAR_3;
  VAR_5->fr_var = 0;
  VAR_5->fr_offset = 0;
}
