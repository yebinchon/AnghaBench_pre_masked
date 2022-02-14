
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {size_t* padding; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; size_t n_subbufs; } ;



__attribute__((used)) static size_t FUNC_0(struct rchan_buf *VAR_0,
          size_t VAR_1,
          size_t VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;
 size_t VAR_6 = VAR_0->chan->subbuf_size;
 size_t VAR_7 = VAR_0->chan->n_subbufs;

 VAR_3 = VAR_1 / VAR_6;
 VAR_4 = VAR_0->padding[VAR_3];
 if (VAR_1 % VAR_6 + VAR_2 + VAR_4 == VAR_6)
  VAR_5 = (VAR_3 + 1) * VAR_6;
 else
  VAR_5 = VAR_1 + VAR_2;
 if (VAR_5 >= VAR_6 * VAR_7)
  VAR_5 = 0;

 return VAR_5;
}
