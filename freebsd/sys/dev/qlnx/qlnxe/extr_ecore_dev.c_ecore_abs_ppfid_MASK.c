
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ecore_llh_info {size_t num_ppfid; size_t* ppfid_array; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum _ecore_status_t FUNC_1(struct ecore_dev *VAR_2,
         u8 VAR_3, u8 *VAR_4)
{
 struct ecore_llh_info *VAR_5 = VAR_2->p_llh_info;

 if (VAR_3 >= VAR_5->num_ppfid) {
  FUNC_0(VAR_2, 0,
     "rel_ppfid %d is not valid, available indices are 0..%hhd\n",
     VAR_3, (u8)(VAR_5->num_ppfid - 1));
  return VAR_0;
 }

 *VAR_4 = VAR_5->ppfid_array[VAR_3];

 return VAR_1;
}
