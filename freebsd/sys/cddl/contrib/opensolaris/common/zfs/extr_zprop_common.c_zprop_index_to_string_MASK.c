
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pi_name; scalar_t__ pi_value; } ;
typedef TYPE_1__ zprop_index_t ;
struct TYPE_5__ {TYPE_1__* pd_table; } ;
typedef TYPE_2__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

int
FUNC_3(int VAR_2, uint64_t VAR_3, const char **VAR_4,
    zfs_type_t VAR_5)
{
 zprop_desc_t *VAR_6;
 const zprop_index_t *VAR_7;
 int VAR_8;

 if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
  return (-1);

 FUNC_0(VAR_2 < FUNC_1(VAR_5));
 VAR_6 = FUNC_2(VAR_5);
 if ((VAR_7 = VAR_6[VAR_2].pd_table) == ((void*)0))
  return (-1);

 for (VAR_8 = 0; VAR_7[VAR_8].pi_name != ((void*)0); VAR_8++) {
  if (VAR_7[VAR_8].pi_value == VAR_3) {
   *VAR_4 = VAR_7[VAR_8].pi_name;
   return (0);
  }
 }

 return (-1);
}
