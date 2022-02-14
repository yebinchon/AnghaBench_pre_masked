
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
typedef char cppchar_t ;
struct TYPE_10__ {char* text; } ;
struct TYPE_7__ {TYPE_4__ str; } ;
struct TYPE_8__ {int type; int flags; TYPE_1__ val; } ;
typedef TYPE_2__ cpp_token ;
typedef int cpp_reader ;
struct TYPE_9__ {scalar_t__ category; char* name; } ;



 int VAR_0 ;




 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;





 int FUNC_0 (int *,int ) ;



 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char** VAR_8 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;

int
FUNC_2 (cpp_reader *VAR_11, const cpp_token *VAR_12,
   const cpp_token *VAR_13)
{
  enum cpp_ttype VAR_14 = VAR_12->type, VAR_15 = VAR_13->type;
  cppchar_t VAR_16;

  if (VAR_12->flags & VAR_6)
    VAR_14 = 132;
  if (VAR_13->flags & VAR_6)
    VAR_15 = 132;

  VAR_16 = VAR_5;
  if (VAR_13->flags & VAR_4)
    VAR_16 = VAR_8[(int) VAR_15 - (int) VAR_1][0];
  else if (VAR_10[VAR_15].category == VAR_7)
    VAR_16 = VAR_10[VAR_15].name[0];


  if ((int) VAR_14 <= (int) VAR_2 && VAR_16 == '=')
    return 1;

  switch (VAR_14)
    {
    case 137: return VAR_16 == '>';
    case 135: return VAR_16 == '<' || VAR_16 == '%' || VAR_16 == ':';
    case 128: return VAR_16 == '+';
    case 134: return VAR_16 == '-' || VAR_16 == '>';
    case 139: return VAR_16 == '/' || VAR_16 == '*';
    case 133: return VAR_16 == ':' || VAR_16 == '>';
    case 142: return VAR_16 == '&';
    case 130: return VAR_16 == '|';
    case 141: return VAR_16 == ':' || VAR_16 == '>';
    case 140: return VAR_16 == '*';
    case 138: return VAR_16 == '.' || VAR_16 == '%' || VAR_15 == 131;
    case 136: return VAR_16 == '#' || VAR_16 == '%';
    case 132: return ((VAR_15 == 131
     && FUNC_1 (VAR_11, &VAR_13->val.str))
    || VAR_15 == 132
    || VAR_15 == VAR_0 || VAR_15 == VAR_3);
    case 131: return (VAR_15 == 131 || VAR_15 == 132
    || VAR_16 == '.' || VAR_16 == '+' || VAR_16 == '-');

    case 129: return ((VAR_12->val.str.text[0] == '\\'
     && VAR_15 == 132)
    || (FUNC_0 (VAR_11, VAR_9)
        && VAR_12->val.str.text[0] == '@'
        && (VAR_15 == 132 || VAR_15 == VAR_3)));
    default: break;
    }

  return 0;
}
