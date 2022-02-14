
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ cookie; } ;
struct ecore_spq_entry {TYPE_1__ comp_cb; } ;
struct ecore_spq_comp_done {int done; int fw_return_code; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_6,
           struct ecore_spq_entry *VAR_7,
           u8 *VAR_8,
           bool VAR_9)
{
 struct ecore_spq_comp_done *VAR_10;
 u32 VAR_11;

 VAR_10 = (struct ecore_spq_comp_done *)VAR_7->comp_cb.cookie;
 VAR_11 = VAR_9 ? VAR_4
          : VAR_2;

 if (FUNC_0(VAR_6->p_dev) && VAR_9)
  VAR_11 *= 5;


 while (VAR_11--) {
  FUNC_2(VAR_6);
  FUNC_3(VAR_6->p_dev);
  if (VAR_10->done == 1) {
   if (VAR_8)
    *VAR_8 = VAR_10->fw_return_code;
   return VAR_0;
  }

  if (VAR_9) {
   FUNC_1(VAR_5);
  } else {
   FUNC_4(VAR_3);
  }
 }

 return VAR_1;
}
