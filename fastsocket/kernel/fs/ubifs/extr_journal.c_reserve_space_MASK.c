
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int offs; int used; int lnum; int io_mutex; int dtype; int jhead; } ;
struct ubifs_info {int leb_size; scalar_t__ ro_media; TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubifs_info*,int,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ubifs_info*,int,int*,int) ;
 int FUNC_7 (struct ubifs_info*,int ) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 int FUNC_9 (struct ubifs_wbuf*,int,int,int ) ;

__attribute__((used)) static int FUNC_10(struct ubifs_info *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13;
 struct ubifs_wbuf *VAR_14 = &VAR_4->jheads[VAR_5].wbuf;






 VAR_13 = (VAR_5 == VAR_0);
again:
 FUNC_2(&VAR_14->io_mutex, VAR_14->jhead);

 if (VAR_4->ro_media) {
  VAR_7 = -VAR_3;
  goto out_unlock;
 }

 VAR_10 = VAR_4->leb_size - VAR_14->offs - VAR_14->used;
 if (VAR_14->lnum != -1 && VAR_10 >= VAR_6)
  return 0;





 VAR_11 = FUNC_6(VAR_4, VAR_6, &VAR_12, VAR_13);
 if (VAR_11 >= 0) {

  VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_12);
  if (VAR_7)
   goto out_return;

  goto out;
 }

 VAR_7 = VAR_11;
 if (VAR_7 != -VAR_2)
  goto out_unlock;






 FUNC_1("no free space in jhead %s, run GC", FUNC_0(VAR_5));
 FUNC_3(&VAR_14->io_mutex);

 VAR_11 = FUNC_7(VAR_4, 0);
 if (VAR_11 < 0) {
  VAR_7 = VAR_11;
  if (VAR_7 != -VAR_2)
   return VAR_7;







  FUNC_1("GC couldn't make a free LEB for jhead %s",
   FUNC_0(VAR_5));
  if (VAR_9++ < 2) {
   FUNC_1("retry (%d)", VAR_9);
   goto again;
  }

  FUNC_1("return -ENOSPC");
  return VAR_7;
 }

 FUNC_2(&VAR_14->io_mutex, VAR_14->jhead);
 FUNC_1("got LEB %d for jhead %s", VAR_11, FUNC_0(VAR_5));
 VAR_10 = VAR_4->leb_size - VAR_14->offs - VAR_14->used;

 if (VAR_14->lnum != -1 && VAR_10 >= VAR_6) {





  FUNC_1("return LEB %d back, already have LEB %d:%d",
   VAR_11, VAR_14->lnum, VAR_14->offs + VAR_14->used);
  VAR_7 = FUNC_8(VAR_4, VAR_11);
  if (VAR_7)
   goto out_unlock;
  return 0;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_11, 0);
 if (VAR_7)
  goto out_return;
 VAR_12 = 0;

out:
 VAR_7 = FUNC_9(VAR_14, VAR_11, VAR_12, VAR_14->dtype);
 if (VAR_7)
  goto out_unlock;

 return 0;

out_unlock:
 FUNC_3(&VAR_14->io_mutex);
 return VAR_7;

out_return:

 FUNC_5(VAR_7 < 0);
 VAR_8 = FUNC_8(VAR_4, VAR_11);
 if (VAR_8 && VAR_7 == -VAR_1)





  VAR_7 = VAR_8;
 FUNC_3(&VAR_14->io_mutex);
 return VAR_7;
}
