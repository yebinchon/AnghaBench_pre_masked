
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_6__ {int dn_datablkszsec; } ;
typedef TYPE_1__ dnode_phys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,TYPE_1__ const*,int ,scalar_t__,size_t) ;
 int FUNC_1 (int const*,TYPE_1__ const*,int ) ;
 int FUNC_2 (TYPE_1__ const*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(const spa_t *VAR_4, const dnode_phys_t *VAR_5)
{
 uint64_t VAR_6;
 size_t VAR_7 = VAR_5->dn_datablkszsec * 512;

 if (FUNC_0(VAR_4, VAR_5, 0, VAR_2, VAR_7))
  return (VAR_0);

 VAR_6 = *(uint64_t *) VAR_2;
 if (VAR_6 == VAR_1)
  return FUNC_2(VAR_5, VAR_3);
 else
  return FUNC_1(VAR_4, VAR_5, VAR_3);
}
