
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int dma_chan; struct sc_info* parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (struct sc_info*,int ,int ) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct sc_chinfo *VAR_3, u_int32_t VAR_4)
{
    struct sc_info *VAR_5 = VAR_3->parent;
    u_int32_t VAR_6;

    VAR_6 = !(FUNC_2(VAR_5, FUNC_0(VAR_3->dma_chan)) & VAR_0);

    if (VAR_4)
 FUNC_1(VAR_5, FUNC_0(VAR_3->dma_chan), VAR_0);
    else
 FUNC_3(VAR_5, FUNC_0(VAR_3->dma_chan), VAR_0);

    FUNC_4(VAR_5, VAR_1, VAR_2);

    return VAR_6;
}
