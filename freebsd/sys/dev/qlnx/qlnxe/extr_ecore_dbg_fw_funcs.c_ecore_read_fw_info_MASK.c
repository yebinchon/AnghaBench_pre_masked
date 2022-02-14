
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct storm_defs {size_t sem_fast_mem_addr; } ;
struct fw_info_location {int size; size_t grc_addr; } ;
struct fw_info {int size; size_t grc_addr; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int fw_info_location ;


 size_t VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct fw_info_location*,int ,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,size_t) ;
 struct storm_defs* VAR_4 ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_5,
          struct ecore_ptt *VAR_6,
          u8 VAR_7,
          struct fw_info *VAR_8)
{
 struct storm_defs *VAR_9 = &VAR_4[VAR_7];
 struct fw_info_location VAR_10;
 u32 VAR_11, VAR_12, *VAR_13;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_3(VAR_8, 0, sizeof(*VAR_8));




 VAR_11 = VAR_9->sem_fast_mem_addr + VAR_1 +
  (FUNC_2(VAR_5->p_dev) ?
   FUNC_1(VAR_3) :
   FUNC_1(VAR_2))
  - sizeof(VAR_10);

 VAR_13 = (u32 *)&VAR_10;

 for (VAR_12 = 0; VAR_12 < FUNC_0(sizeof(VAR_10)); VAR_12++, VAR_11 += VAR_0)
  VAR_13[VAR_12] = FUNC_4(VAR_5, VAR_6, VAR_11);


 if (VAR_10.size > 0 && VAR_10.size <= sizeof(*VAR_8)) {
  VAR_11 = VAR_10.grc_addr;
  VAR_13 = (u32 *)VAR_8;
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10.size); VAR_12++, VAR_11 += VAR_0)
   VAR_13[VAR_12] = FUNC_4(VAR_5, VAR_6, VAR_11);
 }
}
