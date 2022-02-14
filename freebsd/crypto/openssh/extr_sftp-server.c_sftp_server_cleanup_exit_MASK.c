
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pw_name; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int *) ;
 TYPE_1__* VAR_1 ;

void
FUNC_3(int VAR_2)
{
 if (VAR_1 != ((void*)0) && VAR_0 != ((void*)0)) {
  FUNC_1();
  FUNC_2("session closed for local user %s from [%s]",
      VAR_1->pw_name, VAR_0);
 }
 FUNC_0(VAR_2);
}
