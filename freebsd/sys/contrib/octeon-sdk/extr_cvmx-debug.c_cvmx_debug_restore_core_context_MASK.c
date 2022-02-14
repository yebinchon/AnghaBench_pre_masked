
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int desave; int depc; int * perfctrl; int * perfval; int multicoredebug; int debug; int cause; int status; int pagemask; int entryhi; int * entrylo; int index; } ;
struct TYPE_7__ {int * control; int * asid; int * address_mask; int * address; int status; } ;
struct TYPE_6__ {int * control; int * asid; int * address_mask; int * address; int status; } ;
struct TYPE_9__ {int hi; int lo; TYPE_3__ cop0; TYPE_2__ hw_ibp; TYPE_1__ hw_dbp; scalar_t__ regs; } ;
typedef TYPE_4__ cvmx_debug_core_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_16 ;
 int FUNC_8 (int ,int ) ;
 int VAR_17 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(volatile cvmx_debug_core_context_t *VAR_18)
{
    uint64_t VAR_19, VAR_20;
    int VAR_21;
    FUNC_9 (VAR_17, (char *) VAR_18->regs, sizeof(VAR_18->regs));

    FUNC_10(VAR_15, VAR_18->hw_dbp.status);
    for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
    {
        FUNC_10(FUNC_0(VAR_21), VAR_18->hw_dbp.address[VAR_21]);
        FUNC_10(FUNC_1(VAR_21), VAR_18->hw_dbp.address_mask[VAR_21]);
        FUNC_10(FUNC_2(VAR_21), VAR_18->hw_dbp.asid[VAR_21]);
        FUNC_10(FUNC_3(VAR_21), VAR_18->hw_dbp.control[VAR_21]);
    }
    FUNC_10(VAR_16, VAR_18->hw_ibp.status);
    for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
    {
        FUNC_10(FUNC_4(VAR_21), VAR_18->hw_ibp.address[VAR_21]);
        FUNC_10(FUNC_5(VAR_21), VAR_18->hw_ibp.address_mask[VAR_21]);
        FUNC_10(FUNC_6(VAR_21), VAR_18->hw_ibp.asid[VAR_21]);
        FUNC_10(FUNC_7(VAR_21), VAR_18->hw_ibp.control[VAR_21]);
    }
    FUNC_8(VAR_18->cop0.index, VAR_7);
    FUNC_8(VAR_18->cop0.entrylo[0], VAR_5);
    FUNC_8(VAR_18->cop0.entrylo[1], VAR_6);
    FUNC_8(VAR_18->cop0.entryhi, VAR_4);
    FUNC_8(VAR_18->cop0.pagemask, VAR_9);
    FUNC_8(VAR_18->cop0.status, VAR_14);
    FUNC_8(VAR_18->cop0.cause, VAR_0);
    FUNC_8(VAR_18->cop0.debug, VAR_1);
    FUNC_8(VAR_18->cop0.multicoredebug, VAR_8);
    FUNC_8(VAR_18->cop0.perfval[0], VAR_12);
    FUNC_8(VAR_18->cop0.perfval[1], VAR_13);
    FUNC_8(VAR_18->cop0.perfctrl[0], VAR_10);
    FUNC_8(VAR_18->cop0.perfctrl[1], VAR_11);
    FUNC_8(VAR_18->cop0.depc, VAR_2);
    FUNC_8(VAR_18->cop0.desave, VAR_3);
    VAR_20 = VAR_18->lo;
    VAR_19 = VAR_18->hi;
    asm("mtlo %0" :: "r"(VAR_20));
    asm("mthi %0" :: "r"(VAR_19));
}
