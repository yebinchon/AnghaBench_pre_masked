
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rchan_buf {int offset; int prev_padding; size_t subbufs_produced; int* padding; TYPE_4__* chan; void* data; void* start; int timer; int read_wait; int early_bytes; TYPE_2__* dentry; } ;
struct TYPE_8__ {size_t subbuf_size; size_t n_subbufs; size_t last_toobig; TYPE_3__* cb; } ;
struct TYPE_7__ {int (* subbuf_start ) (struct rchan_buf*,void*,void*,int) ;} ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {int i_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct rchan_buf*,void*,void*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;

size_t FUNC_5(struct rchan_buf *VAR_1, size_t VAR_2)
{
 void *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6;

 if (FUNC_3(VAR_2 > VAR_1->chan->subbuf_size))
  goto toobig;

 if (VAR_1->offset != VAR_1->chan->subbuf_size + 1) {
  VAR_1->prev_padding = VAR_1->chan->subbuf_size - VAR_1->offset;
  VAR_5 = VAR_1->subbufs_produced % VAR_1->chan->n_subbufs;
  VAR_1->padding[VAR_5] = VAR_1->prev_padding;
  VAR_1->subbufs_produced++;
  if (VAR_1->dentry)
   VAR_1->dentry->d_inode->i_size +=
    VAR_1->chan->subbuf_size -
    VAR_1->padding[VAR_5];
  else
   VAR_1->early_bytes += VAR_1->chan->subbuf_size -
         VAR_1->padding[VAR_5];
  FUNC_1();
  if (FUNC_4(&VAR_1->read_wait))






   FUNC_0(&VAR_1->timer, VAR_0 + 1);
 }

 VAR_3 = VAR_1->data;
 VAR_6 = VAR_1->subbufs_produced % VAR_1->chan->n_subbufs;
 VAR_4 = VAR_1->start + VAR_6 * VAR_1->chan->subbuf_size;
 VAR_1->offset = 0;
 if (!VAR_1->chan->cb->subbuf_start(VAR_1, VAR_4, VAR_3, VAR_1->prev_padding)) {
  VAR_1->offset = VAR_1->chan->subbuf_size + 1;
  return 0;
 }
 VAR_1->data = VAR_4;
 VAR_1->padding[VAR_6] = 0;

 if (FUNC_3(VAR_2 + VAR_1->offset > VAR_1->chan->subbuf_size))
  goto toobig;

 return VAR_2;

toobig:
 VAR_1->chan->last_toobig = VAR_2;
 return 0;
}
