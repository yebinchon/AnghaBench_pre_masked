
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_llh_info {scalar_t__ num_ppfid; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,char const*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static enum _ecore_status_t FUNC_1(struct ecore_dev *VAR_3,
          u8 VAR_4, u8 VAR_5,
          const char *VAR_6)
{
 struct ecore_llh_info *VAR_7 = VAR_3->p_llh_info;

 if (VAR_4 >= VAR_7->num_ppfid) {
  FUNC_0(VAR_3, 0,
     "LLH shadow [%s]: using ppfid %d while only %d ppfids are available\n",
     VAR_6, VAR_4, VAR_7->num_ppfid);
  return VAR_0;
 }

 if (VAR_5 >= VAR_2) {
  FUNC_0(VAR_3, 0,
     "LLH shadow [%s]: using filter_idx %d while only %d filters are available\n",
     VAR_6, VAR_5, VAR_2);
  return VAR_0;
 }

 return VAR_1;
}
