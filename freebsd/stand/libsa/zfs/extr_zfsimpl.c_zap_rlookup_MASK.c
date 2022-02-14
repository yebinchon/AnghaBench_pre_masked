
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_6__ {int dn_datablkszsec; } ;
typedef TYPE_1__ dnode_phys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,TYPE_1__ const*,int ,scalar_t__,size_t) ;
 int FUNC_1 (int const*,TYPE_1__ const*,char*,scalar_t__) ;
 int FUNC_2 (int const*,TYPE_1__ const*,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3(const spa_t *VAR_2, const dnode_phys_t *VAR_3, char *VAR_4, uint64_t VAR_5)
{
 int VAR_6;
 uint64_t VAR_7;
 size_t VAR_8 = VAR_3->dn_datablkszsec * 512;

 VAR_6 = FUNC_0(VAR_2, VAR_3, 0, VAR_1, VAR_8);
 if (VAR_6)
  return (VAR_6);

 VAR_7 = *(uint64_t *) VAR_1;
 if (VAR_7 == VAR_0)
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
