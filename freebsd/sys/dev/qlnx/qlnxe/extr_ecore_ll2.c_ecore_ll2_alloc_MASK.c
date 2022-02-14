
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int lock; } ;
struct ecore_ll2_info {int my_id; TYPE_2__ tx_queue; TYPE_1__ rx_queue; int mutex; } ;
struct ecore_hwfn {struct ecore_ll2_info* p_ll2_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int *) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,int *) ;
 struct ecore_ll2_info* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_4)
{
 struct ecore_ll2_info *VAR_5;
 u8 VAR_6;


 VAR_5 = FUNC_3(VAR_4->p_dev, VAR_3,
     sizeof(struct ecore_ll2_info) *
     VAR_0);
 if (!VAR_5) {
  FUNC_0(VAR_4, 0,
     "Failed to allocate `struct ecore_ll2'\n");
  return VAR_1;
 }

 VAR_4->p_ll2_info = VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5[VAR_6].my_id = VAR_6;
 }

 return VAR_2;





}
