
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_dirent {scalar_t__ td_cookie; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline off_t
FUNC_1(struct tmpfs_dirent *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_2->td_cookie >= VAR_1);

 return (VAR_2->td_cookie);
}
