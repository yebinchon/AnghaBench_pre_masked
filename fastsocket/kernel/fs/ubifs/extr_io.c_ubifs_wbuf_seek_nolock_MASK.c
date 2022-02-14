
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int lnum; scalar_t__ used; int offs; int avail; int dtype; int lock; int jhead; struct ubifs_info* c; } ;
struct ubifs_info {int leb_cnt; int leb_size; int min_io_size; } ;


 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubifs_wbuf*) ;

int FUNC_6(struct ubifs_wbuf *VAR_0, int VAR_1, int VAR_2,
      int VAR_3)
{
 const struct ubifs_info *VAR_4 = VAR_0->c;

 FUNC_0("LEB %d:%d, jhead %s", VAR_1, VAR_2, FUNC_1(VAR_0->jhead));
 FUNC_4(VAR_1 >= 0 && VAR_1 < VAR_4->leb_cnt);
 FUNC_4(VAR_2 >= 0 && VAR_2 <= VAR_4->leb_size);
 FUNC_4(VAR_2 % VAR_4->min_io_size == 0 && !(VAR_2 & 7));
 FUNC_4(VAR_1 != VAR_0->lnum);

 if (VAR_0->used > 0) {
  int VAR_5 = FUNC_5(VAR_0);

  if (VAR_5)
   return VAR_5;
 }

 FUNC_2(&VAR_0->lock);
 VAR_0->lnum = VAR_1;
 VAR_0->offs = VAR_2;
 VAR_0->avail = VAR_4->min_io_size;
 VAR_0->used = 0;
 FUNC_3(&VAR_0->lock);
 VAR_0->dtype = VAR_3;

 return 0;
}
