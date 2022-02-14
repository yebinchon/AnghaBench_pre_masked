
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zl_suspend; int zl_lock; int zl_cv_suspend; scalar_t__ zl_suspending; int zl_dmu_pool; TYPE_2__* zl_header; } ;
typedef TYPE_1__ zilog_t ;
struct TYPE_7__ {int zh_flags; int zh_log; } ;
typedef TYPE_2__ zil_header_t ;
typedef int objset_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*,scalar_t__) ;
 int FUNC_17 (int *) ;

int
FUNC_18(const char *VAR_5, void **VAR_6)
{
 objset_t *VAR_7;
 zilog_t *VAR_8;
 const zil_header_t *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_5, VAR_4, &VAR_7);
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_8 = FUNC_9(VAR_7);

 FUNC_12(&VAR_8->zl_lock);
 VAR_9 = VAR_8->zl_header;

 if (VAR_9->zh_flags & VAR_3) {
  FUNC_13(&VAR_8->zl_lock);
  FUNC_8(VAR_7, VAR_4);
  return (FUNC_2(VAR_2));
 }







 if (VAR_6 == ((void*)0) && !VAR_8->zl_suspending &&
     (VAR_8->zl_suspend > 0 || FUNC_1(&VAR_9->zh_log))) {
  FUNC_13(&VAR_8->zl_lock);
  FUNC_8(VAR_7, VAR_4);
  return (0);
 }

 FUNC_10(FUNC_5(VAR_7), VAR_4);
 FUNC_11(FUNC_7(VAR_7), VAR_4);

 VAR_8->zl_suspend++;

 if (VAR_8->zl_suspend > 1) {





  while (VAR_8->zl_suspending)
   FUNC_4(&VAR_8->zl_cv_suspend, &VAR_8->zl_lock);
  FUNC_13(&VAR_8->zl_lock);

  if (VAR_6 == ((void*)0))
   FUNC_17(VAR_7);
  else
   *VAR_6 = VAR_7;
  return (0);
 }






 if (FUNC_1(&VAR_9->zh_log)) {
  FUNC_0(VAR_6 != ((void*)0));

  *VAR_6 = VAR_7;
  FUNC_13(&VAR_8->zl_lock);
  return (0);
 }

 VAR_8->zl_suspending = VAR_1;
 FUNC_13(&VAR_8->zl_lock);
 FUNC_15(VAR_8, 0);






 FUNC_14(VAR_8->zl_dmu_pool, 0);

 FUNC_16(VAR_8, VAR_0);

 FUNC_12(&VAR_8->zl_lock);
 VAR_8->zl_suspending = VAR_0;
 FUNC_3(&VAR_8->zl_cv_suspend);
 FUNC_13(&VAR_8->zl_lock);

 if (VAR_6 == ((void*)0))
  FUNC_17(VAR_7);
 else
  *VAR_6 = VAR_7;
 return (0);
}
