
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
 int VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_8 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,char const*) ;
 int FUNC_3 (int *,int ,int) ;

void
FUNC_4(nvlist_t *VAR_9, int VAR_10, const nvlist_t *VAR_11,
    const char *VAR_12, const char *VAR_13, const char *VAR_14)
{
 int VAR_15 = 0;

 if (VAR_10 != VAR_0) {
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);
  return;
 }

 VAR_15 |= FUNC_3(VAR_9, VAR_7, VAR_10);
 VAR_15 |= FUNC_2(VAR_9, VAR_5, VAR_6);

 if (VAR_11 != ((void*)0)) {
  VAR_15 |= FUNC_1(VAR_9, VAR_1,
      (nvlist_t *)VAR_11);
 }

 VAR_15 |= FUNC_2(VAR_9, VAR_3, VAR_12);

 if (VAR_13 != ((void*)0))
  VAR_15 |= FUNC_2(VAR_9, VAR_2, VAR_13);

 if (VAR_14 != ((void*)0))
  VAR_15 |= FUNC_2(VAR_9, VAR_4, VAR_14);

 if (VAR_15)
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);

}
