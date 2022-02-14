
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 struct ecore_ptt* FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static void
FUNC_5(qlnx_host_t *VAR_0, struct ecore_hwfn *VAR_1)
{
        struct ecore_ptt *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2) {
                FUNC_0(VAR_0, "Can't acquire PTT; re-scheduling\n");
  FUNC_1(VAR_1);
                return;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (VAR_3) {
                FUNC_0(VAR_0, "ecore_iov_vf_flr_cleanup failed; re-scheduling\n");
 }

 FUNC_4(VAR_1, VAR_2);

 return;
}
