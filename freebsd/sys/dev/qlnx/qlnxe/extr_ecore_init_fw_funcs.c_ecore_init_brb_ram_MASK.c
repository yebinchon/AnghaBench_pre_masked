
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct init_brb_ram_req {int* num_active_tcs; size_t max_ports_per_engine; int guranteed_per_tc; int min_pkt_size; int headroom_per_tc; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,size_t,size_t) ;

void FUNC_3(struct ecore_hwfn *VAR_19,
      struct ecore_ptt *VAR_20,
      struct init_brb_ram_req* VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24;
 u32 VAR_25, VAR_26 = 0;
 u8 VAR_27, VAR_28 = 0;

 VAR_22 = (u32)FUNC_0(VAR_21->headroom_per_tc, VAR_0);
 VAR_23 = (u32)FUNC_0(VAR_21->min_pkt_size, VAR_0);
 VAR_24 = FUNC_1(VAR_19->p_dev) ? VAR_16 : VAR_15;


 for (VAR_27 = 0; VAR_27 < VAR_17; VAR_27++)
  if (VAR_21->num_active_tcs[VAR_27])
   VAR_28++;

 VAR_25 = (u32)(VAR_24 / VAR_28);

 for (VAR_27 = 0; VAR_27 < VAR_21->max_ports_per_engine; VAR_27++) {
  u32 VAR_29, VAR_30, VAR_31;
  u32 VAR_32, VAR_33, VAR_34, VAR_35;
  u32 VAR_36;
  u8 VAR_37;


  VAR_36 = (u32)FUNC_0(VAR_21->guranteed_per_tc, VAR_0);
  VAR_29 = VAR_21->num_active_tcs[VAR_27] ? VAR_25 : 0;
  VAR_31 = VAR_21->num_active_tcs[VAR_27] * VAR_36;
  VAR_30 = VAR_29 - VAR_31;
  VAR_32 = VAR_21->num_active_tcs[VAR_27] * VAR_2;
  VAR_33 = VAR_32 + VAR_23;
  VAR_34 = VAR_22;
  VAR_35 = VAR_34 + VAR_23;


  FUNC_2(VAR_19, VAR_20, VAR_14 + VAR_27 * 4, VAR_29);


  FUNC_2(VAR_19, VAR_20, VAR_12 + VAR_27 * 4, VAR_30);

  for (VAR_37 = 0; VAR_37 < VAR_18; VAR_37++, VAR_26 += 4) {

   if (VAR_37 == VAR_21->num_active_tcs[VAR_27]) {
    VAR_36 = 0;
    VAR_32 = 0;
    VAR_33 = 0;
    VAR_34 = 0;
    VAR_35 = 0;
   }


   FUNC_2(VAR_19, VAR_20, VAR_13 + VAR_26, VAR_36);
   FUNC_2(VAR_19, VAR_20, VAR_9 + VAR_26, VAR_1);




   FUNC_2(VAR_19, VAR_20, VAR_3 + VAR_26, VAR_32);
   FUNC_2(VAR_19, VAR_20, VAR_4 + VAR_26, VAR_33);
   FUNC_2(VAR_19, VAR_20, VAR_5 + VAR_26, VAR_34);
   FUNC_2(VAR_19, VAR_20, VAR_6 + VAR_26, VAR_35);




   FUNC_2(VAR_19, VAR_20, VAR_7 + VAR_26, VAR_32);
   FUNC_2(VAR_19, VAR_20, VAR_8 + VAR_26, VAR_33);
   FUNC_2(VAR_19, VAR_20, VAR_10 + VAR_26, VAR_34);
   FUNC_2(VAR_19, VAR_20, VAR_11 + VAR_26, VAR_35);
  }
 }
}
