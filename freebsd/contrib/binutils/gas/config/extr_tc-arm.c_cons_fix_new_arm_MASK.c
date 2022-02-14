
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fragS ;
struct TYPE_4__ {scalar_t__ X_op; } ;
typedef TYPE_1__ expressionS ;
typedef int bfd_reloc_code_real_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int,int,TYPE_1__*,int,int ) ;

void
FUNC_1 (fragS * VAR_7,
    int VAR_8,
    int VAR_9,
    expressionS * VAR_10)
{
  bfd_reloc_code_real_type VAR_11;
  int VAR_12 = 0;



  switch (VAR_9)
    {
    case 1:
      VAR_11 = VAR_4;
      break;
    case 2:
      VAR_11 = VAR_0;
      break;
    case 4:
    default:
      VAR_11 = VAR_1;
      break;
    case 8:
      VAR_11 = VAR_3;
      break;
    }
  FUNC_0 (VAR_7, VAR_8, (int) VAR_9, VAR_10, VAR_12, VAR_11);
}
