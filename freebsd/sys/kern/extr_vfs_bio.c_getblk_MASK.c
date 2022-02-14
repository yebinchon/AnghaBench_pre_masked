
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct buf {int dummy; } ;
typedef int daddr_t ;


 int FUNC_0 (struct vnode*,int ,int,int,int,int,struct buf**) ;

struct buf *
FUNC_1(struct vnode *VAR_0, daddr_t VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5)
{
 struct buf *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
 if (VAR_7 != 0)
  return (((void*)0));
 return (VAR_6);
}
