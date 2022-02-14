
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thumb_noop ;
struct TYPE_5__ {scalar_t__ fr_type; int fr_address; int fr_fix; char* fr_literal; int fr_var; scalar_t__ tc_frag_data; TYPE_1__* fr_next; } ;
typedef TYPE_2__ fragS ;
typedef int arm_noop ;
struct TYPE_4__ {int fr_address; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_2 (fragS * VAR_3)
{
  static char const VAR_4[4] = { 0x00, 0x00, 0xa0, 0xe1 };
  static char const VAR_5[2] = { 0xc0, 0x46 };
  static char const VAR_6[4] = { 0xe1, 0xa0, 0x00, 0x00 };
  static char const VAR_7[2] = { 0x46, 0xc0 };

  int VAR_8, VAR_9, VAR_10;
  char * VAR_11;
  const char * VAR_12;

  if (VAR_3->fr_type != VAR_1)
    return;

  VAR_8 = VAR_3->fr_next->fr_address - VAR_3->fr_address - VAR_3->fr_fix;
  VAR_11 = VAR_3->fr_literal + VAR_3->fr_fix;
  VAR_9 = 0;

  if (VAR_8 > VAR_0)
    VAR_8 &= VAR_0;

  if (VAR_3->tc_frag_data)
    {
      if (VAR_2)
 VAR_12 = VAR_7;
      else
 VAR_12 = VAR_5;
      VAR_10 = sizeof (VAR_5);
    }
  else
    {
      if (VAR_2)
 VAR_12 = VAR_6;
      else
 VAR_12 = VAR_4;
      VAR_10 = sizeof (VAR_4);
    }

  if (VAR_8 & (VAR_10 - 1))
    {
      VAR_9 = VAR_8 & (VAR_10 - 1);
      FUNC_1 (VAR_11, 0, VAR_9);
      VAR_11 += VAR_9;
      VAR_8 -= VAR_9;
    }

  while (VAR_8 >= VAR_10)
    {
      FUNC_0 (VAR_11, VAR_12, VAR_10);
      VAR_11 += VAR_10;
      VAR_8 -= VAR_10;
      VAR_9 += VAR_10;
    }

  VAR_3->fr_fix += VAR_9;
  VAR_3->fr_var = VAR_10;
}
