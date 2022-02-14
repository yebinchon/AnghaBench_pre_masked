
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct t4_sq {int dummy; } ;
struct ibv_send_wr {int num_sge; TYPE_1__* sg_list; } ;
struct fw_ri_immd {int immdlen; scalar_t__ r2; scalar_t__ r1; int op; scalar_t__ data; } ;
struct TYPE_2__ {int length; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct t4_sq *VAR_2, struct fw_ri_immd *VAR_3,
        struct ibv_send_wr *VAR_4, int VAR_5, u32 *VAR_6)
{
 u8 *VAR_7, *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 VAR_7 = (u8 *)VAR_3->data;
 for (VAR_10 = 0; VAR_10 < VAR_4->num_sge; VAR_10++) {
  if ((VAR_9 + VAR_4->sg_list[VAR_10].length) > VAR_5)
   return -VAR_0;
  VAR_8 = (u8 *)(unsigned long)VAR_4->sg_list[VAR_10].addr;
  VAR_9 += VAR_4->sg_list[VAR_10].length;
  VAR_11 = VAR_4->sg_list[VAR_10].length;
  FUNC_2(VAR_7, VAR_8, VAR_11);
  VAR_7 += VAR_11;
  VAR_8 += VAR_11;
 }
 VAR_11 = FUNC_0(VAR_9 + 8, 16) - (VAR_9 + 8);
 if (VAR_11)
  FUNC_3(VAR_7, 0, VAR_11);
 VAR_3->op = VAR_1;
 VAR_3->r1 = 0;
 VAR_3->r2 = 0;
 VAR_3->immdlen = FUNC_1(VAR_9);
 *VAR_6 = VAR_9;
 return 0;
}
