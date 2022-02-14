
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {TYPE_2__* type_stack; int complex_double_index; int complex_float_index; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {int indx; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct ieee_handle*,unsigned int,int ,int ) ;
 int FUNC_3 (struct ieee_handle*,int ,unsigned int,int ,int ) ;
 int FUNC_4 (struct ieee_handle*,char*) ;
 int FUNC_5 (struct ieee_handle*,char) ;
 int VAR_2 ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_3, unsigned int VAR_4)
{
  struct ieee_handle *VAR_5 = (struct ieee_handle *) VAR_3;
  char VAR_6;

  switch (VAR_4)
    {
    case 4:
      if (VAR_5->complex_float_index != 0)
 return FUNC_3 (VAR_5, VAR_5->complex_float_index, VAR_4 * 2,
          VAR_0, VAR_0);
      VAR_6 = 'c';
      break;
    case 12:
    case 16:


    case 8:
      if (VAR_5->complex_double_index != 0)
 return FUNC_3 (VAR_5, VAR_5->complex_double_index, VAR_4 * 2,
          VAR_0, VAR_0);
      VAR_6 = 'd';
      break;
    default:
      FUNC_1 (VAR_2, FUNC_0("IEEE unsupported complex type size %u\n"), VAR_4);
      return VAR_0;
    }


  if (! FUNC_2 (VAR_5, VAR_4 * 2, VAR_0, VAR_0)
      || ! FUNC_5 (VAR_5, VAR_6)
      || ! FUNC_4 (VAR_5, ""))
    return VAR_0;

  if (VAR_4 == 4)
    VAR_5->complex_float_index = VAR_5->type_stack->type.indx;
  else
    VAR_5->complex_double_index = VAR_5->type_stack->type.indx;

  return VAR_1;
}
