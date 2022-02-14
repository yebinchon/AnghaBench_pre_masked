
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {scalar_t__ dma_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sc_info*,int ,int ) ;
 int FUNC_1 (struct sc_info*,int ,int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct sc_info *VAR_5, struct sc_chinfo *VAR_6)
{
 u_int32_t VAR_7 = VAR_6->dma_active;

 FUNC_0(VAR_5, VAR_4, VAR_1);
 FUNC_0(VAR_5, VAR_3, VAR_0);
        FUNC_1(VAR_5, VAR_3, VAR_2);
        FUNC_0(VAR_5, VAR_3, VAR_2);
 VAR_6->dma_active = 0;
 return VAR_7;
}
