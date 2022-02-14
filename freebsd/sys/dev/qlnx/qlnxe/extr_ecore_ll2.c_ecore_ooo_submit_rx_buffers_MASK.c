
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ooo_buffer {int rx_buffer_phys_addr; } ;
struct ecore_ll2_info {int my_id; } ;
struct ecore_hwfn {int p_ooo_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int ,int ,struct ecore_ooo_buffer*,int) ;
 struct ecore_ooo_buffer* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ecore_ooo_buffer*) ;

__attribute__((used)) static void
FUNC_3(struct ecore_hwfn *VAR_1,
       struct ecore_ll2_info *VAR_2)
{
 struct ecore_ooo_buffer *VAR_3;
 enum _ecore_status_t VAR_4;

 while ((VAR_3 = FUNC_1(VAR_1->p_ooo_info))) {
  VAR_4 = FUNC_0(VAR_1,
         VAR_2->my_id,
         VAR_3->rx_buffer_phys_addr,
         0, VAR_3, 1);
  if (VAR_4 != VAR_0) {
   FUNC_2(VAR_1->p_ooo_info, VAR_3);
   break;
  }
 }
}
