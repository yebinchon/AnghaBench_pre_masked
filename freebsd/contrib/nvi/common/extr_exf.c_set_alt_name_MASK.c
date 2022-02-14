
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * alt_name; } ;
typedef TYPE_1__ SCR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int * FUNC_2 (char*) ;

void
FUNC_3(
 SCR *VAR_1,
 char *VAR_2)
{
 if (VAR_1->alt_name != ((void*)0))
  FUNC_0(VAR_1->alt_name);
 if (VAR_2 == ((void*)0))
  VAR_1->alt_name = ((void*)0);
 else if ((VAR_1->alt_name = FUNC_2(VAR_2)) == ((void*)0))
  FUNC_1(VAR_1, VAR_0, ((void*)0));
}
