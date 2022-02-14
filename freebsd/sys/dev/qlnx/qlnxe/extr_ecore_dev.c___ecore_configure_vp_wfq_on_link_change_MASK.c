
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {size_t num_vports; TYPE_1__* wfq_data; } ;
struct ecore_hwfn {TYPE_2__ qm_info; } ;
struct TYPE_3__ {int min_speed; int configured; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ecore_hwfn *VAR_1,
         struct ecore_ptt *VAR_2,
         u32 VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5 = VAR_0;
 u16 VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_1->qm_info.num_vports; VAR_6++) {
  u32 VAR_7;

  if (!VAR_1->qm_info.wfq_data[VAR_6].configured)
   continue;

  VAR_7 = VAR_1->qm_info.wfq_data[VAR_6].min_speed;
  VAR_4 = 1;

  VAR_5 = FUNC_3(VAR_1, VAR_6, VAR_7, VAR_3);
  if (VAR_5 != VAR_0) {
   FUNC_0(VAR_1, 0,
      "WFQ validation failed while configuring min rate\n");
   break;
  }
 }

 if (VAR_5 == VAR_0 && VAR_4)
  FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(VAR_1, VAR_2);

 return VAR_5;
}
