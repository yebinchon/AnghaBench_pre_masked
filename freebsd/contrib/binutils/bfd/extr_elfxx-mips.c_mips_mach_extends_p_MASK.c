
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* bfd_boolean ;
struct TYPE_3__ {unsigned long extension; unsigned long base; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static bfd_boolean
FUNC_1 (unsigned long VAR_7, unsigned long VAR_8)
{
  size_t VAR_9;

  if (VAR_8 == VAR_7)
    return VAR_1;

  if (VAR_7 == VAR_2
      && FUNC_1 (VAR_4, VAR_8))
    return VAR_1;

  if (VAR_7 == VAR_3
      && FUNC_1 (VAR_5, VAR_8))
    return VAR_1;

  for (VAR_9 = 0; VAR_9 < FUNC_0 (VAR_6); VAR_9++)
    if (VAR_8 == VAR_6[VAR_9].extension)
      {
 VAR_8 = VAR_6[VAR_9].base;
 if (VAR_8 == VAR_7)
   return VAR_1;
      }

  return VAR_0;
}
