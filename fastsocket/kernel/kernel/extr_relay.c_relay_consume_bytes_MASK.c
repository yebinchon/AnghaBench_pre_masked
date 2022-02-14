
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {int bytes_consumed; TYPE_1__* chan; int cpu; } ;
struct TYPE_2__ {int subbuf_size; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rchan_buf *VAR_0, int VAR_1)
{
 VAR_0->bytes_consumed += VAR_1;

 if (VAR_0->bytes_consumed >= VAR_0->chan->subbuf_size) {
  FUNC_0(VAR_0->chan, VAR_0->cpu, 1);
  VAR_0->bytes_consumed %= VAR_0->chan->subbuf_size;
 }
}
