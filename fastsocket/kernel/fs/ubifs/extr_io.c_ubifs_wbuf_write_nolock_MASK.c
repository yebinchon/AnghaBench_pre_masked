
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {scalar_t__ lnum; int offs; int used; int avail; void* buf; int (* sync_callback ) (struct ubifs_info*,scalar_t__,int,int ) ;int lock; scalar_t__ next_ino; int dtype; int jhead; int io_mutex; struct ubifs_info* c; } ;
struct ubifs_info {scalar_t__ leb_cnt; int min_io_size; int leb_size; int min_io_shift; int ubi; scalar_t__ ro_media; } ;
struct ubifs_ch {int node_type; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_wbuf*) ;
 int FUNC_2 (struct ubifs_info*,scalar_t__) ;
 int FUNC_3 (struct ubifs_info*,void*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,scalar_t__,int,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,void*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ubifs_wbuf*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ubifs_info*,scalar_t__,int,int ) ;
 int FUNC_14 (int ,scalar_t__,void*,int,int,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,int,scalar_t__,int,int) ;

int FUNC_17(struct ubifs_wbuf *VAR_2, void *VAR_3, int VAR_4)
{
 struct ubifs_info *VAR_5 = VAR_2->c;
 int VAR_6, VAR_7, VAR_8, VAR_9 = FUNC_0(VAR_4, 8), VAR_10;

 FUNC_5("%d bytes (%s) to jhead %s wbuf at LEB %d:%d", VAR_4,
        FUNC_7(((struct ubifs_ch *)VAR_3)->node_type),
        FUNC_6(VAR_2->jhead), VAR_2->lnum, VAR_2->offs + VAR_2->used);
 FUNC_15(VAR_4 > 0 && VAR_2->lnum >= 0 && VAR_2->lnum < VAR_5->leb_cnt);
 FUNC_15(VAR_2->offs >= 0 && VAR_2->offs % VAR_5->min_io_size == 0);
 FUNC_15(!(VAR_2->offs & 7) && VAR_2->offs <= VAR_5->leb_size);
 FUNC_15(VAR_2->avail > 0 && VAR_2->avail <= VAR_5->min_io_size);
 FUNC_15(FUNC_9(&VAR_2->io_mutex));

 if (VAR_5->leb_size - VAR_2->offs - VAR_2->used < VAR_9) {
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_2);

 if (VAR_5->ro_media)
  return -VAR_1;

 if (VAR_9 <= VAR_2->avail) {




  FUNC_8(VAR_2->buf + VAR_2->used, VAR_3, VAR_4);

  if (VAR_9 == VAR_2->avail) {
   FUNC_5("flush jhead %s wbuf to LEB %d:%d",
          FUNC_6(VAR_2->jhead), VAR_2->lnum, VAR_2->offs);
   VAR_6 = FUNC_14(VAR_5->ubi, VAR_2->lnum, VAR_2->buf,
         VAR_2->offs, VAR_5->min_io_size,
         VAR_2->dtype);
   if (VAR_6)
    goto out;

   FUNC_11(&VAR_2->lock);
   VAR_2->offs += VAR_5->min_io_size;
   VAR_2->avail = VAR_5->min_io_size;
   VAR_2->used = 0;
   VAR_2->next_ino = 0;
   FUNC_12(&VAR_2->lock);
  } else {
   FUNC_11(&VAR_2->lock);
   VAR_2->avail -= VAR_9;
   VAR_2->used += VAR_9;
   FUNC_12(&VAR_2->lock);
  }

  goto exit;
 }






 FUNC_5("flush jhead %s wbuf to LEB %d:%d",
        FUNC_6(VAR_2->jhead), VAR_2->lnum, VAR_2->offs);
 FUNC_8(VAR_2->buf + VAR_2->used, VAR_3, VAR_2->avail);
 VAR_6 = FUNC_14(VAR_5->ubi, VAR_2->lnum, VAR_2->buf, VAR_2->offs,
       VAR_5->min_io_size, VAR_2->dtype);
 if (VAR_6)
  goto out;

 VAR_10 = VAR_2->offs + VAR_5->min_io_size;
 VAR_4 -= VAR_2->avail;
 VAR_9 -= VAR_2->avail;
 VAR_7 = VAR_2->avail;







 VAR_8 = VAR_9 >> VAR_5->min_io_shift;
 if (VAR_8) {
  VAR_8 <<= VAR_5->min_io_shift;
  FUNC_5("write %d bytes to LEB %d:%d", VAR_8, VAR_2->lnum, VAR_10);
  VAR_6 = FUNC_14(VAR_5->ubi, VAR_2->lnum, VAR_3 + VAR_7, VAR_10, VAR_8,
        VAR_2->dtype);
  if (VAR_6)
   goto out;
  VAR_10 += VAR_8;
  VAR_9 -= VAR_8;
  VAR_4 -= VAR_8;
  VAR_7 += VAR_8;
 }

 FUNC_11(&VAR_2->lock);
 if (VAR_9)





  FUNC_8(VAR_2->buf, VAR_3 + VAR_7, VAR_4);

 VAR_2->offs = VAR_10;
 VAR_2->used = VAR_9;
 VAR_2->avail = VAR_5->min_io_size - VAR_9;
 VAR_2->next_ino = 0;
 FUNC_12(&VAR_2->lock);

exit:
 if (VAR_2->sync_callback) {
  int VAR_11 = VAR_5->leb_size - VAR_2->offs - VAR_2->used;

  VAR_6 = VAR_2->sync_callback(VAR_5, VAR_2->lnum, VAR_11, 0);
  if (VAR_6)
   goto out;
 }

 if (VAR_2->used)
  FUNC_10(VAR_2);

 return 0;

out:
 FUNC_16("cannot write %d bytes to LEB %d:%d, error %d",
    VAR_4, VAR_2->lnum, VAR_2->offs, VAR_6);
 FUNC_3(VAR_5, VAR_3);
 FUNC_4();
 FUNC_2(VAR_5, VAR_2->lnum);
 return VAR_6;
}
