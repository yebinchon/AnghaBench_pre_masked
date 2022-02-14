
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef int objset_t ;
typedef int last_remap_txg ;
struct TYPE_9__ {int dd_object; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_10__ {TYPE_1__* ds_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned long long) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,unsigned long long) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 unsigned long long FUNC_15 (int ) ;
 unsigned long long FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,int ,int ,int,int,unsigned long long*) ;

int
FUNC_19(const char *VAR_5)
{
 int VAR_6 = 0;
 objset_t *VAR_7 = ((void*)0);
 uint64_t VAR_8;
 uint64_t VAR_9;
 dsl_dir_t *VAR_10;

 VAR_6 = FUNC_2(VAR_5, VAR_3, &VAR_7);
 if (VAR_6 != 0) {
  return (VAR_6);
 }
 VAR_10 = FUNC_1(VAR_7)->ds_dir;

 if (!FUNC_14(FUNC_6(VAR_7),
     VAR_4)) {
  FUNC_4(VAR_7, VAR_3);
  return (FUNC_0(VAR_2));
 }

 if (FUNC_7(FUNC_1(VAR_7))) {
  FUNC_4(VAR_7, VAR_3);
  return (FUNC_0(VAR_1));
 }




 VAR_8 = FUNC_15(FUNC_6(VAR_7));
 if (VAR_8 == -1ULL) {
  FUNC_4(VAR_7, VAR_3);
  return (0);
 }




 if (FUNC_11(VAR_10)) {
  uint64_t VAR_11;
  if (FUNC_18(FUNC_17(FUNC_6(VAR_7)),
      VAR_10->dd_object, VAR_0,
      sizeof (VAR_11), 1, &VAR_11) == 0 &&
      VAR_11 > VAR_8) {
   FUNC_4(VAR_7, VAR_3);
   return (0);
  }
 }

 FUNC_8(FUNC_1(VAR_7), VAR_3);
 FUNC_13(FUNC_3(VAR_7), VAR_3);

 VAR_9 = FUNC_16(FUNC_6(VAR_7));
 VAR_6 = FUNC_5(VAR_7, VAR_8);
 if (VAR_6 == 0) {





  VAR_6 = FUNC_12(VAR_10, VAR_9);
 }

 FUNC_9(FUNC_1(VAR_7), VAR_3);
 FUNC_10(FUNC_1(VAR_7), VAR_3);

 return (VAR_6);
}
