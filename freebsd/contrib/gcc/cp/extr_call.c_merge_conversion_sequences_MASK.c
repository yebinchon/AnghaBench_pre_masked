
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* next; } ;
struct TYPE_7__ {scalar_t__ kind; int user_conv_p; TYPE_1__ u; } ;
typedef TYPE_2__ conversion ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static conversion *
FUNC_1 (conversion *VAR_2, conversion *VAR_3)
{
  conversion **VAR_4;

  FUNC_0 (VAR_2->kind == VAR_1);


  VAR_4 = &(VAR_3);
  while ((*VAR_4)->kind != VAR_0)
    VAR_4 = &((*VAR_4)->u.next);



  *VAR_4 = VAR_2;


  VAR_3->user_conv_p = 1;

  return VAR_3;
}
