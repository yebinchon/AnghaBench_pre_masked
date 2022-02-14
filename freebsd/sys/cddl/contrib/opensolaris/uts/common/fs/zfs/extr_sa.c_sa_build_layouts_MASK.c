
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_12__ ;


typedef unsigned long long uint64_t ;
typedef int uint16_t ;
struct TYPE_30__ {scalar_t__ sa_force_spill; TYPE_1__* sa_attr_table; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_31__ {int lot_num; } ;
typedef TYPE_3__ sa_lot_t ;
struct TYPE_32__ {int* sa_lengths; int sa_magic; } ;
typedef TYPE_4__ sa_hdr_phys_t ;
struct TYPE_33__ {TYPE_8__* sa_os; int * sa_spill_tab; TYPE_12__* sa_spill; int * sa_bonus_tab; TYPE_12__* sa_bonus; } ;
typedef TYPE_5__ sa_handle_t ;
struct TYPE_34__ {size_t sa_attr; int sa_length; int sa_size; int sa_data; int sa_data_func; void* sa_addr; } ;
typedef TYPE_6__ sa_bulk_attr_t ;
typedef scalar_t__ sa_buf_type_t ;
typedef size_t sa_attr_type_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ dmu_object_type_t ;
typedef scalar_t__ boolean_t ;
typedef int blkptr_t ;
struct TYPE_35__ {TYPE_2__* os_sa; } ;
struct TYPE_29__ {scalar_t__ sa_length; } ;
struct TYPE_28__ {int db_size; scalar_t__ db_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 unsigned long long FUNC_6 (size_t) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (int ,int ,void*,int) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__*,size_t) ;
 int FUNC_10 (TYPE_4__*,int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_12__*,int *) ;
 int FUNC_14 (TYPE_12__*,int *) ;
 int FUNC_15 (TYPE_12__*,int*) ;
 scalar_t__ FUNC_16 (TYPE_8__*,int ,int *) ;
 scalar_t__ FUNC_17 (TYPE_12__*,int,int *) ;
 scalar_t__ FUNC_18 (TYPE_12__*,int *,TYPE_12__**) ;
 size_t* FUNC_19 (int,int ) ;
 int FUNC_20 (size_t*,int) ;
 scalar_t__ FUNC_21 (TYPE_5__*,scalar_t__) ;
 int FUNC_22 (TYPE_8__*,unsigned long long,size_t*,int,int *,TYPE_3__**) ;
 int FUNC_23 (TYPE_2__*,TYPE_6__*,int,TYPE_12__*,scalar_t__,int,int*,int*,scalar_t__*) ;
 int FUNC_24 (TYPE_5__*) ;
 int FUNC_25 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_26 (TYPE_5__*,int,int *) ;

__attribute__((used)) static int
FUNC_27(sa_handle_t *VAR_9, sa_bulk_attr_t *VAR_10, int VAR_11,
    dmu_tx_t *VAR_12)
{
 sa_os_t *VAR_13 = VAR_9->sa_os->os_sa;
 uint64_t VAR_14;
 sa_buf_type_t VAR_15;
 sa_hdr_phys_t *VAR_16;
 void *VAR_17;
 int VAR_18;
 sa_attr_type_t *VAR_19, *VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25 = 0;
 int VAR_26;
 dmu_object_type_t VAR_27;
 sa_lot_t *VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 boolean_t VAR_32;

 FUNC_14(VAR_9->sa_bonus, VAR_12);
 VAR_27 = FUNC_7(VAR_9->sa_bonus);
 FUNC_15(VAR_9->sa_bonus, &VAR_23);
 VAR_31 = FUNC_2(VAR_23);

 FUNC_15(VAR_9->sa_bonus, &VAR_23);
 VAR_31 = FUNC_2(VAR_23);


 VAR_24 = FUNC_23(VAR_13, VAR_10, VAR_11, VAR_9->sa_bonus,
     VAR_5, VAR_31, &VAR_21, &VAR_26, &VAR_32);

 if (VAR_26 > VAR_8)
  return (FUNC_11(VAR_2));

 FUNC_12(0 == FUNC_17(VAR_9->sa_bonus, VAR_32 ?
     FUNC_4(VAR_31 - sizeof (blkptr_t), VAR_26 + VAR_24) :
     VAR_26 + VAR_24, VAR_12));

 FUNC_0((VAR_27 == VAR_1 && VAR_32 == 0) ||
     VAR_27 == VAR_0);


 if (VAR_32) {
  boolean_t VAR_33;

  if (VAR_9->sa_spill == ((void*)0)) {
   FUNC_12(FUNC_18(VAR_9->sa_bonus, ((void*)0),
       &VAR_9->sa_spill) == 0);
  }
  FUNC_14(VAR_9->sa_spill, VAR_12);

  VAR_25 = FUNC_23(VAR_13, &VAR_10[VAR_21],
      VAR_11 - VAR_21, VAR_9->sa_spill, VAR_7,
      VAR_9->sa_spill->db_size, &VAR_21, &VAR_30, &VAR_33);

  if (VAR_30 > VAR_8)
   return (FUNC_11(VAR_2));

  VAR_18 = VAR_9->sa_spill->db_size - VAR_25;
  if (FUNC_1(VAR_30, VAR_25) >
      VAR_9->sa_spill->db_size)
   FUNC_12(0 == FUNC_26(VAR_9,
       FUNC_1(VAR_30, VAR_25), VAR_12));
 }


 VAR_17 = (void *)((uintptr_t)VAR_9->sa_bonus->db_data + VAR_24);
 VAR_16 = (sa_hdr_phys_t *)VAR_9->sa_bonus->db_data;
 VAR_15 = VAR_5;

 if (VAR_32)
  VAR_18 = (VAR_13->sa_force_spill) ?
      0 : VAR_4 - VAR_24;
 else
  VAR_18 = VAR_9->sa_bonus->db_size - VAR_24;

 VAR_20 = VAR_19 = FUNC_19(sizeof (sa_attr_type_t) * VAR_11,
     VAR_3);
 VAR_22 = 0;

 for (VAR_21 = 0, VAR_29 = 0, VAR_14 = -1ULL; VAR_21 != VAR_11; VAR_21++) {
  uint16_t VAR_34;

  FUNC_0(FUNC_3(VAR_17, 8));
  FUNC_0(FUNC_3(VAR_18, 8));
  VAR_19[VAR_21] = VAR_10[VAR_21].sa_attr;
  VAR_34 = FUNC_9(VAR_13, VAR_19[VAR_21]);
  if (VAR_34 == 0)
   VAR_34 = VAR_10[VAR_21].sa_length;
  else
   FUNC_12(VAR_34 == VAR_10[VAR_21].sa_length);

  if (VAR_18 < VAR_34) {
   FUNC_12(VAR_32);
   FUNC_12(VAR_27 == VAR_0);
   if (VAR_15 == VAR_5 && !VAR_13->sa_force_spill) {
    FUNC_22(VAR_9->sa_os, VAR_14, VAR_20,
        VAR_22, VAR_12, &VAR_28);
    FUNC_10(VAR_16, VAR_28->lot_num, VAR_24);
   }

   VAR_15 = VAR_7;
   VAR_14 = -1ULL;
   VAR_29 = 0;

   VAR_16 = (sa_hdr_phys_t *)VAR_9->sa_spill->db_data;
   VAR_16->sa_magic = VAR_6;
   VAR_17 = (void *)((uintptr_t)VAR_16 +
       VAR_25);
   VAR_20 = &VAR_19[VAR_21];
   VAR_18 = VAR_9->sa_spill->db_size - VAR_25;
   VAR_22 = 0;
  }
  VAR_14 ^= FUNC_6(VAR_19[VAR_21]);
  VAR_10[VAR_21].sa_addr = VAR_17;
  VAR_10[VAR_21].sa_size = VAR_34;
  FUNC_8(VAR_10[VAR_21].sa_data_func, VAR_10[VAR_21].sa_data,
      VAR_17, VAR_34);
  if (VAR_13->sa_attr_table[VAR_19[VAR_21]].sa_length == 0) {
   VAR_16->sa_lengths[VAR_29++] = VAR_34;
  }
  FUNC_12((uintptr_t)VAR_17 % 8 == 0);
  VAR_17 = (void *)FUNC_5(((uintptr_t)VAR_17 +
      VAR_34), 8);
  VAR_18 -= FUNC_5(VAR_34, 8);
  VAR_22++;
 }

 FUNC_22(VAR_9->sa_os, VAR_14, VAR_20, VAR_22, VAR_12, &VAR_28);





 FUNC_12((VAR_27 == VAR_1 && VAR_28->lot_num == 0) ||
     (VAR_27 == VAR_0 && VAR_28->lot_num > 1));

 if (VAR_27 == VAR_0) {
  FUNC_10(VAR_16, VAR_28->lot_num,
      VAR_15 == VAR_5 ? VAR_24 : VAR_25);
 }

 FUNC_20(VAR_19, sizeof (sa_attr_type_t) * VAR_11);
 if (VAR_9->sa_bonus_tab) {
  FUNC_25(VAR_9->sa_os, VAR_9->sa_bonus_tab);
  VAR_9->sa_bonus_tab = ((void*)0);
 }
 if (!VAR_13->sa_force_spill)
  FUNC_12(0 == FUNC_21(VAR_9, VAR_5));
 if (VAR_9->sa_spill) {
  FUNC_25(VAR_9->sa_os, VAR_9->sa_spill_tab);
  if (!VAR_32) {



   FUNC_13(VAR_9->sa_spill, ((void*)0));
   VAR_9->sa_spill = ((void*)0);
   VAR_9->sa_spill_tab = ((void*)0);
   FUNC_12(0 == FUNC_16(VAR_9->sa_os,
       FUNC_24(VAR_9), VAR_12));
  } else {
   FUNC_12(0 == FUNC_21(VAR_9, VAR_7));
  }
 }

 return (0);
}
