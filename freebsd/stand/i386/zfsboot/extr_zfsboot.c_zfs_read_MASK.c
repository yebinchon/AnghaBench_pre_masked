
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zp_size; } ;
typedef TYPE_1__ znode_phys_t ;
typedef int spa_t ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {scalar_t__ dn_bonus; } ;
typedef TYPE_2__ dnode_phys_t ;


 int FUNC_0 (int *,TYPE_2__ const*,scalar_t__,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(spa_t *VAR_0, const dnode_phys_t *VAR_1, off_t *VAR_2, void *VAR_3, size_t VAR_4)
{
 const znode_phys_t *VAR_5 = (const znode_phys_t *) VAR_1->dn_bonus;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_4;
 if (*VAR_2 + VAR_6 > VAR_5->zp_size)
  VAR_6 = VAR_5->zp_size - *VAR_2;

 VAR_7 = FUNC_0(VAR_0, VAR_1, *VAR_2, VAR_3, VAR_6);
 if (VAR_7)
  return (-1);
 *VAR_2 += VAR_6;

 return (VAR_6);
}
