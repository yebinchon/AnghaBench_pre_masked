
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int off_t ;
struct TYPE_3__ {int os_meta_dnode; } ;
typedef TYPE_1__ objset_phys_t ;
typedef int dnode_phys_t ;


 int FUNC_0 (int const*,int *,int,int *,int) ;

__attribute__((used)) static int
FUNC_1(const spa_t *VAR_0, const objset_phys_t *VAR_1, uint64_t VAR_2, dnode_phys_t *VAR_3)
{
 off_t VAR_4;

 VAR_4 = VAR_2 * sizeof(dnode_phys_t);
 return FUNC_0(VAR_0, &VAR_1->os_meta_dnode, VAR_4,
  VAR_3, sizeof(dnode_phys_t));
}
