
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {int event; int num_popped; int qid; void* clrint; void* rearm; } ;
struct TYPE_4__ {int dw0; TYPE_1__ bits; int member_0; } ;
typedef TYPE_2__ eq_db_t ;
typedef int POCE_SOFTC ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(POCE_SOFTC VAR_2,
    int16_t VAR_3, int VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 eq_db_t VAR_7 = { 0 };

 VAR_7.bits.rearm = VAR_5;
 VAR_7.bits.event = 1;
 VAR_7.bits.num_popped = VAR_4;
 VAR_7.bits.clrint = VAR_6;
 VAR_7.bits.qid = VAR_3;
 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_7.dw0);

}
