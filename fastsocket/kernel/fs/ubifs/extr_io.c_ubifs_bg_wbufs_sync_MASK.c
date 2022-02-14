
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int io_mutex; int jhead; int need_sync; } ;
struct ubifs_info {int jhead_cnt; TYPE_1__* jheads; scalar_t__ ro_media; scalar_t__ need_wbuf_sync; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_wbuf*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ubifs_info*,int) ;
 int FUNC_8 (struct ubifs_wbuf*) ;

int FUNC_9(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1->need_wbuf_sync)
  return 0;
 VAR_1->need_wbuf_sync = 0;

 if (VAR_1->ro_media) {
  VAR_2 = -VAR_0;
  goto out_timers;
 }

 FUNC_2("synchronize");
 for (VAR_3 = 0; VAR_3 < VAR_1->jhead_cnt; VAR_3++) {
  struct ubifs_wbuf *VAR_4 = &VAR_1->jheads[VAR_3].wbuf;

  FUNC_1();





  if (FUNC_3(&VAR_4->io_mutex))
   continue;

  FUNC_4(&VAR_4->io_mutex, VAR_4->jhead);
  if (!VAR_4->need_sync) {
   FUNC_5(&VAR_4->io_mutex);
   continue;
  }

  VAR_2 = FUNC_8(VAR_4);
  FUNC_5(&VAR_4->io_mutex);
  if (VAR_2) {
   FUNC_6("cannot sync write-buffer, error %d", VAR_2);
   FUNC_7(VAR_1, VAR_2);
   goto out_timers;
  }
 }

 return 0;

out_timers:

 for (VAR_3 = 0; VAR_3 < VAR_1->jhead_cnt; VAR_3++) {
  struct ubifs_wbuf *VAR_5 = &VAR_1->jheads[VAR_3].wbuf;

  FUNC_4(&VAR_5->io_mutex, VAR_5->jhead);
  FUNC_0(VAR_5);
  FUNC_5(&VAR_5->io_mutex);
 }
 return VAR_2;
}
