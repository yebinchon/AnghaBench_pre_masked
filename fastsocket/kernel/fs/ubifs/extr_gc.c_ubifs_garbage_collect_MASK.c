
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int used; int offs; int lnum; int io_mutex; int jhead; } ;
struct ubifs_lprops {int lnum; scalar_t__ free; scalar_t__ dirty; int flags; } ;
struct ubifs_info {int dead_wm; int leb_size; int dark_wm; int gc_lnum; int idx_gc; scalar_t__ ro_media; TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,int,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_9 (struct ubifs_info*) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_lprops*,int,int) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_lprops*) ;
 scalar_t__ FUNC_12 (struct ubifs_info*) ;
 int FUNC_13 (struct ubifs_info*,int) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,int) ;
 int FUNC_16 (struct ubifs_wbuf*) ;

int FUNC_17(struct ubifs_info *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15 = VAR_10->dead_wm;
 struct ubifs_lprops VAR_16;
 struct ubifs_wbuf *VAR_17 = &VAR_10->jheads[VAR_3].wbuf;

 FUNC_7(VAR_10);

 if (FUNC_12(VAR_10))
  return -VAR_0;

 FUNC_4(&VAR_17->io_mutex, VAR_17->jhead);

 if (VAR_10->ro_media) {
  VAR_14 = -VAR_2;
  goto out_unlock;
 }


 FUNC_6(!VAR_17->used);

 for (VAR_12 = 0; ; VAR_12++) {
  int VAR_18 = VAR_10->leb_size - VAR_17->offs - VAR_17->used;
  int VAR_19;

  FUNC_0();


  if (FUNC_12(VAR_10)) {
   VAR_14 = -VAR_0;
   break;
  }

  if (VAR_12 > VAR_9 && !FUNC_3(&VAR_10->idx_gc)) {




   FUNC_1("soft limit, some index LEBs GC'ed, -EAGAIN");
   FUNC_9(VAR_10);
   VAR_14 = -VAR_0;
   break;
  }

  if (VAR_12 > VAR_4) {




   FUNC_1("hard limit, -ENOSPC");
   VAR_14 = -VAR_1;
   break;
  }
  VAR_14 = FUNC_10(VAR_10, &VAR_16, VAR_15, VAR_11 ? 0 : 1);
  if (VAR_14) {
   if (VAR_14 == -VAR_1)
    FUNC_1("no more dirty LEBs");
   break;
  }

  FUNC_1("found LEB %d: free %d, dirty %d, sum %d "
         "(min. space %d)", VAR_16.lnum, VAR_16.free, VAR_16.dirty,
         VAR_16.free + VAR_16.dirty, VAR_15);

  if (VAR_16.free + VAR_16.dirty == VAR_10->leb_size) {

   FUNC_1("LEB %d is free, return it", VAR_16.lnum);




   FUNC_6(!(VAR_16.flags & VAR_8));
   if (VAR_16.free != VAR_10->leb_size) {






    VAR_14 = FUNC_2(VAR_10);
    if (VAR_14)
     goto out;
    VAR_14 = FUNC_8(VAR_10, VAR_16.lnum,
         VAR_10->leb_size, 0, 0, 0,
         0);
    if (VAR_14)
     goto out;
   }
   VAR_14 = FUNC_13(VAR_10, VAR_16.lnum);
   if (VAR_14)
    goto out;
   VAR_14 = VAR_16.lnum;
   break;
  }

  VAR_18 = VAR_10->leb_size - VAR_17->offs - VAR_17->used;
  if (VAR_17->lnum == -1)
   VAR_18 = 0;

  VAR_14 = FUNC_11(VAR_10, &VAR_16);
  if (VAR_14 < 0) {
   if (VAR_14 == -VAR_0 || VAR_14 == -VAR_1) {
    VAR_13 = FUNC_14(VAR_10, VAR_16.lnum);
    if (VAR_13)
     VAR_14 = VAR_13;
    break;
   }
   goto out;
  }

  if (VAR_14 == VAR_5) {

   FUNC_1("LEB %d freed, return", VAR_16.lnum);
   VAR_14 = VAR_16.lnum;
   break;
  }

  if (VAR_14 == VAR_6) {






   FUNC_1("indexing LEB %d freed, continue", VAR_16.lnum);
   continue;
  }

  FUNC_6(VAR_14 == VAR_7);
  VAR_19 = VAR_10->leb_size - VAR_17->offs - VAR_17->used;
  FUNC_1("LEB %d retained, freed %d bytes", VAR_16.lnum,
         VAR_19 - VAR_18);

  if (VAR_19 > VAR_18) {

   VAR_15 >>= 1;
   if (VAR_15 < VAR_10->dead_wm)
    VAR_15 = VAR_10->dead_wm;
   continue;
  }

  FUNC_1("did not make progress");
  if (VAR_12 < VAR_9) {
   FUNC_1("try again");
   continue;
  }

  VAR_15 <<= 1;
  if (VAR_15 > VAR_10->dark_wm)
   VAR_15 = VAR_10->dark_wm;
  FUNC_1("set min. space to %d", VAR_15);
 }

 if (VAR_14 == -VAR_1 && !FUNC_3(&VAR_10->idx_gc)) {
  FUNC_1("no space, some index LEBs GC'ed, -EAGAIN");
  FUNC_9(VAR_10);
  VAR_14 = -VAR_0;
 }

 VAR_13 = FUNC_16(VAR_17);
 if (!VAR_13)
  VAR_13 = FUNC_13(VAR_10, VAR_10->gc_lnum);
 if (VAR_13) {
  VAR_14 = VAR_13;
  goto out;
 }
out_unlock:
 FUNC_5(&VAR_17->io_mutex);
 return VAR_14;

out:
 FUNC_6(VAR_14 < 0);
 FUNC_6(VAR_14 != -VAR_1 && VAR_14 != -VAR_0);
 FUNC_15(VAR_10, VAR_14);
 FUNC_16(VAR_17);
 FUNC_5(&VAR_17->io_mutex);
 FUNC_14(VAR_10, VAR_16.lnum);
 return VAR_14;
}
