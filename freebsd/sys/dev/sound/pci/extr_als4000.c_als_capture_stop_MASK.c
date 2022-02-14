
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int dma_active; struct sc_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct sc_chinfo *VAR_2)
{
 struct sc_info *VAR_3 = VAR_2->parent;
 u_int32_t VAR_4;

 VAR_4 = VAR_2->dma_active;
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_0, VAR_1);
 }
 VAR_2->dma_active = 0;
 return VAR_4;
}
