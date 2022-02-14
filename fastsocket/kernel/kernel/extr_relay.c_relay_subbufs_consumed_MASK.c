
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {size_t subbufs_produced; size_t subbufs_consumed; } ;
struct rchan {size_t n_subbufs; struct rchan_buf** buf; } ;


 unsigned int VAR_0 ;

void FUNC_0(struct rchan *VAR_1,
       unsigned int VAR_2,
       size_t VAR_3)
{
 struct rchan_buf *VAR_4;

 if (!VAR_1)
  return;

 if (VAR_2 >= VAR_0 || !VAR_1->buf[VAR_2] ||
     VAR_3 > VAR_1->n_subbufs)
  return;

 VAR_4 = VAR_1->buf[VAR_2];
 if (VAR_3 > VAR_4->subbufs_produced - VAR_4->subbufs_consumed)
  VAR_4->subbufs_consumed = VAR_4->subbufs_produced;
 else
  VAR_4->subbufs_consumed += VAR_3;
}
