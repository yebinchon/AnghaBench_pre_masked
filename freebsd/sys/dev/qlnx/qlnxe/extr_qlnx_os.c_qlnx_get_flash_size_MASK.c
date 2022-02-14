
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


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;
 struct ecore_ptt* FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static int
FUNC_4(qlnx_host_t *VAR_0, uint32_t *VAR_1)
{
 struct ecore_hwfn *VAR_2;
 struct ecore_ptt *VAR_3;

 VAR_2 = &VAR_0->cdev.hwfns[0];
 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0)) {
                FUNC_0(VAR_0,"ecore_ptt_acquire failed\n");
                return (-1);
 }
 FUNC_1(VAR_2, VAR_3, VAR_1);

 FUNC_3(VAR_2, VAR_3);

 return (0);
}
