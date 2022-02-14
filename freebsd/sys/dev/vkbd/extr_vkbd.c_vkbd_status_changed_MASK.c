
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ks_flags; int ks_rsel; } ;
typedef TYPE_1__ vkbd_state_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void
FUNC_3(vkbd_state_t *VAR_3)
{
 FUNC_0(VAR_3, VAR_0);

 if (!(VAR_3->ks_flags & VAR_2)) {
  VAR_3->ks_flags |= VAR_2;
  FUNC_1(&VAR_3->ks_rsel, VAR_1 + 1);
  FUNC_2(&VAR_3->ks_flags);
 }
}
