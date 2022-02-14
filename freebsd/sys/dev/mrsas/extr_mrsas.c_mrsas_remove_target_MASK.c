
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int16_t ;
struct mrsas_softc {int mrsas_dev; TYPE_1__* target_list; } ;
struct TYPE_2__ {int target_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,char*,size_t) ;

__attribute__((used)) static void FUNC_1(struct mrsas_softc *VAR_1,
 u_int16_t VAR_2)
{
 VAR_1->target_list[VAR_2].target_id = 0xffff;
 FUNC_0(VAR_1->mrsas_dev,
  "%s deleted target ID: 0x%x\n",
  (VAR_2 < VAR_0 ? "System PD" : "VD"),
  (VAR_2 < VAR_0 ? VAR_2 : (VAR_2 - VAR_0)));
}
