
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ecore_iwarp_ll2_buff {scalar_t__ buff_size; int data_phys_addr; int data; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,struct ecore_iwarp_ll2_buff*) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ,int ,struct ecore_iwarp_ll2_buff*,int) ;

__attribute__((used)) static int
FUNC_4(struct ecore_hwfn *VAR_0,
   struct ecore_iwarp_ll2_buff *VAR_1,
   u8 VAR_2)
{
 enum _ecore_status_t VAR_3;

 VAR_3 = FUNC_3(
  VAR_0,
  VAR_2,
  VAR_1->data_phys_addr,
  (u16)VAR_1->buff_size,
  VAR_1, 1);

 if (VAR_3) {
  FUNC_0(VAR_0, 0,
     "Failed to repost rx buffer to ll2 rc = %d, handle=%d\n",
     VAR_3, VAR_2);
  FUNC_1(
   VAR_0->p_dev,
   VAR_1->data,
   VAR_1->data_phys_addr,
   VAR_1->buff_size);
  FUNC_2(VAR_0->p_dev, VAR_1);
 }

 return VAR_3;
}
