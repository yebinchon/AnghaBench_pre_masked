
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
struct TYPE_6__ {int ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (char const*,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 scalar_t__ FUNC_7 (int *,char*,char**) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2, nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 int VAR_5;
 dsl_pool_t *VAR_6;
 dsl_dataset_t *VAR_7, *VAR_8;
 char *VAR_9;
 uint64_t VAR_10, VAR_11, VAR_12;

 if (FUNC_7(VAR_3, "firstsnap", &VAR_9) != 0)
  return (FUNC_0(VAR_0));

 VAR_5 = FUNC_4(VAR_2, VAR_1, &VAR_6);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_5 = FUNC_1(VAR_6, VAR_2, VAR_1, &VAR_7);
 if (VAR_5 == 0 && !VAR_7->ds_is_snapshot) {
  FUNC_2(VAR_7, VAR_1);
  VAR_5 = FUNC_0(VAR_0);
 }
 if (VAR_5 != 0) {
  FUNC_5(VAR_6, VAR_1);
  return (VAR_5);
 }
 VAR_5 = FUNC_1(VAR_6, VAR_9, VAR_1, &VAR_8);
 if (VAR_5 == 0 && !VAR_8->ds_is_snapshot) {
  FUNC_2(VAR_8, VAR_1);
  VAR_5 = FUNC_0(VAR_0);
 }
 if (VAR_5 != 0) {
  FUNC_2(VAR_7, VAR_1);
  FUNC_5(VAR_6, VAR_1);
  return (VAR_5);
 }

 VAR_5 = FUNC_3(VAR_8, VAR_7, &VAR_10, &VAR_11, &VAR_12);
 FUNC_2(VAR_8, VAR_1);
 FUNC_2(VAR_7, VAR_1);
 FUNC_5(VAR_6, VAR_1);
 FUNC_6(VAR_4, "used", VAR_10);
 FUNC_6(VAR_4, "compressed", VAR_11);
 FUNC_6(VAR_4, "uncompressed", VAR_12);
 return (VAR_5);
}
