
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct init_qm_pq_params {int tc_id; } ;
struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ecore_hwfn*,scalar_t__,int) ;
 int FUNC_5 (struct ecore_hwfn*,int,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ecore_hwfn *VAR_10,
        u8 VAR_11,
        u8 VAR_12,
        u16 VAR_13,
        u8 VAR_14,
        u16 VAR_15,
        struct init_qm_pq_params *VAR_16)
{
 u32 VAR_17, VAR_18;
 u8 VAR_19;
 u16 VAR_20;

 VAR_17 = FUNC_3(VAR_13);
 if (!VAR_17 || VAR_17 > VAR_8) {
  FUNC_0(VAR_10, 1, "Invalid PF WFQ weight configuration\n");
  return -1;
 }

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  VAR_19 = FUNC_5(VAR_10, VAR_11, VAR_16[VAR_20].tc_id, VAR_14);
  VAR_18 = FUNC_1(VAR_10->p_dev) ?
   (VAR_19 < VAR_6 ? VAR_3 : VAR_2) + (VAR_19 % VAR_6) * VAR_1 + VAR_12 :
   (VAR_12 < VAR_0 ? VAR_3 : VAR_2) + VAR_19 * VAR_0 + (VAR_12 % VAR_0);
  FUNC_2(VAR_10, VAR_18, (u32)VAR_7);
 }

 FUNC_4(VAR_10, VAR_4 + VAR_12, VAR_9 | (u32)VAR_7);
 FUNC_4(VAR_10, VAR_5 + VAR_12, VAR_17);

 return 0;
}
