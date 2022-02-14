
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_2__ {void** decl; } ;


 void* VAR_0 ;
 void* FUNC_0 (void*,unsigned int) ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_1 (void*,void*,void*) ;

void
FUNC_2 (void)
{
  unsigned VAR_3;
  tree VAR_4 = VAR_0;

  for (VAR_3 = 0; VAR_1[VAR_3].decl; VAR_3++)
    {
      tree VAR_5 = *VAR_1[VAR_3].decl;

      if (VAR_5)
 {
   VAR_4 = FUNC_1 (VAR_5, FUNC_0 (VAR_0, VAR_3), VAR_4);
   *VAR_1[VAR_3].decl = VAR_0;
 }
    }
  if (VAR_4 || VAR_2)


    VAR_2 = FUNC_1 (VAR_4, VAR_0,
        VAR_2);
}
