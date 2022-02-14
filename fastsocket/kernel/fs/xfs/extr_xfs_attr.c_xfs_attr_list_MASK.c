
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_inode_t ;
struct TYPE_6__ {int resynch; int flags; char* alist; int bufsize; int firstu; int put_listent; TYPE_2__* cursor; int * dp; } ;
typedef TYPE_1__ xfs_attr_list_context_t ;
struct attrlist {int* al_offset; scalar_t__ al_more; scalar_t__ al_count; } ;
typedef int context ;
struct TYPE_7__ {scalar_t__ initted; scalar_t__ offset; scalar_t__ blkno; scalar_t__ hashval; scalar_t__ pad2; scalar_t__ pad1; } ;
typedef TYPE_2__ attrlist_cursor_kern_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;

int
FUNC_4(
 xfs_inode_t *VAR_4,
 char *VAR_5,
 int VAR_6,
 int VAR_7,
 attrlist_cursor_kern_t *VAR_8)
{
 xfs_attr_list_context_t VAR_9;
 struct attrlist *VAR_10;
 int VAR_11;




 if (VAR_8->pad1 || VAR_8->pad2)
  return(FUNC_1(VAR_2));
 if ((VAR_8->initted == 0) &&
     (VAR_8->hashval || VAR_8->blkno || VAR_8->offset))
  return FUNC_1(VAR_2);




 if (((long)VAR_5) & (sizeof(int)-1))
  return FUNC_1(VAR_1);
 if (VAR_7 & VAR_0)
  VAR_6 = 0;




 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.dp = VAR_4;
 VAR_9.cursor = VAR_8;
 VAR_9.resynch = 1;
 VAR_9.flags = VAR_7;
 VAR_9.alist = VAR_5;
 VAR_9.bufsize = (VAR_6 & ~(sizeof(int)-1));
 VAR_9.firstu = VAR_9.bufsize;
 VAR_9.put_listent = VAR_3;

 VAR_10 = (struct attrlist *)VAR_9.alist;
 VAR_10->al_count = 0;
 VAR_10->al_more = 0;
 VAR_10->al_offset[0] = VAR_9.bufsize;

 VAR_11 = FUNC_3(&VAR_9);
 FUNC_0(VAR_11 >= 0);
 return VAR_11;
}
