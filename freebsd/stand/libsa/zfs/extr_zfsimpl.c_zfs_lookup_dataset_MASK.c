
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_10__ {int dd_head_dataset_obj; int dd_child_dir_zapobj; } ;
typedef TYPE_2__ dsl_dir_phys_t ;
struct TYPE_11__ {int dn_bonus; } ;
typedef TYPE_3__ dnode_phys_t ;
typedef int dir_obj ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int *,int ,TYPE_3__*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*,TYPE_3__*,char*,int,int,int *) ;

__attribute__((used)) static int
FUNC_6(const spa_t *VAR_4, const char *VAR_5, uint64_t *VAR_6)
{
 char VAR_7[256];
 uint64_t VAR_8, VAR_9;
 dnode_phys_t VAR_10, VAR_11;
 dsl_dir_phys_t *VAR_12;
 const char *VAR_13, *VAR_14;

 if (FUNC_1(VAR_4, &VAR_4->spa_mos, VAR_0, &VAR_11))
  return (VAR_2);
 if (FUNC_5(VAR_4, &VAR_11, VAR_1, sizeof (VAR_8),
     1, &VAR_8))
  return (VAR_2);

 VAR_13 = VAR_5;
 for (;;) {
  if (FUNC_1(VAR_4, &VAR_4->spa_mos, VAR_8, &VAR_11))
   return (VAR_2);
  VAR_12 = (dsl_dir_phys_t *)&VAR_11.dn_bonus;

  while (*VAR_13 == '/')
   VAR_13++;

  if (*VAR_13 == '\0')
   break;

  VAR_14 = FUNC_2(VAR_13, '/');
  if (VAR_14) {
   FUNC_0(VAR_7, VAR_13, VAR_14 - VAR_13);
   VAR_7[VAR_14 - VAR_13] = '\0';
   VAR_13 = VAR_14 + 1;
  } else {
   FUNC_3(VAR_7, VAR_13);
   VAR_13 += FUNC_4(VAR_13);
  }

  VAR_9 = VAR_12->dd_child_dir_zapobj;
  if (FUNC_1(VAR_4, &VAR_4->spa_mos, VAR_9, &VAR_10) != 0)
   return (VAR_2);


  if (FUNC_5(VAR_4, &VAR_10, VAR_7, sizeof (VAR_8),
      1, &VAR_8) != 0)
   return (VAR_3);
 }

 *VAR_6 = VAR_12->dd_head_dataset_obj;
 return (0);
}
