
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int num_hwfns; } ;
struct TYPE_8__ {scalar_t__ grcdump_taken; scalar_t__* grcdump_dwords; int * grcdump_size; int * grcdump; TYPE_1__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_9__ {scalar_t__ reg_buf_len; int * reg_buf; } ;
typedef TYPE_3__ qlnx_get_regs_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_0, qlnx_get_regs_t *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 uint32_t VAR_4 = 0;
 uint8_t *VAR_5;

 VAR_1->reg_buf_len = 0;
 VAR_5 = VAR_1->reg_buf;

 for (VAR_2 = 0; VAR_2 < VAR_0->cdev.num_hwfns; VAR_2++) {

  VAR_3 = FUNC_1(VAR_0, &VAR_4, VAR_2);

  if (VAR_3)
   break;

  VAR_1->reg_buf_len += (VAR_4 << 2);

  VAR_3 = FUNC_0(VAR_0->grcdump[VAR_2], VAR_5, VAR_0->grcdump_size[VAR_2]);

  if (VAR_3)
   break;

  VAR_0->grcdump_dwords[VAR_2] = 0;
  VAR_5 += VAR_1->reg_buf_len;
 }

 VAR_0->grcdump_taken = 0;

 return (VAR_3);
}
