
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_dev {int dummy; } ;
struct ecore_chain {int p_phys_addr; int p_virt_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_dev *VAR_1,
        struct ecore_chain *VAR_2)
{
 if (!VAR_2->p_virt_addr)
  return;

 FUNC_0(VAR_1, VAR_2->p_virt_addr,
          VAR_2->p_phys_addr, VAR_0);
}
