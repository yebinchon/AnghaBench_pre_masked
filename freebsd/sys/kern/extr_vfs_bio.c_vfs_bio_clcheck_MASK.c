
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_bufobj; } ;
struct buf {int b_flags; int b_bufsize; scalar_t__ b_blkno; scalar_t__ b_lblkno; } ;
typedef scalar_t__ daddr_t ;


 scalar_t__ FUNC_0 (struct buf*,int,int *) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct buf* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_5, int VAR_6, daddr_t VAR_7, daddr_t VAR_8)
{
 struct buf *VAR_9;
 int VAR_10;

 VAR_10 = 0;


 if ((VAR_9 = FUNC_2(&VAR_5->v_bufobj, VAR_7)) == ((void*)0))
  return (0);


 if (FUNC_0(VAR_9, VAR_3 | VAR_4, ((void*)0)) != 0)
  return (0);


 if ((VAR_9->b_flags & (VAR_1 | VAR_0 | VAR_2)) !=
     (VAR_1 | VAR_0))
  goto done;

 if (VAR_9->b_bufsize != VAR_6)
  goto done;





 if ((VAR_9->b_blkno != VAR_9->b_lblkno) && (VAR_9->b_blkno == VAR_8))
  VAR_10 = 1;
done:
 FUNC_1(VAR_9);
 return (VAR_10);
}
