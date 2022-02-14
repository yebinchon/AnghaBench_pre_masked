
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {scalar_t__ dma_chan; int spd; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sc_chinfo*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sc_info*,int ,int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_3, void *VAR_4, u_int32_t VAR_5)
{
    struct sc_chinfo *VAR_6 = VAR_4;
    struct sc_info *VAR_7 = VAR_6->parent;
    u_int32_t VAR_8, VAR_9, VAR_10;

    VAR_8 = FUNC_0(VAR_6, 0);
    VAR_10 = (VAR_6->dma_chan == VAR_2) ? VAR_1 : VAR_0;
    VAR_9 = FUNC_1(VAR_5);
    FUNC_3(VAR_7, VAR_10, VAR_9);
    FUNC_0(VAR_6, VAR_8);

    VAR_6->spd = FUNC_2(VAR_9);
    return VAR_6->spd;
}
