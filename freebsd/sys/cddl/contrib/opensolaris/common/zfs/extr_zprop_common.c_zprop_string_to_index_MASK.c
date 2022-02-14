
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pi_value; int * pi_name; } ;
typedef TYPE_1__ zprop_index_t ;
struct TYPE_5__ {TYPE_1__* pd_table; } ;
typedef TYPE_2__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;

int
FUNC_4(int VAR_2, const char *VAR_3, uint64_t *VAR_4,
    zfs_type_t VAR_5)
{
 zprop_desc_t *VAR_6;
 const zprop_index_t *VAR_7;
 int VAR_8;

 if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
  return (-1);

 FUNC_0(VAR_2 < FUNC_2(VAR_5));
 VAR_6 = FUNC_3(VAR_5);
 if ((VAR_7 = VAR_6[VAR_2].pd_table) == ((void*)0))
  return (-1);

 for (VAR_8 = 0; VAR_7[VAR_8].pi_name != ((void*)0); VAR_8++) {
  if (FUNC_1(VAR_3, VAR_7[VAR_8].pi_name) == 0) {
   *VAR_4 = VAR_7[VAR_8].pi_value;
   return (0);
  }
 }

 return (-1);
}
