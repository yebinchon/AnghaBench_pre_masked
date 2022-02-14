
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_4__ {int ui64; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {TYPE_2__ fmri_set_failed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(nvlist_t *VAR_6, int VAR_7, const nvlist_t *VAR_8)
{
 if (VAR_7 != VAR_3) {
  FUNC_0(&VAR_5.fmri_set_failed.value.ui64);
  return (0);
 }

 if (FUNC_3(VAR_6, VAR_4, VAR_7) != 0 ||
     FUNC_2(VAR_6, VAR_1, VAR_2) != 0) {
  FUNC_0(&VAR_5.fmri_set_failed.value.ui64);
  return (0);
 }

 if (VAR_8 != ((void*)0) && FUNC_1(VAR_6, VAR_0,
     (nvlist_t *)VAR_8) != 0) {
  FUNC_0(&VAR_5.fmri_set_failed.value.ui64);
  return (0);
 }

 return (1);
}
