
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_10__ {void** control; void** asid; void** address_mask; void** address; void* status; } ;
struct TYPE_9__ {void** control; void** asid; void** address_mask; void** address; void* status; } ;
struct TYPE_8__ {int desave; int depc; int * perfctrl; int * perfval; int multicoredebug; int debug; int cause; int status; int pagemask; int entryhi; int * entrylo; int index; } ;
struct TYPE_12__ {TYPE_4__* tlbs; TYPE_3__ hw_dbp; TYPE_2__ hw_ibp; TYPE_1__ cop0; void* hi; void* lo; scalar_t__ regs; } ;
typedef TYPE_5__ cvmx_debug_core_context_t ;
struct TYPE_13__ {unsigned int tlb_entries; } ;
struct TYPE_11__ {int pagemask; int entryhi; int * entrylo; } ;


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
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_15 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int VAR_16 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (unsigned int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_7__* VAR_19 ;
 int FUNC_10 (char*,int ,int) ;
 void* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(volatile cvmx_debug_core_context_t *VAR_20, uint64_t VAR_21, uint64_t VAR_22)
{
    unsigned VAR_23;
    FUNC_10 ((char *) VAR_20->regs, VAR_18, sizeof(VAR_20->regs));
    VAR_20->lo = VAR_22;
    VAR_20->hi = VAR_21;
    FUNC_8(VAR_20->cop0.index, VAR_7);
    FUNC_8(VAR_20->cop0.entrylo[0], VAR_5);
    FUNC_8(VAR_20->cop0.entrylo[1], VAR_6);
    FUNC_8(VAR_20->cop0.entryhi, VAR_4);
    FUNC_8(VAR_20->cop0.pagemask, VAR_9);
    FUNC_8(VAR_20->cop0.status, VAR_14);
    FUNC_8(VAR_20->cop0.cause, VAR_0);
    FUNC_8(VAR_20->cop0.debug, VAR_1);
    FUNC_8(VAR_20->cop0.multicoredebug, VAR_8);
    FUNC_8(VAR_20->cop0.perfval[0], VAR_12);
    FUNC_8(VAR_20->cop0.perfval[1], VAR_13);
    FUNC_8(VAR_20->cop0.perfctrl[0], VAR_10);
    FUNC_8(VAR_20->cop0.perfctrl[1], VAR_11);


    FUNC_8(VAR_20->cop0.depc, VAR_2);
    FUNC_8(VAR_20->cop0.desave, VAR_3);

    VAR_20->hw_ibp.status = FUNC_11(VAR_16);
    for (VAR_23 = 0; VAR_23 < 4; VAR_23++)
    {
        VAR_20->hw_ibp.address[VAR_23] = FUNC_11(FUNC_4(VAR_23));
        VAR_20->hw_ibp.address_mask[VAR_23] = FUNC_11(FUNC_5(VAR_23));
        VAR_20->hw_ibp.asid[VAR_23] = FUNC_11(FUNC_6(VAR_23));
        VAR_20->hw_ibp.control[VAR_23] = FUNC_11(FUNC_7(VAR_23));
    }

    VAR_20->hw_dbp.status = FUNC_11(VAR_15);
    for (VAR_23 = 0; VAR_23 < 4; VAR_23++)
    {
        VAR_20->hw_dbp.address[VAR_23] = FUNC_11(FUNC_0(VAR_23));
        VAR_20->hw_dbp.address_mask[VAR_23] = FUNC_11(FUNC_1(VAR_23));
        VAR_20->hw_dbp.asid[VAR_23] = FUNC_11(FUNC_2(VAR_23));
        VAR_20->hw_dbp.control[VAR_23] = FUNC_11(FUNC_3(VAR_23));
    }

    for (VAR_23 = 0; VAR_23 < VAR_19->tlb_entries; VAR_23++)
    {
        FUNC_9(VAR_23, VAR_7);
        asm volatile ("tlbr");
        FUNC_8(VAR_20->tlbs[VAR_23].entrylo[0], VAR_5);
        FUNC_8(VAR_20->tlbs[VAR_23].entrylo[1], VAR_6);
        FUNC_8(VAR_20->tlbs[VAR_23].entryhi, VAR_4);
        FUNC_8(VAR_20->tlbs[VAR_23].pagemask, VAR_9);
    }
    VAR_17;
}
