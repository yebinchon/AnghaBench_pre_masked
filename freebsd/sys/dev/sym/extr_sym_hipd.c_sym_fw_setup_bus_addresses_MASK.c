
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef scalar_t__ u32 ;
struct sym_fw {scalar_t__ b_ofs; scalar_t__ a_ofs; } ;
typedef TYPE_1__* hcb_p ;
struct TYPE_3__ {scalar_t__ const scriptb_ba; int fwb_bas; scalar_t__ const scripta_ba; int fwa_bas; } ;



__attribute__((used)) static void
FUNC_0(hcb_p VAR_0, const struct sym_fw *VAR_1)
{
 u32 *VAR_2;
 const u_short *VAR_3;
 int VAR_4;





 VAR_3 = (const u_short *) VAR_1->a_ofs;
 VAR_2 = (u32 *) &VAR_0->fwa_bas;
 for (VAR_4 = 0 ; VAR_4 < sizeof(VAR_0->fwa_bas)/sizeof(u32) ; VAR_4++)
  VAR_2[VAR_4] = VAR_0->scripta_ba + VAR_3[VAR_4];




 VAR_3 = (const u_short *) VAR_1->b_ofs;
 VAR_2 = (u32 *) &VAR_0->fwb_bas;
 for (VAR_4 = 0 ; VAR_4 < sizeof(VAR_0->fwb_bas)/sizeof(u32) ; VAR_4++)
  VAR_2[VAR_4] = VAR_0->scriptb_ba + VAR_3[VAR_4];
}
