
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {size_t subbufs_consumed; size_t bytes_consumed; size_t* padding; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; size_t n_subbufs; } ;



__attribute__((used)) static size_t FUNC_0(size_t VAR_0,
     struct rchan_buf *VAR_1)
{
 size_t VAR_2, VAR_3, VAR_4, VAR_5;
 size_t VAR_6 = VAR_1->chan->subbuf_size;
 size_t VAR_7 = VAR_1->chan->n_subbufs;
 size_t VAR_8 = VAR_1->subbufs_consumed % VAR_7;

 if (!VAR_0)
  VAR_0 = VAR_8 * VAR_6 + VAR_1->bytes_consumed;
 VAR_2 = VAR_0 / VAR_6;
 VAR_3 = VAR_1->padding[VAR_2];
 VAR_4 = (VAR_2 + 1) * VAR_6 - VAR_3;
 VAR_5 = (VAR_2 + 1) * VAR_6;
 if (VAR_0 >= VAR_4 && VAR_0 < VAR_5) {
  VAR_2 = (VAR_2 + 1) % VAR_7;
  VAR_0 = VAR_2 * VAR_6;
 }

 return VAR_0;
}
