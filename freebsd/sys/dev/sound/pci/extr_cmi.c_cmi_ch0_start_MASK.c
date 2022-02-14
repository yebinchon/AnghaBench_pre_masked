
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;
struct sc_chinfo {int dma_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sc_info*,struct sc_chinfo*,int ) ;
 int FUNC_1 (struct sc_info*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_5, struct sc_chinfo *VAR_6)
{
 FUNC_0(VAR_5, VAR_6, VAR_2);

 FUNC_1(VAR_5, VAR_3, VAR_0);
 FUNC_1(VAR_5, VAR_4,
   VAR_1);

 VAR_6->dma_active = 1;
}
