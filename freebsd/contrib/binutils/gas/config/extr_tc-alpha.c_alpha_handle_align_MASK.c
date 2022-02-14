
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fr_type; int fr_address; int fr_fix; char* fr_literal; int fr_var; TYPE_1__* fr_next; } ;
typedef TYPE_2__ fragS ;
struct TYPE_4__ {int fr_address; } ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_0 ;

void
FUNC_2 (fragS *VAR_1)
{
  static char const VAR_2[4] = { 0x00, 0x00, 0xfe, 0x2f };
  static char const VAR_3[8] =
  {
    0x1f, 0x04, 0xff, 0x47,
    0x00, 0x00, 0xfe, 0x2f
  };

  int VAR_4, VAR_5;
  char *VAR_6;

  if (VAR_1->fr_type != VAR_0)
    return;

  VAR_4 = VAR_1->fr_next->fr_address - VAR_1->fr_address - VAR_1->fr_fix;
  VAR_6 = VAR_1->fr_literal + VAR_1->fr_fix;
  VAR_5 = 0;

  if (VAR_4 & 3)
    {
      VAR_5 = VAR_4 & 3;
      FUNC_1 (VAR_6, 0, VAR_5);
      VAR_6 += VAR_5;
      VAR_4 -= VAR_5;
    }

  if (VAR_4 & 4)
    {
      FUNC_0 (VAR_6, VAR_2, 4);
      VAR_6 += 4;
      VAR_4 -= 4;
      VAR_5 += 4;
    }

  FUNC_0 (VAR_6, VAR_3, 8);

  VAR_1->fr_fix += VAR_5;
  VAR_1->fr_var = 8;
}
