
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ am_path; TYPE_1__* am_al; int am_child; } ;
typedef TYPE_2__ am_node ;
struct TYPE_14__ {int mf_private; } ;
struct TYPE_12__ {TYPE_5__* al_mnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,scalar_t__,int*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static am_node *
FUNC_5(am_node *VAR_4, int *VAR_5)
{
  am_node *VAR_6;
  int VAR_7 = 0;

  VAR_6 = FUNC_4(VAR_4->am_child);
  if (!VAR_6) {
    if (!VAR_4->am_al->al_mnt->mf_private)
      FUNC_2(VAR_4->am_al->al_mnt);
    VAR_6 = FUNC_0(VAR_4, VAR_4->am_path + 1, &VAR_7, VAR_2);
    if (VAR_6 && VAR_7 < 0)
      VAR_6 = FUNC_1(VAR_6, &VAR_7);
  }
  if (VAR_6) {
    FUNC_3(VAR_6);
    return VAR_6;
  }
  if (VAR_3 == VAR_1)
    VAR_7 = VAR_0;
  *VAR_5 = VAR_7;
  return 0;
}
