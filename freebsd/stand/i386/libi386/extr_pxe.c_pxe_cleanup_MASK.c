
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Status; } ;
typedef TYPE_1__ t_PXENV_UNLOAD_STACK ;
typedef TYPE_1__ t_PXENV_UNDI_SHUTDOWN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(void)
{
 t_PXENV_UNLOAD_STACK *VAR_3;
 t_PXENV_UNDI_SHUTDOWN *VAR_4;

 if (&FUNC_4 == ((void*)0))
  return;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_4, sizeof(*VAR_4));
  FUNC_4(VAR_0, VAR_4);






  FUNC_1(VAR_4, sizeof(*VAR_4));
 }

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3, sizeof(*VAR_3));
  FUNC_4(VAR_1, VAR_3);






  FUNC_1(VAR_3, sizeof(*VAR_3));
 }
}
