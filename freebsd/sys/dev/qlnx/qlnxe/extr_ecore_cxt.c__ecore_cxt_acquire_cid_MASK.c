
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {struct ecore_cid_acquired_map** acquired_vf; struct ecore_cid_acquired_map* acquired; } ;
struct ecore_cid_acquired_map {scalar_t__ cid_map; scalar_t__ max_count; scalar_t__ start_cid; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,scalar_t__,size_t,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_8,
         enum protocol_type VAR_9,
         u32 *VAR_10, u8 VAR_11)
{
 struct ecore_cxt_mngr *VAR_12 = VAR_8->p_cxt_mngr;
 struct ecore_cid_acquired_map *VAR_13;
 u32 VAR_14;

 if (VAR_9 >= VAR_6) {
  FUNC_0(VAR_8, 1, "Invalid protocol type %d", VAR_9);
  return VAR_2;
 }

 if (VAR_11 >= VAR_0 && VAR_11 != VAR_1) {
  FUNC_0(VAR_8, 1, "VF [%02x] is out of range\n", VAR_11);
  return VAR_2;
 }


 if (VAR_11 == VAR_1)
  VAR_13 = &VAR_12->acquired[VAR_9];
 else
  VAR_13 = &VAR_12->acquired_vf[VAR_9][VAR_11];

 if (VAR_13->cid_map == VAR_7) {
  FUNC_0(VAR_8, 1, "Invalid protocol type %d", VAR_9);
  return VAR_2;
 }

 VAR_14 = FUNC_2(VAR_13->cid_map,
        VAR_13->max_count);

 if (VAR_14 >= VAR_13->max_count) {
  FUNC_0(VAR_8, 0, "no CID available for protocol %d\n",
     VAR_9);
  return VAR_4;
 }

 FUNC_3(VAR_14, VAR_13->cid_map);

 *VAR_10 = VAR_14 + VAR_13->start_cid;

 FUNC_1(VAR_8, VAR_3,
     "Acquired cid 0x%08x [rel. %08x] vfid %02x type %d\n",
     *VAR_10, VAR_14, VAR_11, VAR_9);

 return VAR_5;
}
