
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ voidp ;
typedef int u_int ;
struct TYPE_13__ {scalar_t__ mnt_opts; } ;
typedef TYPE_3__ mntent_t ;
struct TYPE_14__ {TYPE_2__* am_al; } ;
typedef TYPE_4__ am_node ;
typedef int am_cookie3 ;
struct TYPE_12__ {TYPE_1__* al_mnt; } ;
struct TYPE_11__ {scalar_t__ mf_mopts; } ;


 int FUNC_0 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_4__*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_5(am_node *VAR_2, voidp VAR_3, voidp VAR_4, voidp VAR_5, u_int VAR_6)
{
  int VAR_7, VAR_8;


  VAR_7 = 0;
  if (VAR_2->am_al->al_mnt && VAR_2->am_al->al_mnt->mf_mopts) {
    mntent_t VAR_9;
    VAR_9.mnt_opts = VAR_2->am_al->al_mnt->mf_mopts;
    if (FUNC_4(&VAR_9, "fullybrowsable"))
      VAR_7 = 2;
    else if (FUNC_4(&VAR_9, "browsable"))
      VAR_7 = 1;
  }
  VAR_8 = (VAR_7 == 2);

  if (VAR_0 == VAR_1) {
    if (VAR_7)
      return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
    else
      return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  } else {
    if (VAR_7)
      return FUNC_2(VAR_2, (am_cookie3) (uintptr_t) VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
    else
      return FUNC_1(VAR_2, (am_cookie3) (uintptr_t) VAR_3, VAR_4, VAR_5, VAR_6);
  }
}
