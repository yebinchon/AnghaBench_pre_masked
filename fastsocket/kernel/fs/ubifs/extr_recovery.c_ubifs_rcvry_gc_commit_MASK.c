
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int lnum; scalar_t__ offs; int io_mutex; int jhead; } ;
struct ubifs_lprops {int flags; int lnum; scalar_t__ free; scalar_t__ dirty; } ;
struct ubifs_info {int gc_lnum; scalar_t__ leb_size; TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubifs_info*,int,scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_lprops*,scalar_t__,int) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_lprops*) ;
 int FUNC_9 (struct ubifs_info*,int) ;
 int FUNC_10 (struct ubifs_info*,int) ;
 int FUNC_11 (struct ubifs_info*) ;
 int FUNC_12 (struct ubifs_wbuf*) ;

int FUNC_13(struct ubifs_info *VAR_7)
{
 struct ubifs_wbuf *VAR_8 = &VAR_7->jheads[VAR_3].wbuf;
 struct ubifs_lprops VAR_9;
 int VAR_10, VAR_11;

 VAR_7->gc_lnum = -1;
 if (VAR_8->lnum == -1) {
  FUNC_1("no GC head LEB");
  goto find_free;
 }




 if (VAR_8->offs == VAR_7->leb_size) {
  FUNC_1("no room in GC head LEB");
  goto find_free;
 }
 VAR_11 = FUNC_6(VAR_7, &VAR_9, VAR_8->offs, 2);
 if (VAR_11) {
  if (VAR_11 == -VAR_2)
   FUNC_0("could not find a dirty LEB");
  return VAR_11;
 }
 FUNC_4(!(VAR_9.flags & VAR_5));
 VAR_10 = VAR_9.lnum;
 if (VAR_9.free + VAR_9.dirty == VAR_7->leb_size) {

  if (VAR_9.free != VAR_7->leb_size) {
   VAR_11 = FUNC_5(VAR_7, VAR_10, VAR_7->leb_size,
        0, 0, 0, 0);
   if (VAR_11)
    return VAR_11;
  }
  VAR_11 = FUNC_9(VAR_7, VAR_10);
  if (VAR_11)
   return VAR_11;
  VAR_7->gc_lnum = VAR_10;
  FUNC_1("allocated LEB %d for GC", VAR_10);

  FUNC_1("committing");
  return FUNC_11(VAR_7);
 }




 if (VAR_9.free + VAR_9.dirty < VAR_8->offs) {
  FUNC_1("LEB %d doesn't fit in GC head LEB %d:%d",
     VAR_10, VAR_8->lnum, VAR_8->offs);
  VAR_11 = FUNC_10(VAR_7, VAR_10);
  if (VAR_11)
   return VAR_11;
  goto find_free;
 }




 FUNC_1("committing");
 VAR_11 = FUNC_11(VAR_7);
 if (VAR_11)
  return VAR_11;




 FUNC_1("GC'ing LEB %d", VAR_10);
 FUNC_2(&VAR_8->io_mutex, VAR_8->jhead);
 VAR_11 = FUNC_8(VAR_7, &VAR_9);
 if (VAR_11 >= 0) {
  int VAR_12 = FUNC_12(VAR_8);

  if (VAR_12)
   VAR_11 = VAR_12;
 }
 FUNC_3(&VAR_8->io_mutex);
 if (VAR_11 < 0) {
  FUNC_0("GC failed, error %d", VAR_11);
  if (VAR_11 == -VAR_0)
   VAR_11 = -VAR_1;
  return VAR_11;
 }
 if (VAR_11 != VAR_4) {
  FUNC_0("GC returned %d", VAR_11);
  return -VAR_1;
 }
 VAR_11 = FUNC_9(VAR_7, VAR_7->gc_lnum);
 if (VAR_11)
  return VAR_11;
 FUNC_1("allocated LEB %d for GC", VAR_10);
 return 0;

find_free:





 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10 < 0) {
  FUNC_0("could not find an empty LEB");
  return VAR_10;
 }

 VAR_11 = FUNC_5(VAR_7, VAR_10, VAR_6, VAR_6, 0,
      VAR_5, 0);
 if (VAR_11)
  return VAR_11;
 VAR_7->gc_lnum = VAR_10;
 FUNC_1("allocated LEB %d for GC", VAR_10);

 FUNC_1("committing");
 return FUNC_11(VAR_7);
}
