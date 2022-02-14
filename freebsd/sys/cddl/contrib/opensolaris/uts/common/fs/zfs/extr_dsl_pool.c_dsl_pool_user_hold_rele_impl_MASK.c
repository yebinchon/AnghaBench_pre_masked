
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
struct TYPE_4__ {scalar_t__ dp_tmp_userrefs_obj; int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 char* FUNC_4 (char*,int ,char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,scalar_t__,char*,int,int,scalar_t__*,int *) ;
 int FUNC_8 (int *,scalar_t__,char*,int *) ;

__attribute__((used)) static int
FUNC_9(dsl_pool_t *VAR_2, uint64_t VAR_3,
    const char *VAR_4, uint64_t VAR_5, dmu_tx_t *VAR_6, boolean_t VAR_7)
{
 objset_t *VAR_8 = VAR_2->dp_meta_objset;
 uint64_t VAR_9 = VAR_2->dp_tmp_userrefs_obj;
 char *VAR_10;
 int VAR_11;

 FUNC_0(FUNC_5(VAR_2->dp_spa) >= VAR_1);
 FUNC_0(FUNC_2(VAR_6));





 if (VAR_9 == 0) {
  if (VAR_7) {
   FUNC_3(VAR_2, VAR_6);
   VAR_9 = VAR_2->dp_tmp_userrefs_obj;
  } else {
   return (FUNC_1(VAR_0));
  }
 }

 VAR_10 = FUNC_4("%llx-%s", (u_longlong_t)VAR_3, VAR_4);
 if (VAR_7)
  VAR_11 = FUNC_7(VAR_8, VAR_9, VAR_10, 8, 1, &VAR_5, VAR_6);
 else
  VAR_11 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_6);
 FUNC_6(VAR_10);

 return (VAR_11);
}
