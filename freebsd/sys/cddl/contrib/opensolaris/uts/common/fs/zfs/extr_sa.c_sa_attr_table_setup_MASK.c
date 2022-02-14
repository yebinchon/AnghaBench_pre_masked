
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int zap_cursor_t ;
struct TYPE_16__ {int za_first_integer; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_17__ {size_t* sa_user_table; int sa_user_table_sz; scalar_t__ sa_reg_attr_obj; int sa_num_attrs; int sa_need_attr_registration; TYPE_3__* sa_attr_table; } ;
typedef TYPE_2__ sa_os_t ;
typedef size_t sa_attr_type_t ;
struct TYPE_18__ {size_t sa_attr; void* sa_name; int sa_byteswap; int sa_length; void* sa_registered; } ;
typedef TYPE_3__ sa_attr_table_t ;
struct TYPE_19__ {int sa_name; int sa_byteswap; int sa_length; } ;
typedef TYPE_4__ sa_attr_reg_t ;
struct TYPE_20__ {TYPE_2__* os_sa; } ;
typedef TYPE_5__ objset_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef void* boolean_t ;
struct TYPE_15__ {size_t sa_attr; int sa_name; int sa_byteswap; int sa_length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (size_t*,int) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_10__* VAR_6 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (void*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,scalar_t__,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,TYPE_5__*,scalar_t__) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 int FUNC_17 (TYPE_5__*,scalar_t__,int ,int,int,int*) ;

__attribute__((used)) static int
FUNC_18(objset_t *VAR_7, sa_attr_reg_t *VAR_8, int VAR_9)
{
 sa_os_t *VAR_10 = VAR_7->os_sa;
 uint64_t VAR_11 = 0;
 uint64_t VAR_12 = 0;
 int VAR_13 = 0;
 uint64_t VAR_14;
 sa_attr_table_t *VAR_15;
 zap_cursor_t VAR_16;
 zap_attribute_t VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 dmu_objset_type_t VAR_20 = FUNC_5(VAR_7);

 VAR_10->sa_user_table =
     FUNC_7(VAR_9 * sizeof (sa_attr_type_t), VAR_4);
 VAR_10->sa_user_table_sz = VAR_9 * sizeof (sa_attr_type_t);

 if (VAR_10->sa_reg_attr_obj != 0) {
  VAR_13 = FUNC_12(VAR_7, VAR_10->sa_reg_attr_obj,
      &VAR_11);




  if (VAR_13 || (VAR_13 == 0 && VAR_11 == 0)) {
   if (VAR_13 == 0)
    VAR_13 = FUNC_4(VAR_3);
   goto bail;
  }
  VAR_12 = VAR_11;
 }

 if (VAR_20 == VAR_2 && VAR_11 == 0)
  VAR_11 += VAR_5;


 for (VAR_19 = 0; VAR_19 != VAR_9; VAR_19++) {
  boolean_t VAR_21 = VAR_0;
  int VAR_22;

  if (VAR_20 == VAR_2) {
   for (VAR_22 = 0; VAR_22 != VAR_5; VAR_22++) {
    if (FUNC_9(VAR_8[VAR_19].sa_name,
        VAR_6[VAR_22].sa_name) == 0) {
     VAR_10->sa_user_table[VAR_19] =
         VAR_6[VAR_22].sa_attr;
     VAR_21 = VAR_1;
    }
   }
  }
  if (VAR_21)
   continue;

  if (VAR_10->sa_reg_attr_obj)
   VAR_13 = FUNC_17(VAR_7, VAR_10->sa_reg_attr_obj,
       VAR_8[VAR_19].sa_name, 8, 1, &VAR_14);
  else
   VAR_13 = FUNC_4(128);
  switch (VAR_13) {
  case 128:
   VAR_10->sa_user_table[VAR_19] = (sa_attr_type_t)VAR_11;
   VAR_11++;
   break;
  case 0:
   VAR_10->sa_user_table[VAR_19] = FUNC_3(VAR_14);
   break;
  default:
   goto bail;
  }
 }

 VAR_10->sa_num_attrs = VAR_11;
 VAR_15 = VAR_10->sa_attr_table =
     FUNC_7(sizeof (sa_attr_table_t) * VAR_11, VAR_4);







 if (VAR_10->sa_reg_attr_obj) {
  for (FUNC_15(&VAR_16, VAR_7, VAR_10->sa_reg_attr_obj);
      (VAR_13 = FUNC_16(&VAR_16, &VAR_17)) == 0;
      FUNC_13(&VAR_16)) {
   uint64_t VAR_23;
   VAR_23 = VAR_17.za_first_integer;

   VAR_18++;
   VAR_15[FUNC_3(VAR_23)].sa_attr = FUNC_3(VAR_23);
   VAR_15[FUNC_3(VAR_23)].sa_length = FUNC_2(VAR_23);
   VAR_15[FUNC_3(VAR_23)].sa_byteswap = FUNC_1(VAR_23);
   VAR_15[FUNC_3(VAR_23)].sa_registered = VAR_1;

   if (VAR_15[FUNC_3(VAR_23)].sa_name) {
    continue;
   }
   VAR_15[FUNC_3(VAR_23)].sa_name =
       FUNC_7(FUNC_11(VAR_17.za_name) +1, VAR_4);
   (void) FUNC_10(VAR_15[FUNC_3(VAR_23)].sa_name, VAR_17.za_name,
       FUNC_11(VAR_17.za_name) +1);
  }
  FUNC_14(&VAR_16);




  if (VAR_18 != VAR_12) {
   FUNC_0(VAR_13 != 0);
   goto bail;
  }

 }

 if (VAR_20 == VAR_2) {
  for (VAR_19 = 0; VAR_19 != VAR_5; VAR_19++) {
   if (VAR_15[VAR_19].sa_name)
    continue;
   VAR_15[VAR_19].sa_attr = VAR_6[VAR_19].sa_attr;
   VAR_15[VAR_19].sa_length = VAR_6[VAR_19].sa_length;
   VAR_15[VAR_19].sa_byteswap = VAR_6[VAR_19].sa_byteswap;
   VAR_15[VAR_19].sa_registered = VAR_0;
   VAR_15[VAR_19].sa_name =
       FUNC_7(FUNC_11(VAR_6[VAR_19].sa_name) +1,
       VAR_4);
   (void) FUNC_10(VAR_15[VAR_19].sa_name,
       VAR_6[VAR_19].sa_name,
       FUNC_11(VAR_6[VAR_19].sa_name) + 1);
  }
 }

 for (VAR_19 = 0; VAR_19 != VAR_9; VAR_19++) {
  sa_attr_type_t VAR_24;

  VAR_24 = VAR_10->sa_user_table[VAR_19];
  if (VAR_15[VAR_24].sa_name)
   continue;

  VAR_15[VAR_24].sa_length = VAR_8[VAR_19].sa_length;
  VAR_15[VAR_24].sa_byteswap = VAR_8[VAR_19].sa_byteswap;
  VAR_15[VAR_24].sa_attr = VAR_24;
  VAR_15[VAR_24].sa_name =
      FUNC_7(FUNC_11(VAR_8[VAR_19].sa_name) + 1, VAR_4);
  (void) FUNC_10(VAR_15[VAR_24].sa_name, VAR_8[VAR_19].sa_name,
      FUNC_11(VAR_8[VAR_19].sa_name) + 1);
 }

 VAR_10->sa_need_attr_registration =
     (VAR_11 != VAR_18);

 return (0);
bail:
 FUNC_6(VAR_10->sa_user_table, VAR_9 * sizeof (sa_attr_type_t));
 VAR_10->sa_user_table = ((void*)0);
 FUNC_8(VAR_10);
 return ((VAR_13 != 0) ? VAR_13 : VAR_3);
}
