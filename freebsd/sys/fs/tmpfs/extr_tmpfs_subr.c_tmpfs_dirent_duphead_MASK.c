
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_dirent {int td_cookie; } ;
typedef int boolean_t ;


 int VAR_0 ;

__attribute__((used)) static __inline boolean_t
FUNC_0(struct tmpfs_dirent *VAR_1)
{
 return ((VAR_1->td_cookie & VAR_0) != 0);
}
