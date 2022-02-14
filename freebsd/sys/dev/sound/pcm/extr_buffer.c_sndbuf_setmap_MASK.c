
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct snd_dbuf {scalar_t__ buf_addr; int buf; int dev; } ;
struct TYPE_3__ {scalar_t__ ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_dbuf *VAR_5 = (struct snd_dbuf *)VAR_1;

 if (VAR_0 > 3) {
  FUNC_0(VAR_5->dev, "sndbuf_setmap %lx, %lx; ",
      (u_long)VAR_2[0].ds_addr, (u_long)VAR_2[0].ds_len);
  FUNC_1("%p -> %lx\n", VAR_5->buf, (u_long)VAR_2[0].ds_addr);
 }
 if (VAR_4 == 0)
  VAR_5->buf_addr = VAR_2[0].ds_addr;
 else
  VAR_5->buf_addr = 0;
}
