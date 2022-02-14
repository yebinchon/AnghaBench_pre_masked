
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_iwarp_ll2_buff {int buff_size; int data; int data_phys_addr; } ;
struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,struct ecore_iwarp_ll2_buff*) ;
 struct ecore_iwarp_ll2_buff* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_iwarp_ll2_buff*,int ) ;

__attribute__((used)) static int
FUNC_5(struct ecore_hwfn *VAR_2,
         int VAR_3,
         int VAR_4,
         u8 VAR_5)
{
 struct ecore_iwarp_ll2_buff *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_6 = FUNC_3(VAR_2->p_dev,
         VAR_1, sizeof(*VAR_6));
  if (!VAR_6) {
   FUNC_0(VAR_2, "Failed to allocate LL2 buffer desc\n");
   break;
  }

  VAR_6->data =
   FUNC_1(VAR_2->p_dev,
      &VAR_6->data_phys_addr,
      VAR_4);

  if (!VAR_6->data) {
   FUNC_0(VAR_2, "Failed to allocate LL2 buffers\n");
   FUNC_2(VAR_2->p_dev, VAR_6);
   VAR_7 = VAR_0;
   break;
  }

  VAR_6->buff_size = VAR_4;
  VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_5);

  if (VAR_7)
   break;
 }
 return VAR_7;
}
