
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int dma_chan; int buffer; struct sc_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_0, void *VAR_1)
{
    struct sc_chinfo *VAR_2 = VAR_1;
    struct sc_info *VAR_3 = VAR_2->parent;
    u_int32_t VAR_4, VAR_5, VAR_6;
    int VAR_7;

    VAR_7 = FUNC_3(VAR_2->buffer);
    VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_2->dma_chan));
    VAR_5 = FUNC_2(VAR_3, FUNC_1(VAR_2->dma_chan));
    VAR_6 = (VAR_5 - VAR_4 + VAR_7) % VAR_7;

    return VAR_6;
}
