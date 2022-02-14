
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_5__ {struct ecore_hwfn* hwfns; } ;
struct TYPE_6__ {TYPE_1__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;





 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;
 struct ecore_ptt* FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static uint32_t
FUNC_8(qlnx_host_t *VAR_1, int VAR_2, uint16_t VAR_3)
{
        int VAR_4 = -1;
        struct ecore_hwfn *VAR_5;
        struct ecore_ptt *VAR_6;
 uint32_t VAR_7 = 0;

        VAR_5 = &VAR_1->cdev.hwfns[VAR_2];
        VAR_6 = FUNC_6(VAR_5);

        if (!VAR_6) {
                FUNC_0(VAR_1, "ecore_ptt_acquire [%d, 0x%x]failed\n",
                           VAR_2, VAR_3);
                return (0);
        }

 switch (VAR_3) {

 case 130:
         VAR_4 = FUNC_3(VAR_5,
    VAR_6, &VAR_7);
  break;

 case 128:
         VAR_4 = FUNC_5(VAR_5,
    VAR_6, &VAR_7);
  break;

 case 131:
         VAR_4 = FUNC_2(VAR_5,
    VAR_6, &VAR_7);
  break;

 case 129:
         VAR_4 = FUNC_4(VAR_5,
    VAR_6, &VAR_7);
  break;

 case 132:
         VAR_4 = FUNC_1(VAR_5,
    VAR_6, &VAR_7);
  break;
 }

        if (VAR_4 != VAR_0) {
                FUNC_0(VAR_1,"cmd = 0x%x failed [0x%x]\n", VAR_3, VAR_4);
  VAR_7 = 0;
        }

        FUNC_7(VAR_5, VAR_6);

        return ((VAR_7 * sizeof (uint32_t)));
}
