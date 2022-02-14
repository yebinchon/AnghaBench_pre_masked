
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_9__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_10__ {scalar_t__ dn_type; scalar_t__ dn_bonustype; int dn_bonuslen; } ;
typedef TYPE_2__ dnode_phys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*,int *,size_t,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(spa_t *VAR_4, uint64_t VAR_5, unsigned char **VAR_6)
{
 dnode_phys_t VAR_7;
 size_t VAR_8;
 int VAR_9;
 unsigned char *VAR_10;

 *VAR_6 = ((void*)0);
 if ((VAR_9 = FUNC_4(VAR_4, &VAR_4->spa_mos, VAR_5, &VAR_7)) != 0)
  return (VAR_9);
 if (VAR_7.dn_type != VAR_0 &&
     VAR_7.dn_bonustype != VAR_1) {
  return (VAR_2);
 }

 if (VAR_7.dn_bonuslen != sizeof (uint64_t))
  return (VAR_2);

 VAR_8 = *(uint64_t *)FUNC_0(&VAR_7);
 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10 == ((void*)0))
  return (VAR_3);

 VAR_9 = FUNC_1(VAR_4, &VAR_7, 0, VAR_10, VAR_8);
 if (VAR_9 != 0) {
  FUNC_2(VAR_10);
  VAR_10 = ((void*)0);
  return (VAR_9);
 }
 *VAR_6 = VAR_10;
 return (VAR_9);
}
