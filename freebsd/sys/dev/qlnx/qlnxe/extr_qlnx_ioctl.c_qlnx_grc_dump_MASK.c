
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_5__ {struct ecore_hwfn* hwfns; } ;
struct TYPE_6__ {int* grcdump_size; int grcdump_taken; int * grcdump; TYPE_1__ cdev; scalar_t__* grcdump_dwords; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,scalar_t__*) ;
 int FUNC_3 (int ) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;

int
FUNC_6(qlnx_host_t *VAR_2, uint32_t *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1;
 struct ecore_hwfn *VAR_6;
 struct ecore_ptt *VAR_7;

 if (VAR_2->grcdump_dwords[VAR_4]) {

  *VAR_3 = VAR_2->grcdump_dwords[VAR_4];
  return (0);
 }

 FUNC_3(FUNC_1());

 VAR_6 = &VAR_2->cdev.hwfns[VAR_4];
 VAR_7 = FUNC_4(VAR_6);

 if (!VAR_7) {
  FUNC_0(VAR_2,"ecore_ptt_acquire failed\n");
  return (VAR_5);
 }

 if ((VAR_5 = FUNC_2(VAR_6, VAR_7,
   VAR_2->grcdump[VAR_4],
   (VAR_2->grcdump_size[VAR_4] >> 2),
   VAR_3)) == VAR_0) {
   VAR_5 = 0;
  VAR_2->grcdump_taken = 1;
 } else
  FUNC_0(VAR_2,"ecore_dbg_grc_dump failed [%d, 0x%x]\n",
      VAR_4, VAR_5);

 FUNC_5(VAR_6, VAR_7);

 return (VAR_5);
}
