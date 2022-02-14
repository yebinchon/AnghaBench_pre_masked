
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {unsigned long return_value; int * arg; } ;
typedef TYPE_1__ isr_attribute_arg ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int *) ;

__attribute__((used)) static unsigned long
FUNC_4 (tree VAR_5)
{
  const isr_attribute_arg * VAR_6;
  const char * VAR_7;


  if (VAR_5 == VAR_2)
    return VAR_0;


  if (FUNC_2 (VAR_5) == VAR_2
      || FUNC_0 (FUNC_2 (VAR_5)) != VAR_3)
    return VAR_1;

  VAR_7 = FUNC_1 (FUNC_2 (VAR_5));


  for (VAR_6 = VAR_4; VAR_6->arg != ((void*)0); VAR_6++)
    if (FUNC_3 (VAR_7, VAR_6->arg))
      return VAR_6->return_value;


  return VAR_1;
}
