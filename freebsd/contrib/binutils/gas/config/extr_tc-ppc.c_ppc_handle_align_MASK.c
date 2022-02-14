
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
struct frag {int fr_address; int fr_fix; char* fr_literal; int fr_var; int fr_offset; struct frag* fr_next; int fr_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct frag*,struct frag*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 struct frag* FUNC_2 (scalar_t__) ;

void
FUNC_3 (struct frag *VAR_4)
{
  valueT VAR_5 = (VAR_4->fr_next->fr_address
    - (VAR_4->fr_address + VAR_4->fr_fix));

  if (VAR_5 != 0 && (VAR_5 & 3) == 0)
    {
      char *VAR_6 = VAR_4->fr_literal + VAR_4->fr_fix;

      VAR_4->fr_var = 4;
      FUNC_0 (VAR_6, 0x60000000, 4);

      if ((VAR_2 & VAR_0) != 0)
 {





   if (VAR_5 > 4)
     {
       struct frag *VAR_7 = FUNC_2 (VAR_1 + 4);

       FUNC_1 (VAR_7, VAR_4, VAR_1);
       VAR_7->fr_address = VAR_7->fr_next->fr_address - 4;
       VAR_7->fr_fix = 0;
       VAR_7->fr_offset = 1;
       VAR_7->fr_type = VAR_3;
       VAR_4->fr_next = VAR_7;
       VAR_6 = VAR_7->fr_literal;
     }

   FUNC_0 (VAR_6, 0x60210000, 4);
 }
    }
}
