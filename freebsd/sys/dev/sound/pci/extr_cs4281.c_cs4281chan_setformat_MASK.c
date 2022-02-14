
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {scalar_t__ dma_chan; int fmt; scalar_t__ dma_setup; int bps; struct sc_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sc_chinfo*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_5, void *VAR_6, u_int32_t VAR_7)
{
    struct sc_chinfo *VAR_8 = VAR_6;
    struct sc_info *VAR_9 = VAR_8->parent;
    u_int32_t VAR_10, VAR_11;

    VAR_11 = FUNC_1(VAR_8, 0);

    if (VAR_8->dma_chan == VAR_4)
 VAR_10 = VAR_2;
    else
 VAR_10 = VAR_3;
    VAR_10 |= VAR_1 | VAR_0;
    VAR_10 |= FUNC_3(VAR_7);
    FUNC_4(VAR_9, FUNC_0(VAR_8->dma_chan), VAR_10);

    FUNC_1(VAR_8, VAR_11);

    VAR_8->fmt = VAR_7;
    VAR_8->bps = FUNC_2(VAR_7);
    VAR_8->dma_setup = 0;

    return 0;
}
