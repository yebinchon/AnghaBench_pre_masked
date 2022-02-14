
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ooo_opaque {int ooo_isle; int ooo_opcode; int cid; } ;
struct ecore_ooo_buffer {int placement_offset; int rx_buffer_phys_addr; scalar_t__ rx_buffer_virt_addr; } ;
struct ecore_hwfn {scalar_t__ dp_level; int dp_module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct ecore_hwfn *VAR_2,
        struct ooo_opaque *VAR_3,
        struct ecore_ooo_buffer *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = VAR_1;
 u32 VAR_7, VAR_8;
 u8 *VAR_9 = 0;

 if (VAR_2->dp_level > VAR_0)
  return;
 if (!(VAR_2->dp_module & VAR_6))
  return;

 VAR_9 = (u8 *)VAR_4->rx_buffer_virt_addr +
  VAR_4->placement_offset;
 FUNC_2(VAR_2, VAR_6,
     "******************************************************\n");
 VAR_7 = FUNC_0(VAR_4->rx_buffer_phys_addr);
 VAR_8 = FUNC_1(VAR_4->rx_buffer_phys_addr);
 FUNC_2(VAR_2, VAR_6,
     "0x%x-%x: CID 0x%x, OP 0x%x, ISLE 0x%x\n",
     VAR_7, VAR_8,
     VAR_3->cid, VAR_3->ooo_opcode, VAR_3->ooo_isle);
 for (VAR_5 = 0; VAR_5 < 64; VAR_5 = VAR_5 + 8) {
  FUNC_2(VAR_2, VAR_6,
      "0x%x-%x:  0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",
      VAR_7, VAR_8,
      VAR_9[VAR_5],
      VAR_9[VAR_5 + 1],
      VAR_9[VAR_5 + 2],
      VAR_9[VAR_5 + 3],
      VAR_9[VAR_5 + 4],
      VAR_9[VAR_5 + 5],
      VAR_9[VAR_5 + 6],
      VAR_9[VAR_5 + 7]);
 }
}
