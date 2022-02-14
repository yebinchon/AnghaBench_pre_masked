
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zap_ismicro; } ;
typedef TYPE_1__ zap_t ;
typedef int zap_name_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int mzap_ent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int*,int*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *,int ,int ,int ,int ,TYPE_1__**) ;
 int * FUNC_4 (TYPE_1__*,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

int
FUNC_7(objset_t *VAR_6, uint64_t VAR_7, const char *VAR_8,
    uint64_t *VAR_9, uint64_t *VAR_10)
{
 zap_t *VAR_11;

 int VAR_12 =
     FUNC_3(VAR_6, VAR_7, ((void*)0), VAR_4, VAR_5, VAR_2, VAR_3, &VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);
 zap_name_t *VAR_13 = FUNC_4(VAR_11, VAR_8, 0);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_11, VAR_3);
  return (FUNC_0(VAR_1));
 }
 if (!VAR_11->zap_ismicro) {
  VAR_12 = FUNC_1(VAR_13, VAR_9, VAR_10);
 } else {
  mzap_ent_t *VAR_14 = FUNC_2(VAR_13);
  if (VAR_14 == ((void*)0)) {
   VAR_12 = FUNC_0(VAR_0);
  } else {
   if (VAR_9)
    *VAR_9 = 8;
   if (VAR_10)
    *VAR_10 = 1;
  }
 }
 FUNC_5(VAR_13);
 FUNC_6(VAR_11, VAR_3);
 return (VAR_12);
}
