
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; scalar_t__* block_in_reset; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block {int dummy; } ;
struct block_defs {scalar_t__* dbg_client_id; int dbg_enable_addr; int name; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (size_t) ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_2 (struct dbg_bus_block*) ;
 int FUNC_3 (size_t*,int ,int ) ;
 size_t VAR_8 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int,int ,int,int ,int ,int ) ;
 size_t FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,size_t*,int,int ,size_t,int) ;
 size_t FUNC_10 (struct ecore_hwfn*,size_t*,int,int ,int ,size_t,int,int,char*,int,int ) ;
 scalar_t__ FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 struct dbg_bus_block* FUNC_13 (struct ecore_hwfn*,int) ;
 struct block_defs** VAR_9 ;

__attribute__((used)) static u32 FUNC_14(struct ecore_hwfn *VAR_10,
            struct ecore_ptt *VAR_11,
            u32 *VAR_12,
            bool VAR_13)
{
 struct dbg_tools_data *VAR_14 = &VAR_10->dbg_info;
 u32 VAR_15, VAR_16, VAR_17 = 0;


 if (VAR_13 && FUNC_11(VAR_10, VAR_11, VAR_3))
  return 0;

 if (VAR_13) {

  for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
   struct block_defs *VAR_18 = VAR_9[VAR_15];

   if (VAR_18->dbg_client_id[VAR_14->chip_id] != VAR_7)
    FUNC_12(VAR_10, VAR_11, VAR_18->dbg_enable_addr, 0);
  }

  FUNC_6(VAR_10, VAR_11);
  FUNC_7(VAR_10, VAR_11, VAR_0);
  FUNC_12(VAR_10, VAR_11, VAR_4, VAR_1);
  FUNC_12(VAR_10, VAR_11, VAR_5, 1);
  FUNC_5(VAR_10, VAR_11, 1);
 }


 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  struct block_defs *VAR_19 = VAR_9[VAR_15];
  struct dbg_bus_block *VAR_20;
  u32 VAR_21;

  if (VAR_19->dbg_client_id[VAR_14->chip_id] == VAR_7)
   continue;

  VAR_20 = FUNC_13(VAR_10, (enum block_id)VAR_15);
  VAR_21 = FUNC_2(VAR_20) * VAR_8;


  VAR_17 += FUNC_10(VAR_10, VAR_12 + VAR_17, VAR_13, VAR_19->name, 0, VAR_21, 32, 0, "STATIC", 0, 0);

  if (!VAR_13) {
   VAR_17 += VAR_21;
   continue;
  }


  if (VAR_14->block_in_reset[VAR_15]) {
   FUNC_3(VAR_12 + VAR_17, 0, FUNC_1(VAR_21));
   VAR_17 += VAR_21;
   continue;
  }


  FUNC_4(VAR_10, VAR_11, 1 << VAR_19->dbg_client_id[VAR_14->chip_id]);
  for (VAR_16 = 0; VAR_16 < (u32)FUNC_2(VAR_20); VAR_16++) {


   FUNC_8(VAR_10, VAR_11, (enum block_id)VAR_15, (u8)VAR_16, 0xf, 0, 0, 0);


   VAR_17 += FUNC_9(VAR_10, VAR_11, VAR_12 + VAR_17, VAR_13, FUNC_0(VAR_2), VAR_8, 1);
  }


  FUNC_4(VAR_10, VAR_11, 0);
  FUNC_12(VAR_10, VAR_11, VAR_19->dbg_enable_addr, 0);
 }

 if (VAR_13) {
  FUNC_5(VAR_10, VAR_11, 0);
  FUNC_4(VAR_10, VAR_11, 0);
 }

 return VAR_17;
}
