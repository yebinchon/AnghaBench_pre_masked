
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct elan_mmcr {int GPTMR2CTL; int CSPFS; int GPTMR1CTL; int GPTMR1MAXCMPA; int GPTMR1MAXCMPB; scalar_t__ GPTMR2MAXCMPA; } ;
struct TYPE_3__ {int ppscap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct elan_mmcr volatile* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int *,int ,int*,int,int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;

void
FUNC_5(void)
{
 u_int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(0xfffef000, 0x1000);
 VAR_2 = (volatile struct elan_mmcr *)VAR_5;
 VAR_7 = 1189161;
 VAR_8 = FUNC_0(&VAR_6, "machdep.i8254_freq",
     ((void*)0), 0, &VAR_7, sizeof VAR_7, ((void*)0), 0);
 if (VAR_1 || 1)
  FUNC_3("sysctl machdep.i8254_freq=%d returns %d\n", VAR_7, VAR_8);


 VAR_2->GPTMR2MAXCMPA = 0;
 VAR_2->GPTMR2CTL = 0xc001;
 FUNC_4(&VAR_4);
}
