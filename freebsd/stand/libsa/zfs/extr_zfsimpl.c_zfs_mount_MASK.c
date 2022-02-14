
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct zfsmount {scalar_t__ rootobj; int objset; int const* spa; } ;
typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_3(const spa_t *VAR_1, uint64_t VAR_2, struct zfsmount *VAR_3)
{

 VAR_3->spa = VAR_1;




 if (VAR_2 == 0 && FUNC_1(VAR_1, &VAR_2)) {
  FUNC_0("ZFS: can't find root filesystem\n");
  return (VAR_0);
 }

 if (FUNC_2(VAR_1, VAR_2, &VAR_3->objset)) {
  FUNC_0("ZFS: can't open root filesystem\n");
  return (VAR_0);
 }

 VAR_3->rootobj = VAR_2;

 return (0);
}
