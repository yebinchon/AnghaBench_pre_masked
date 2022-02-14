
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int spa_history; int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_7__ {int sh_phys_max_off; int sh_pool_create_len; int sh_records_lost; int sh_bof; } ;
typedef TYPE_2__ spa_history_phys_t ;
typedef int reclen ;
typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,int,int,char*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(spa_t *VAR_1, spa_history_phys_t *VAR_2)
{
 objset_t *VAR_3 = VAR_1->spa_meta_objset;
 uint64_t VAR_4, VAR_5, VAR_6;
 char VAR_7[sizeof (VAR_5)];
 int VAR_8;

 VAR_6 = FUNC_3(VAR_2->sh_bof, VAR_2);
 VAR_4 = FUNC_1(sizeof (VAR_5), VAR_2->sh_phys_max_off - VAR_6);

 if ((VAR_8 = FUNC_2(VAR_3, VAR_1->spa_history, VAR_6, VAR_4,
     VAR_7, VAR_0)) != 0)
  return (VAR_8);
 if (VAR_4 != sizeof (VAR_5)) {
  if ((VAR_8 = FUNC_2(VAR_3, VAR_1->spa_history,
      VAR_2->sh_pool_create_len, sizeof (VAR_5) - VAR_4,
      VAR_7 + VAR_4, VAR_0)) != 0)
   return (VAR_8);
 }

 VAR_5 = FUNC_0(*((uint64_t *)VAR_7));
 VAR_2->sh_bof += VAR_5 + sizeof (VAR_5);
 VAR_2->sh_records_lost++;
 return (0);
}
