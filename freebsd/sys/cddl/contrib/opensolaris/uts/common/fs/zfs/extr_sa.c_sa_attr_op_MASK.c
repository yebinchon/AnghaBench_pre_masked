
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {size_t sa_num_attrs; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_17__ {int sa_spill; TYPE_11__* sa_spill_tab; int sa_bonus; TYPE_11__* sa_bonus_tab; TYPE_1__* sa_os; } ;
typedef TYPE_3__ sa_handle_t ;
typedef int sa_data_op_t ;
struct TYPE_18__ {size_t sa_attr; scalar_t__ sa_size; scalar_t__ sa_length; int * sa_data; int sa_data_func; int * sa_addr; } ;
typedef TYPE_4__ sa_bulk_attr_t ;
typedef int sa_buf_type_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {TYPE_2__* os_sa; } ;
struct TYPE_14__ {int * sa_idx_tab; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_11__*,int ,size_t,TYPE_4__,int,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int *,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int) ;

 int VAR_5 ;
 int VAR_6 ;

 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,size_t,int ,int ,int *,scalar_t__,int *) ;

int
FUNC_9(sa_handle_t *VAR_7, sa_bulk_attr_t *VAR_8, int VAR_9,
    sa_data_op_t VAR_10, dmu_tx_t *VAR_11)
{
 sa_os_t *VAR_12 = VAR_7->sa_os->os_sa;
 int VAR_13;
 int VAR_14 = 0;
 sa_buf_type_t VAR_15;

 VAR_15 = 0;

 FUNC_0(VAR_9 > 0);
 for (VAR_13 = 0; VAR_13 != VAR_9; VAR_13++) {
  FUNC_0(VAR_8[VAR_13].sa_attr <= VAR_7->sa_os->os_sa->sa_num_attrs);

  VAR_8[VAR_13].sa_addr = ((void*)0);


  if (VAR_7->sa_bonus_tab && FUNC_5(
      VAR_7->sa_bonus_tab->sa_idx_tab[VAR_8[VAR_13].sa_attr])) {
   FUNC_1(VAR_12, VAR_7->sa_bonus_tab,
       FUNC_3(VAR_7, VAR_4),
       VAR_8[VAR_13].sa_attr, VAR_8[VAR_13], VAR_4, VAR_7);
   if (VAR_11 && !(VAR_15 & VAR_4)) {
    FUNC_6(VAR_7->sa_bonus, VAR_11);
    VAR_15 |= VAR_4;
   }
  }
  if (VAR_8[VAR_13].sa_addr == ((void*)0) &&
      ((VAR_14 = FUNC_7(VAR_7)) == 0)) {
   if (FUNC_5(
       VAR_7->sa_spill_tab->sa_idx_tab[VAR_8[VAR_13].sa_attr])) {
    FUNC_1(VAR_12, VAR_7->sa_spill_tab,
        FUNC_3(VAR_7, VAR_6),
        VAR_8[VAR_13].sa_attr, VAR_8[VAR_13], VAR_6, VAR_7);
    if (VAR_11 && !(VAR_15 & VAR_6) &&
        VAR_8[VAR_13].sa_size == VAR_8[VAR_13].sa_length) {
     FUNC_6(VAR_7->sa_spill, VAR_11);
     VAR_15 |= VAR_6;
    }
   }
  }
  if (VAR_14 && VAR_14 != VAR_2) {
   return ((VAR_14 == VAR_0) ? VAR_1 : VAR_14);
  }

  switch (VAR_10) {
  case 129:
   if (VAR_8[VAR_13].sa_addr == ((void*)0))
    return (FUNC_4(VAR_2));
   if (VAR_8[VAR_13].sa_data) {
    FUNC_2(VAR_8[VAR_13].sa_data_func,
        VAR_8[VAR_13].sa_addr, VAR_8[VAR_13].sa_data,
        VAR_8[VAR_13].sa_size);
   }
   continue;

  case 128:

   if (VAR_8[VAR_13].sa_addr &&
       VAR_8[VAR_13].sa_size == VAR_8[VAR_13].sa_length) {
    FUNC_2(VAR_8[VAR_13].sa_data_func,
        VAR_8[VAR_13].sa_data, VAR_8[VAR_13].sa_addr,
        VAR_8[VAR_13].sa_length);
    continue;
   } else if (VAR_8[VAR_13].sa_addr) {
    VAR_14 = FUNC_8(VAR_7, VAR_8[VAR_13].sa_attr,
        VAR_5, VAR_8[VAR_13].sa_data_func,
        VAR_8[VAR_13].sa_data, VAR_8[VAR_13].sa_length, VAR_11);
   } else {
    VAR_14 = FUNC_8(VAR_7, VAR_8[VAR_13].sa_attr,
        VAR_3, VAR_8[VAR_13].sa_data_func,
        VAR_8[VAR_13].sa_data, VAR_8[VAR_13].sa_length, VAR_11);
   }
   if (VAR_14)
    return (VAR_14);
   break;
  }
 }
 return (VAR_14);
}
