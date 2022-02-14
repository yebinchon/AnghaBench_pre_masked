
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_cid_acquired_map {int cid_map; scalar_t__ start_cid; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 struct ecore_cid_acquired_map* VAR_3 ;
 int FUNC_3 (struct ecore_hwfn*,scalar_t__,int ,int*,struct ecore_cid_acquired_map**) ;

void FUNC_4(struct ecore_hwfn *VAR_4, u32 VAR_5, u8 VAR_6)
{
 struct ecore_cid_acquired_map *VAR_7 = VAR_3;
 enum protocol_type VAR_8;
 bool VAR_9;
 u32 VAR_10;

 if (VAR_6 != VAR_1 && VAR_6 > VAR_0) {
  FUNC_0(VAR_4, 1,
     "Trying to return incorrect CID belonging to VF %02x\n",
     VAR_6);
  return;
 }


 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6,
       &VAR_8, &VAR_7);

 if (!VAR_9)
  return;

 VAR_10 = VAR_5 - VAR_7->start_cid;
 FUNC_2(VAR_10, VAR_7->cid_map);

 FUNC_1(VAR_4, VAR_2,
     "Released CID 0x%08x [rel. %08x] vfid %02x type %d\n",
     VAR_5, VAR_10, VAR_6, VAR_8);
}
