
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union cdu_context {int dummy; } cdu_context ;
struct bxe_softc {TYPE_3__* ilt; TYPE_1__* context; } ;
struct TYPE_8__ {scalar_t__ vaddr; } ;
struct TYPE_7__ {TYPE_2__* clients; int lines; int start_line; } ;
struct TYPE_6__ {int flags; int client_num; int end; int start; int page_size; } ;
struct TYPE_5__ {scalar_t__ size; TYPE_4__ vcxt_dma; union cdu_context* vcxt; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*,scalar_t__,TYPE_4__*,char*) ;
 int FUNC_5 (struct bxe_softc*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct bxe_softc *VAR_3)
{

    int VAR_4;
    int VAR_5;
    int VAR_6;
    VAR_4 = (sizeof(union cdu_context) * FUNC_2(VAR_3));
    for (VAR_6 = 0, VAR_5 = 0; VAR_5 < VAR_4; VAR_6++) {
        VAR_3->context[VAR_6].size = FUNC_7(VAR_0,
                                  (VAR_4 - VAR_5));

        if (FUNC_4(VAR_3, VAR_3->context[VAR_6].size,
                          &VAR_3->context[VAR_6].vcxt_dma,
                          "cdu context") != 0) {
            FUNC_5(VAR_3);
            return (-1);
        }

        VAR_3->context[VAR_6].vcxt =
            (union cdu_context *)VAR_3->context[VAR_6].vcxt_dma.vaddr;

        VAR_5 += VAR_3->context[VAR_6].size;
    }

    FUNC_3(VAR_3);

    FUNC_0(VAR_3, VAR_1, "ilt=%p start_line=%u lines=%p\n",
          VAR_3->ilt, VAR_3->ilt->start_line, VAR_3->ilt->lines);
    {
        for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            FUNC_0(VAR_3, VAR_1,
                  "c%d page_size=%u start=%u end=%u num=%u flags=0x%x\n",
                  VAR_6,
                  VAR_3->ilt->clients[VAR_6].page_size,
                  VAR_3->ilt->clients[VAR_6].start,
                  VAR_3->ilt->clients[VAR_6].end,
                  VAR_3->ilt->clients[VAR_6].client_num,
                  VAR_3->ilt->clients[VAR_6].flags);
        }
    }
    if (FUNC_6(VAR_3, VAR_2)) {
        FUNC_1(VAR_3, "ecore_ilt_mem_op ILT_MEMOP_ALLOC failed\n");
        FUNC_5(VAR_3);
        return (-1);
    }

    return (0);
}
