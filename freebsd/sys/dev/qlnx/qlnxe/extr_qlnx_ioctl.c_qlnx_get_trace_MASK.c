
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_8__ {int* size; int cmd; int* dwords; int * buffer; } ;
typedef TYPE_2__ qlnx_trace_t ;
struct TYPE_7__ {struct ecore_hwfn* hwfns; } ;
struct TYPE_9__ {TYPE_1__ cdev; } ;
typedef TYPE_3__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (TYPE_3__*,char*,int,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,void*,int,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,void*,int,int*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,void*,int,int*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,void*,int,int*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,void*,int,int*) ;
 int FUNC_8 (int ) ;
 struct ecore_ptt* FUNC_9 (struct ecore_hwfn*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*) ;
 void* FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(qlnx_host_t *VAR_2, int VAR_3, qlnx_trace_t *VAR_4)
{
        int VAR_5 = -1;
        struct ecore_hwfn *VAR_6;
        struct ecore_ptt *VAR_7;
 uint32_t VAR_8 = 0;
 void *VAR_9;

 VAR_9 = FUNC_11(VAR_4->size[VAR_3]);
 if (VAR_9 == ((void*)0)) {
                FUNC_0(VAR_2,"qlnx_zalloc [%d, 0x%x]failed\n",
                           VAR_3, VAR_4->cmd);
                return (VAR_1);
 }
 FUNC_8(FUNC_3());

        VAR_6 = &VAR_2->cdev.hwfns[VAR_3];
        VAR_7 = FUNC_9(VAR_6);

        if (!VAR_7) {
                FUNC_0(VAR_2, "ecore_ptt_acquire [%d, 0x%x]failed\n",
                           VAR_3, VAR_4->cmd);
                return (VAR_1);
        }

 switch (VAR_4->cmd) {

 case 130:
         VAR_5 = FUNC_5(VAR_6, VAR_7,
    VAR_9, (VAR_4->size[VAR_3] >> 2),
    &VAR_8);
  break;

 case 128:
         VAR_5 = FUNC_7(VAR_6, VAR_7,
    VAR_9, (VAR_4->size[VAR_3] >> 2),
    &VAR_8);
  break;

 case 131:
         VAR_5 = FUNC_4(VAR_6, VAR_7,
    VAR_9, (VAR_4->size[VAR_3] >> 2),
    &VAR_8);
  break;

 case 129:
         VAR_5 = FUNC_6(VAR_6, VAR_7,
    VAR_9, (VAR_4->size[VAR_3] >> 2),
    &VAR_8);
  break;

 case 132:
         VAR_5 = FUNC_2(VAR_6, VAR_7,
    VAR_9, (VAR_4->size[VAR_3] >> 2),
    &VAR_8);
  break;
 }

        if (VAR_5 != VAR_0) {
                FUNC_0(VAR_2,"cmd = 0x%x failed [0x%x]\n", VAR_4->cmd, VAR_5);
  VAR_8 = 0;
        }

        FUNC_10(VAR_6, VAR_7);

 VAR_4->dwords[VAR_3] = VAR_8;

 if (VAR_8) {
                VAR_5 = FUNC_1(VAR_9, VAR_4->buffer[VAR_3],
    (VAR_8 << 2));
 }

        return (VAR_5);
}
