
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int dma_setup; int bps; int buffer; int dma_chan; struct sc_info* parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sc_chinfo*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct sc_chinfo *VAR_0)
{
    struct sc_info *VAR_1 = VAR_0->parent;
    u_int32_t VAR_2;

    if (!VAR_0->dma_setup) {
 VAR_2 = FUNC_2(VAR_0, 0);
 FUNC_3(VAR_1, FUNC_0(VAR_0->dma_chan),
    FUNC_4(VAR_0->buffer));
 FUNC_3(VAR_1, FUNC_1(VAR_0->dma_chan),
    FUNC_5(VAR_0->buffer) / VAR_0->bps - 1);
 VAR_0->dma_setup = 1;
 FUNC_2(VAR_0, VAR_2);
    }
}
