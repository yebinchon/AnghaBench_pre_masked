
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
typedef int const off_t ;
typedef scalar_t__ daddr_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int const*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_0, daddr_t VAR_1)
{
 off_t VAR_2;
 int VAR_3, VAR_4;
 const int VAR_5 = FUNC_1(VAR_0);

 VAR_4 = FUNC_2(VAR_0, &VAR_2, ((void*)0), ((void*)0));
 FUNC_0(VAR_4 == 0, ("vfs_bio_getpages can't handle errors here"));
 if (VAR_4)
  return VAR_5;

 if ((off_t)VAR_1 * VAR_5 >= VAR_2) {
  VAR_3 = 0;
 } else if ((off_t)(VAR_1 + 1) * VAR_5 > VAR_2) {
  VAR_3 = VAR_2 - (off_t)VAR_1 *VAR_5;
 } else {
  VAR_3 = VAR_5;
 }
 return (VAR_3);
}
