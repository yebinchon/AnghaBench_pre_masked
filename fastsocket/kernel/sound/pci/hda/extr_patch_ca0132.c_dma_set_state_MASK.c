
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_engine {int codec; } ;
typedef enum dma_state { ____Placeholder_dma_state } dma_state ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dma_engine *VAR_0, enum dma_state VAR_1)
{
 bool VAR_2;

 FUNC_1("dma_set_state state=%d\n", VAR_1);

 switch (VAR_1) {
 case 128:
  VAR_2 = 0;
  break;
 case 129:
  VAR_2 = 1;
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_0->codec, VAR_2);
 return 0;
}
