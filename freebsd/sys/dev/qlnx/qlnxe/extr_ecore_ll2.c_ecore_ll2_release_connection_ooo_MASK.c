
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ooo_buffer {int rx_buffer_size; int rx_buffer_phys_addr; int rx_buffer_virt_addr; } ;
struct TYPE_2__ {scalar_t__ conn_type; } ;
struct ecore_ll2_info {TYPE_1__ input; } ;
struct ecore_hwfn {int p_dev; int p_ooo_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct ecore_ooo_buffer*) ;
 struct ecore_ooo_buffer* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_1,
          struct ecore_ll2_info *VAR_2)
{
 struct ecore_ooo_buffer *VAR_3;

 if (VAR_2->input.conn_type != VAR_0)
  return;

 FUNC_3(VAR_1->p_ooo_info);
 while ((VAR_3 = FUNC_2(VAR_1->p_ooo_info))) {
  FUNC_0(VAR_1->p_dev,
           VAR_3->rx_buffer_virt_addr,
           VAR_3->rx_buffer_phys_addr,
           VAR_3->rx_buffer_size);
  FUNC_1(VAR_1->p_dev, VAR_3);
 }
}
