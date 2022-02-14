
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
typedef int daddr_t ;


 int FUNC_0 (struct vnode*,long,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_1(struct vnode *VAR_1, long VAR_2, daddr_t VAR_3, int VAR_4,
    int VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_0) {
 case 2:
  if (VAR_3 < VAR_4)
   break;
  VAR_3 -= VAR_4;

 case 1:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 default:

  break;
 }
 return(VAR_6);
}
