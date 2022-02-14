
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int reg_syntax_t ;
struct TYPE_5__ {unsigned char c; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ opr; } ;
typedef TYPE_2__ re_token_t ;
typedef int re_string_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int
FUNC_2 (re_string_t *VAR_4, re_token_t *VAR_5, reg_syntax_t VAR_6)
{
  int VAR_7 = -1;
  unsigned char VAR_8;
  while (1)
    {
      FUNC_1 (VAR_5, VAR_4, VAR_6);
      VAR_8 = VAR_5->opr.c;
      if (FUNC_0 (VAR_5->type == VAR_1, 0))
 return -2;
      if (VAR_5->type == VAR_2 || VAR_8 == ',')
 break;
      VAR_7 = ((VAR_5->type != VAR_0 || VAR_8 < '0' || '9' < VAR_8 || VAR_7 == -2)
      ? -2 : ((VAR_7 == -1) ? VAR_8 - '0' : VAR_7 * 10 + VAR_8 - '0'));
      VAR_7 = (VAR_7 > VAR_3) ? -2 : VAR_7;
    }
  return VAR_7;
}
