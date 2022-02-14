
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ecore_hwfn {int p_dev; } ;
struct ecore_cid_acquired_map {void* max_count; void* start_cid; int cid_map; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,void*,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,void*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_7, u32 VAR_8,
      u32 VAR_9, u32 VAR_10,
      struct ecore_cid_acquired_map *VAR_11)
{
 u32 VAR_12;

 if (!VAR_10)
  return VAR_3;

 VAR_12 = VAR_5 * FUNC_0(VAR_10, VAR_0);
 VAR_11->cid_map = FUNC_2(VAR_7->p_dev, VAR_4, VAR_12);
 if (VAR_11->cid_map == VAR_6)
  return VAR_2;

 VAR_11->max_count = VAR_10;
 VAR_11->start_cid = VAR_9;

 FUNC_1(VAR_7, VAR_1,
     "Type %08x start: %08x count %08x\n",
     VAR_8, VAR_11->start_cid, VAR_11->max_count);

 return VAR_3;
}
