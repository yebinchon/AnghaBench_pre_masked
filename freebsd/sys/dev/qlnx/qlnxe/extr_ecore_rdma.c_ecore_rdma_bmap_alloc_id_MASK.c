
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_bmap {scalar_t__ max_count; int name; int bitmap; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_3,
           struct ecore_bmap *VAR_4,
           u32 *VAR_5)
{
 *VAR_5 = FUNC_1(VAR_4->bitmap, VAR_4->max_count);
 if (*VAR_5 >= VAR_4->max_count)
  return VAR_0;

 FUNC_2(*VAR_5, VAR_4->bitmap);

 FUNC_0(VAR_3, VAR_1, "%s bitmap: allocated id %d\n",
     VAR_4->name, *VAR_5);

 return VAR_2;
}
