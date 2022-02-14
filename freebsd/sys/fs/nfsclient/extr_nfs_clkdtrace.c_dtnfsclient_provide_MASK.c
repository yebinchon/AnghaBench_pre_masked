
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
struct TYPE_2__ {int * nr_v4_name; void* nr_v4_id_done; void* nr_v4_id_start; int * nr_v3_name; void* nr_v3_id_done; void* nr_v3_id_start; int * nr_v2_name; void* nr_v2_id_done; void* nr_v2_id_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;

__attribute__((used)) static void
FUNC_2(void *VAR_29, dtrace_probedesc_t *VAR_30)
{
 int VAR_31;

 if (VAR_30 != ((void*)0))
  return;




 if (FUNC_1(VAR_7, VAR_1,
     VAR_4, VAR_3) == 0) {
  VAR_15 = FUNC_0(
      VAR_7, VAR_1,
      VAR_4, VAR_3, 0, ((void*)0));
 }
 if (FUNC_1(VAR_7, VAR_1,
     VAR_5, VAR_6) == 0) {
  VAR_16 = FUNC_0(
      VAR_7, VAR_1,
      VAR_5, VAR_6, 0, ((void*)0));
 }
 if (FUNC_1(VAR_7, VAR_1,
     VAR_5, VAR_9) == 0) {
  VAR_17 = FUNC_0(
      VAR_7, VAR_1,
      VAR_5, VAR_9, 0, ((void*)0));
 }
 if (FUNC_1(VAR_7, VAR_1,
     VAR_8, VAR_3) == 0) {
  VAR_18 = FUNC_0(
      VAR_7, VAR_1,
      VAR_8, VAR_3, 0, ((void*)0));
 }




 if (FUNC_1(VAR_7, VAR_2,
     VAR_4, VAR_3) == 0) {
  VAR_19 = FUNC_0(
      VAR_7, VAR_2,
      VAR_4, VAR_3, 0, ((void*)0));
 }
 if (FUNC_1(VAR_7, VAR_2,
     VAR_5, VAR_6) == 0) {
  VAR_20 = FUNC_0(
      VAR_7, VAR_2,
      VAR_5, VAR_6, 0, ((void*)0));
 }
 if (FUNC_1(VAR_7, VAR_2,
     VAR_5, VAR_9) == 0) {
  VAR_21 = FUNC_0(
      VAR_7, VAR_2,
      VAR_5, VAR_9, 0, ((void*)0));
 }
 if (FUNC_1(VAR_7, VAR_2,
     VAR_8, VAR_3) == 0) {
  VAR_22 = FUNC_0(
      VAR_7, VAR_2,
      VAR_8, VAR_3, 0, ((void*)0));
 }





 for (VAR_31 = 0; VAR_31 < VAR_0 + 1; VAR_31++) {
  if (VAR_13[VAR_31].nr_v2_name != ((void*)0) &&
      FUNC_1(VAR_7, VAR_10,
      VAR_13[VAR_31].nr_v2_name, VAR_14) ==
      0) {
   VAR_13[VAR_31].nr_v2_id_start =
       FUNC_0(VAR_7,
       VAR_10,
       VAR_13[VAR_31].nr_v2_name,
       VAR_14, 0,
       &VAR_24[VAR_31]);
  }
  if (VAR_13[VAR_31].nr_v2_name != ((void*)0) &&
      FUNC_1(VAR_7, VAR_10,
      VAR_13[VAR_31].nr_v2_name, VAR_3) ==
      0) {
   VAR_13[VAR_31].nr_v2_id_done =
       FUNC_0(VAR_7,
       VAR_10,
       VAR_13[VAR_31].nr_v2_name,
       VAR_3, 0,
       &VAR_23[VAR_31]);
  }
 }





 for (VAR_31 = 0; VAR_31 < VAR_0 + 1; VAR_31++) {
  if (VAR_13[VAR_31].nr_v3_name != ((void*)0) &&
      FUNC_1(VAR_7, VAR_11,
      VAR_13[VAR_31].nr_v3_name, VAR_14) ==
      0) {
   VAR_13[VAR_31].nr_v3_id_start =
       FUNC_0(VAR_7,
       VAR_11,
       VAR_13[VAR_31].nr_v3_name,
       VAR_14, 0,
       &VAR_26[VAR_31]);
  }
  if (VAR_13[VAR_31].nr_v3_name != ((void*)0) &&
      FUNC_1(VAR_7, VAR_11,
      VAR_13[VAR_31].nr_v3_name, VAR_3) ==
      0) {
   VAR_13[VAR_31].nr_v3_id_done =
       FUNC_0(VAR_7,
       VAR_11,
       VAR_13[VAR_31].nr_v3_name,
       VAR_3, 0,
       &VAR_25[VAR_31]);
  }
 }




 for (VAR_31 = 0; VAR_31 < VAR_0 + 1; VAR_31++) {
  if (FUNC_1(VAR_7, VAR_12,
      VAR_13[VAR_31].nr_v4_name, VAR_14) ==
      0) {
   VAR_13[VAR_31].nr_v4_id_start =
       FUNC_0(VAR_7,
       VAR_12,
       VAR_13[VAR_31].nr_v4_name,
       VAR_14, 0,
       &VAR_28[VAR_31]);
  }
  if (FUNC_1(VAR_7, VAR_12,
      VAR_13[VAR_31].nr_v4_name, VAR_3) ==
      0) {
   VAR_13[VAR_31].nr_v4_id_done =
       FUNC_0(VAR_7,
       VAR_12,
       VAR_13[VAR_31].nr_v4_name,
       VAR_3, 0,
       &VAR_27[VAR_31]);
  }
 }
}
