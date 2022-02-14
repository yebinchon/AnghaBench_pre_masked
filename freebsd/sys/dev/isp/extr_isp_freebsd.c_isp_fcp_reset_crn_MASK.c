
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct isp_nexus {scalar_t__ tgt; scalar_t__ crnseed; struct isp_nexus* next; } ;
struct isp_fc {struct isp_nexus** nexus_hash; } ;
typedef int ispsoftc_t ;


 struct isp_fc* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int,...) ;

void
FUNC_2(ispsoftc_t *VAR_2, int VAR_3, uint32_t VAR_4, int VAR_5)
{
 struct isp_fc *VAR_6 = FUNC_0(VAR_2, VAR_3);
 struct isp_nexus *VAR_7;
 int VAR_8;

 if (VAR_5 == 0)
  FUNC_1(VAR_2, VAR_0,
      "Chan %d resetting CRN on all targets", VAR_3);
 else
  FUNC_1(VAR_2, VAR_0,
      "Chan %d resetting CRN on target %u", VAR_3, VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  for (VAR_7 = VAR_6->nexus_hash[VAR_8]; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
   if (VAR_5 == 0 || VAR_4 == VAR_7->tgt)
    VAR_7->crnseed = 0;
  }
 }
}
