
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ am_failure; scalar_t__ am_success; } ;
typedef TYPE_1__ au_mask_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*) ;

int
FUNC_4(au_mask_t *VAR_1, au_mask_t *VAR_2, au_mask_t *VAR_3)
{
 char VAR_4[VAR_0 + 1];

 if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
  return (-1);

 VAR_3->am_success = 0;
 VAR_3->am_failure = 0;


 if (FUNC_2(VAR_4, VAR_0) == 0) {
  if (FUNC_3(VAR_4, VAR_3) != 0)
   return (-1);
 }

 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_2);

 return (0);
}
