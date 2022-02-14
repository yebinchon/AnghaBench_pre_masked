
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rchan_buf {int data; TYPE_2__* chan; scalar_t__* padding; scalar_t__ offset; int start; scalar_t__ finalized; scalar_t__ bytes_consumed; scalar_t__ subbufs_consumed; scalar_t__ subbufs_produced; int timer; int kref; int read_wait; } ;
struct TYPE_4__ {size_t n_subbufs; TYPE_1__* cb; } ;
struct TYPE_3__ {int (* subbuf_start ) (struct rchan_buf*,int ,int *,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (struct rchan_buf*,int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct rchan_buf *VAR_1, unsigned int VAR_2)
{
 size_t VAR_3;

 if (VAR_2) {
  FUNC_1(&VAR_1->read_wait);
  FUNC_2(&VAR_1->kref);
  FUNC_3(&VAR_1->timer, VAR_0, (unsigned long)VAR_1);
 } else
  FUNC_0(&VAR_1->timer);

 VAR_1->subbufs_produced = 0;
 VAR_1->subbufs_consumed = 0;
 VAR_1->bytes_consumed = 0;
 VAR_1->finalized = 0;
 VAR_1->data = VAR_1->start;
 VAR_1->offset = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->chan->n_subbufs; VAR_3++)
  VAR_1->padding[VAR_3] = 0;

 VAR_1->chan->cb->subbuf_start(VAR_1, VAR_1->data, ((void*)0), 0);
}
