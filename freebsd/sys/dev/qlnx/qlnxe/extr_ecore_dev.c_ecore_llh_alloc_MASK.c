
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_llh_info {int* ppfid_array; size_t num_ppfid; void** pp_filters; } ;
struct ecore_dev {int ppfid_bitmap; struct ecore_llh_info* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int ,char*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (struct ecore_dev*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_dev *VAR_6)
{
 struct ecore_llh_info *VAR_7;
 u32 VAR_8; u8 VAR_9;

 VAR_7 = FUNC_1(VAR_6, VAR_3, sizeof(*VAR_7));
 if (!VAR_7)
  return VAR_1;
 VAR_6->p_llh_info = VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (!(VAR_6->ppfid_bitmap & (0x1 << VAR_9)))
   continue;

  VAR_7->ppfid_array[VAR_7->num_ppfid] = VAR_9;
  FUNC_0(VAR_6, VAR_0, "ppfid_array[%d] = %hhd\n",
      VAR_7->num_ppfid, VAR_9);
  VAR_7->num_ppfid++;
 }

 VAR_8 = VAR_7->num_ppfid * sizeof(*VAR_7->pp_filters);
 VAR_7->pp_filters = FUNC_1(VAR_6, VAR_3, VAR_8);
 if (!VAR_7->pp_filters)
  return VAR_1;

 VAR_8 = VAR_5 *
        sizeof(**VAR_7->pp_filters);
 for (VAR_9 = 0; VAR_9 < VAR_7->num_ppfid; VAR_9++) {
  VAR_7->pp_filters[VAR_9] = FUNC_1(VAR_6, VAR_3,
       VAR_8);
  if (!VAR_7->pp_filters[VAR_9])
   return VAR_1;
 }

 return VAR_2;
}
