
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct ubifs_wbuf {int lnum; int offs; int avail; unsigned long long delta; int softlimit; TYPE_1__ timer; scalar_t__ next_ino; struct ubifs_info* c; int lock; int io_mutex; int * sync_callback; int dtype; scalar_t__ used; int * buf; void* inodes; } ;
struct ubifs_info {size_t min_io_size; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (unsigned long long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int VAR_9 ;

int FUNC_7(struct ubifs_info *VAR_10, struct ubifs_wbuf *VAR_11)
{
 size_t VAR_12;

 VAR_11->buf = FUNC_2(VAR_10->min_io_size, VAR_2);
 if (!VAR_11->buf)
  return -VAR_1;

 VAR_12 = (VAR_10->min_io_size / VAR_4 + 1) * sizeof(ino_t);
 VAR_11->inodes = FUNC_2(VAR_12, VAR_2);
 if (!VAR_11->inodes) {
  FUNC_1(VAR_11->buf);
  VAR_11->buf = ((void*)0);
  return -VAR_1;
 }

 VAR_11->used = 0;
 VAR_11->lnum = VAR_11->offs = -1;
 VAR_11->avail = VAR_10->min_io_size;
 VAR_11->dtype = VAR_5;
 VAR_11->sync_callback = ((void*)0);
 FUNC_4(&VAR_11->io_mutex);
 FUNC_5(&VAR_11->lock);
 VAR_11->c = VAR_10;
 VAR_11->next_ino = 0;

 FUNC_0(&VAR_11->timer, VAR_0, VAR_3);
 VAR_11->timer.function = VAR_9;
 VAR_11->softlimit = FUNC_3(VAR_8, 0);
 VAR_11->delta = VAR_7 - VAR_8;
 VAR_11->delta *= 1000000000ULL;
 FUNC_6(VAR_11->delta <= VAR_6);
 return 0;
}
