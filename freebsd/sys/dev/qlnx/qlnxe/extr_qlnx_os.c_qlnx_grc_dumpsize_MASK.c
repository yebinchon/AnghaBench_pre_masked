
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_5__ {struct ecore_hwfn* hwfns; } ;
struct TYPE_6__ {TYPE_1__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;
 int FUNC_3 (int ) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_1, uint32_t *VAR_2, int VAR_3)
{
 int VAR_4 = -1;
 struct ecore_hwfn *VAR_5;
 struct ecore_ptt *VAR_6;

 FUNC_3(FUNC_1());

 VAR_5 = &VAR_1->cdev.hwfns[VAR_3];
 VAR_6 = FUNC_4(VAR_5);

        if (!VAR_6) {
  FUNC_0(VAR_1, "ecore_ptt_acquire failed\n");
                return (VAR_4);
        }

        VAR_4 = FUNC_2(VAR_5, VAR_6, VAR_2);

 if (VAR_4 == VAR_0)
                VAR_4 = 0;
        else {
  FUNC_0(VAR_1, "ecore_dbg_grc_get_dump_buf_size failed"
   "[0x%x]\n", VAR_4);
 }

        FUNC_5(VAR_5, VAR_6);

        return (VAR_4);
}
