
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,int ) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_3,
          u8 VAR_4, u8 *VAR_5)
{
 if (VAR_4 >= FUNC_1(VAR_3, VAR_1)) {
  u8 VAR_6, VAR_7;

  VAR_6 = (u8)FUNC_2(VAR_3, VAR_1);
  VAR_7 = VAR_6 + FUNC_1(VAR_3, VAR_1);
  FUNC_0(VAR_3, 1, "rss_eng id [%d] is not valid, available indices [%d - %d]\n",
     VAR_4, VAR_6, VAR_7);

  return VAR_0;
 }

 *VAR_5 = FUNC_2(VAR_3, VAR_1) + VAR_4;

 return VAR_2;
}
