
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_5__ {scalar_t__ al_refc; scalar_t__ al_mnt; } ;
typedef TYPE_1__ am_loc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,TYPE_1__*) ;

void
FUNC_4(opaque_t VAR_1)
{
  am_loc *VAR_2 = (am_loc *) VAR_1;
  FUNC_1("free_loc %p", VAR_2);

  if (VAR_2->al_refc <= 0) {
    FUNC_3(VAR_0, "IGNORING free_loc for 0x%p", VAR_2);
    return;
  }

  if (VAR_2->al_mnt)
    FUNC_2(VAR_2->al_mnt);
  if (--VAR_2->al_refc == 0) {
    FUNC_0(VAR_2);
  }
}
