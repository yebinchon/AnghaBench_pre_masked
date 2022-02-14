
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {struct ecore_cid_acquired_map** acquired_vf; struct ecore_cid_acquired_map* acquired; } ;
struct ecore_cid_acquired_map {scalar_t__ start_cid; scalar_t__ max_count; int cid_map; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct ecore_cid_acquired_map* VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct ecore_hwfn *VAR_3,
     u32 VAR_4, u8 VAR_5,
     enum protocol_type *VAR_6,
     struct ecore_cid_acquired_map **VAR_7)
{
 struct ecore_cxt_mngr *VAR_8 = VAR_3->p_cxt_mngr;
 u32 VAR_9;


 for (*VAR_6 = 0; *VAR_6 < VAR_1; (*VAR_6)++) {
  if (VAR_5 == VAR_0)
   *VAR_7 = &VAR_8->acquired[*VAR_6];
  else
   *VAR_7 = &VAR_8->acquired_vf[*VAR_6][VAR_5];

  if (!((*VAR_7)->cid_map))
   continue;
  if (VAR_4 >= (*VAR_7)->start_cid &&
      VAR_4 < (*VAR_7)->start_cid + (*VAR_7)->max_count) {
   break;
  }
 }

 if (*VAR_6 == VAR_1) {
  FUNC_0(VAR_3, 1, "Invalid CID %d vfid %02x", VAR_4, VAR_5);
  goto fail;
 }

 VAR_9 = VAR_4 - (*VAR_7)->start_cid;
 if (!FUNC_1(VAR_9, (*VAR_7)->cid_map)) {
  FUNC_0(VAR_3, 1,
     "CID %d [vifd %02x] not acquired", VAR_4, VAR_5);
  goto fail;
 }

 return 1;
fail:
 *VAR_6 = VAR_1;
 *VAR_7 = VAR_2;
 return 0;
}
