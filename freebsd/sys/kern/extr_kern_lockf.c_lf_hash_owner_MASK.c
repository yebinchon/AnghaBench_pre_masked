
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode {int dummy; } ;
struct flock {int l_sysid; int l_pid; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(caddr_t VAR_3, struct vnode *VAR_4, struct flock *VAR_5, int VAR_6)
{
 uint32_t VAR_7;

 if (VAR_6 & VAR_1) {
  VAR_7 = FUNC_0(0, VAR_5->l_pid);
  VAR_7 = FUNC_0(VAR_7, VAR_5->l_sysid);
 } else if (VAR_6 & VAR_0) {
  VAR_7 = ((uintptr_t) VAR_3) >> 7;
 } else {
  VAR_7 = ((uintptr_t) VAR_4) >> 7;
 }

 return (VAR_7 % VAR_2);
}
