
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __posix_spawnattr {int dummy; } ;
typedef int * posix_spawnattr_t ;


 int * FUNC_0 (int,int) ;
 int VAR_0 ;

int
FUNC_1(posix_spawnattr_t *VAR_1)
{
 posix_spawnattr_t VAR_2;

 VAR_2 = FUNC_0(1, sizeof(struct __posix_spawnattr));
 if (VAR_2 == ((void*)0))
  return (VAR_0);


 *VAR_1 = VAR_2;
 return (0);
}
