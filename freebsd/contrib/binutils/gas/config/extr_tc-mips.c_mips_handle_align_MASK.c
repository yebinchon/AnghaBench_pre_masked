
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fr_type; int fr_address; int fr_fix; char* fr_literal; int fr_var; TYPE_1__* fr_next; } ;
typedef TYPE_2__ fragS ;
struct TYPE_7__ {scalar_t__ mips16; } ;
struct TYPE_5__ {int fr_address; } ;


 int FUNC_0 (char*,unsigned char const*,int) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_1 (fragS *VAR_3)
{
  if (VAR_3->fr_type != VAR_1)
    return;

  if (VAR_0.mips16)
    {
      static const unsigned char VAR_4[] = { 0x65, 0x00 };
      static const unsigned char VAR_5[] = { 0x00, 0x65 };

      int VAR_6;
      char *VAR_7;

      VAR_6 = VAR_3->fr_next->fr_address - VAR_3->fr_address - VAR_3->fr_fix;
      VAR_7 = VAR_3->fr_literal + VAR_3->fr_fix;

      if (VAR_6 & 1)
 {
   *VAR_7++ = 0;
   VAR_3->fr_fix++;
 }

      FUNC_0 (VAR_7, (VAR_2 ? VAR_4 : VAR_5), 2);
      VAR_3->fr_var = 2;
    }


}
