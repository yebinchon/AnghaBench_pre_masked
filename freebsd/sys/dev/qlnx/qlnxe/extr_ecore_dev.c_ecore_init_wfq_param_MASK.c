
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int num_vports; TYPE_1__* wfq_data; } ;
struct ecore_hwfn {TYPE_2__ qm_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int configured; int min_speed; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_4,
       u16 VAR_5, u32 VAR_6,
       u32 VAR_7)
{
 u32 VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14;

 VAR_14 = VAR_4->qm_info.num_vports;


 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  u32 VAR_15;

  if ((VAR_13 != VAR_5) && VAR_4->qm_info.wfq_data[VAR_13].configured) {
   VAR_12++;
   VAR_15 = VAR_4->qm_info.wfq_data[VAR_13].min_speed;
   VAR_8 += VAR_15;
  }
 }


 VAR_12++;
 VAR_8 += VAR_6;
 VAR_11 = VAR_14 - VAR_12;


 if (VAR_6 < VAR_7 / VAR_3) {
  FUNC_0(VAR_4, VAR_1,
      "Vport [%d] - Requested rate[%d Mbps] is less than one percent of configured PF min rate[%d Mbps]\n",
      VAR_5, VAR_6, VAR_7);
  return VAR_0;
 }


 if (VAR_14 > VAR_3) {
  FUNC_0(VAR_4, VAR_1,
      "Number of vports is greater than %d\n",
      VAR_3);
  return VAR_0;
 }

 if (VAR_8 > VAR_7) {
  FUNC_0(VAR_4, VAR_1,
      "Total requested min rate for all vports[%d Mbps] is greater than configured PF min rate[%d Mbps]\n",
      VAR_8, VAR_7);
  return VAR_0;
 }


 VAR_9 = VAR_7 - VAR_8;
 VAR_10 = VAR_9 / VAR_11;


 if (VAR_10 < VAR_7 / VAR_3) {
  FUNC_0(VAR_4, VAR_1,
      "Non WFQ configured vports rate [%d Mbps] is less than one percent of configured PF min rate[%d Mbps]\n",
      VAR_10, VAR_7);
  return VAR_0;
 }




 VAR_4->qm_info.wfq_data[VAR_5].min_speed = VAR_6;
 VAR_4->qm_info.wfq_data[VAR_5].configured = 1;

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  if (VAR_4->qm_info.wfq_data[VAR_13].configured)
   continue;

  VAR_4->qm_info.wfq_data[VAR_13].min_speed = VAR_10;
 }

 return VAR_2;
}
