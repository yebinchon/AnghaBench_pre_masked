
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int io_mutex; int jhead; } ;
struct ubifs_info {int jhead_cnt; TYPE_1__* jheads; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (struct ubifs_wbuf*) ;
 scalar_t__ FUNC_4 (struct ubifs_wbuf*,int ) ;

int FUNC_5(struct ubifs_info *VAR_1, struct inode *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->jhead_cnt; VAR_3++) {
  struct ubifs_wbuf *VAR_5 = &VAR_1->jheads[VAR_3].wbuf;

  if (VAR_3 == VAR_0)






   continue;

  if (!FUNC_4(VAR_5, VAR_2->i_ino))
   continue;

  FUNC_0(&VAR_5->io_mutex, VAR_5->jhead);
  if (FUNC_4(VAR_5, VAR_2->i_ino))
   VAR_4 = FUNC_3(VAR_5);
  FUNC_1(&VAR_5->io_mutex);

  if (VAR_4) {
   FUNC_2(VAR_1, VAR_4);
   return VAR_4;
  }
 }
 return 0;
}
