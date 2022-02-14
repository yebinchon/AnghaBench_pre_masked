
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aoa_dma {int blksz; int bufsz; int channel; int buf; int running; } ;
typedef int kobj_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct aoa_dma*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_5(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct aoa_dma *VAR_3 = VAR_1;
 int VAR_4, VAR_5;

 FUNC_0(("aoa_chan_setblocksize: blocksz = %u, dma->blksz = %u\n",
  VAR_2, VAR_3->blksz));
 FUNC_1(!VAR_3->running, ("dma is running"));
 FUNC_1(VAR_2 > 0, ("bad blocksz"));


 __asm volatile ("cntlzw %0,%1" : "=r"(VAR_5) : "r"(VAR_2));
 VAR_2 = 1 << (31 - VAR_5);
 FUNC_0(("blocksz = %u\n", VAR_2));


 if (VAR_2 > VAR_3->bufsz)
  VAR_2 = VAR_3->bufsz;

 VAR_4 = FUNC_4(VAR_3->buf, VAR_3->bufsz / VAR_2, VAR_2);
 if (VAR_4 != 0) {
  FUNC_0(("sndbuf_resize returned %d\n", VAR_4));
  return (0);
 }

 if (VAR_2 == VAR_3->blksz)
  return (VAR_3->blksz);


 VAR_4 = FUNC_3(VAR_3->channel, 2 + VAR_3->bufsz / VAR_2);
 if (VAR_4 != 0) {
  FUNC_0(("dbdma_resize_channel returned %d\n", VAR_4));
  return (0);
 }


 VAR_3->blksz = VAR_2;
 FUNC_2(VAR_3);

 return (VAR_3->blksz);
}
