
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmasg {unsigned long start_addr; unsigned int cfg; unsigned int x_count; size_t x_modify; unsigned int y_count; size_t y_modify; struct dmasg* next_desc_addr; } ;


 int FUNC_0 (char*,struct dmasg*,struct dmasg*,struct dmasg*,struct dmasg*,unsigned int,unsigned int,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dmasg *VAR_0, void *VAR_1, int VAR_2,
  size_t VAR_3, unsigned int VAR_4,
  unsigned int VAR_5, unsigned int VAR_6, size_t VAR_7)
{

 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  VAR_0[VAR_8].next_desc_addr = &(VAR_0[VAR_8 + 1]);
  VAR_0[VAR_8].start_addr = (unsigned long)VAR_1 + VAR_8*VAR_3;
  VAR_0[VAR_8].cfg = VAR_4;
  VAR_0[VAR_8].x_count = VAR_5;
  VAR_0[VAR_8].x_modify = VAR_7;
  VAR_0[VAR_8].y_count = VAR_6;
  VAR_0[VAR_8].y_modify = VAR_7;
 }


 VAR_0[VAR_2-1].next_desc_addr = VAR_0;

 FUNC_0("setup desc: desc0=%p, next0=%p, desc1=%p,"
  "next1=%p\nx_count=%x,y_count=%x,addr=0x%lx,cfs=0x%x\n",
  VAR_0, VAR_0[0].next_desc_addr,
  VAR_0+1, VAR_0[1].next_desc_addr,
  VAR_0[0].x_count, VAR_0[0].y_count,
  VAR_0[0].start_addr, VAR_0[0].cfg);
}
