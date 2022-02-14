
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef int conversion_rank ;
typedef int conversion_kind ;
struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_8__ {int user_conv_p; int base_p; int bad_p; int rank; TYPE_1__ u; int type; } ;
typedef TYPE_2__ conversion ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static conversion *
FUNC_2 (conversion_kind VAR_3, tree VAR_4, conversion *VAR_5)
{
  conversion *VAR_6;
  conversion_rank VAR_7 = FUNC_0 (VAR_5);




  VAR_6 = FUNC_1 (VAR_3);
  VAR_6->type = VAR_4;
  VAR_6->u.next = VAR_5;

  switch (VAR_3)
    {
    case 130:
    case 131:
    case 132:
    case 128:
      if (VAR_7 < VAR_2)
 VAR_7 = VAR_2;
      break;

    case 129:
      if (VAR_7 < VAR_1)
 VAR_7 = VAR_1;
      break;

    default:
      break;
    }
  VAR_6->rank = VAR_7;
  VAR_6->user_conv_p = (VAR_3 == VAR_0 || VAR_5->user_conv_p);
  VAR_6->bad_p = VAR_5->bad_p;
  VAR_6->base_p = 0;
  return VAR_6;
}
