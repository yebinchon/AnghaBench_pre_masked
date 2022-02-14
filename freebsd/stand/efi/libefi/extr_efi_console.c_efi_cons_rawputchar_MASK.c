
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINTN ;
struct TYPE_6__ {int (* EnableCursor ) (TYPE_2__*,int ) ;TYPE_1__* Mode; int (* QueryMode ) (TYPE_2__*,int ,int *,int *) ;} ;
struct TYPE_5__ {int CursorColumn; int Mode; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_4)
{
 int VAR_5;
 UINTN VAR_6, VAR_7;
 VAR_1->QueryMode(VAR_1, VAR_1->Mode->Mode, &VAR_6, &VAR_7);

 if (VAR_4 == '\t') {
  int VAR_8;

  VAR_8 = 8 - ((VAR_1->Mode->CursorColumn + 8) % 8);
  for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
   FUNC_3(' ');
 } else {

  if (VAR_4 == '\n')
   FUNC_0('\r');
  FUNC_0(VAR_4);
 }
 VAR_1->EnableCursor(VAR_1, VAR_0);
}
