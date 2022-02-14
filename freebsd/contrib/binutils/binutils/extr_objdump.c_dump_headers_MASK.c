
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_3)
{
  FUNC_3 (FUNC_0("Sections:\n"));


  FUNC_3 (FUNC_0("Idx Name          Size      VMA       LMA       File off  Algn"));
  if (VAR_2)
    FUNC_3 (FUNC_0("  Flags"));
  if (VAR_3->flags & VAR_0)
    FUNC_3 (FUNC_0("  Pg"));
  FUNC_3 ("\n");

  FUNC_2 (VAR_3, VAR_1, ((void*)0));
}
