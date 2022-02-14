
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct nilfs_bdesc {scalar_t__ bd_level; scalar_t__ bd_blocknr; scalar_t__ bd_oblocknr; int bd_offset; } ;
struct nilfs_argv {size_t v_nmembs; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nilfs_bmap* i_bmap; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nilfs_bmap*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct nilfs_bmap*,int ,scalar_t__) ;
 struct inode* FUNC_4 (struct the_nilfs*) ;
 int FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_6(struct the_nilfs *VAR_1,
      struct nilfs_argv *VAR_2, void *VAR_3)
{
 size_t VAR_4 = VAR_2->v_nmembs;
 struct inode *VAR_5 = FUNC_4(VAR_1);
 struct nilfs_bmap *VAR_6 = FUNC_0(VAR_5)->i_bmap;
 struct nilfs_bdesc *VAR_7 = VAR_3;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {

  VAR_8 = FUNC_2(VAR_6,
       VAR_7[VAR_9].bd_offset,
       VAR_7[VAR_9].bd_level + 1,
       &VAR_7[VAR_9].bd_blocknr);
  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_0)
    return VAR_8;
   VAR_7[VAR_9].bd_blocknr = 0;
  }
  if (VAR_7[VAR_9].bd_blocknr != VAR_7[VAR_9].bd_oblocknr)

   continue;
  if (VAR_7[VAR_9].bd_level == 0) {
   VAR_8 = FUNC_5(VAR_5,
        VAR_7[VAR_9].bd_offset);
   if (VAR_8 < 0) {
    FUNC_1(VAR_8 == -VAR_0);
    return VAR_8;
   }
  } else {
   VAR_8 = FUNC_3(VAR_6, VAR_7[VAR_9].bd_offset,
           VAR_7[VAR_9].bd_level);
   if (VAR_8 < 0) {
    FUNC_1(VAR_8 == -VAR_0);
    return VAR_8;
   }
  }
 }
 return VAR_4;
}
