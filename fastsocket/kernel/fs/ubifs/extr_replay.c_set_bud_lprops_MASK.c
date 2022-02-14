
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int dirty; scalar_t__ free; int flags; } ;
struct ubifs_info {scalar_t__ leb_size; } ;
struct replay_entry {scalar_t__ offs; int dirty; int free; int lnum; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 int FUNC_2 (char*,int ,scalar_t__,int) ;
 int FUNC_3 (char*,int ,scalar_t__,int) ;
 int FUNC_4 (char*,int ,scalar_t__,int,int ,int) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,struct ubifs_lprops const*,int ,int,int,int ) ;
 int FUNC_6 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_7 (struct ubifs_info*,int ) ;
 int FUNC_8 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_9(struct ubifs_info *VAR_1, struct replay_entry *VAR_2)
{
 const struct ubifs_lprops *VAR_3;
 int VAR_4 = 0, VAR_5;

 FUNC_6(VAR_1);

 VAR_3 = FUNC_7(VAR_1, VAR_2->lnum);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }

 VAR_5 = VAR_3->dirty;
 if (VAR_2->offs == 0 && (VAR_3->free != VAR_1->leb_size || VAR_3->dirty != 0)) {
  FUNC_3("bud LEB %d was GC'd (%d free, %d dirty)", VAR_2->lnum,
   VAR_3->free, VAR_3->dirty);
  FUNC_2("bud LEB %d was GC'd (%d free, %d dirty)", VAR_2->lnum,
   VAR_3->free, VAR_3->dirty);
  VAR_5 -= VAR_1->leb_size - VAR_3->free;







  if (VAR_5 != 0)
   FUNC_4("LEB %d lp: %d free %d dirty "
    "replay: %d free %d dirty", VAR_2->lnum, VAR_3->free,
    VAR_3->dirty, VAR_2->free, VAR_2->dirty);
 }
 VAR_3 = FUNC_5(VAR_1, VAR_3, VAR_2->free, VAR_5 + VAR_2->dirty,
        VAR_3->flags | VAR_0, 0);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }
out:
 FUNC_8(VAR_1);
 return VAR_4;
}
