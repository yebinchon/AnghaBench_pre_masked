
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {scalar_t__ map_data; } ;
typedef TYPE_1__ mnt_map ;
typedef int ALD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*,int *) ;

int
FUNC_3(mnt_map *VAR_1, char *VAR_2, time_t *VAR_3)
{
  ALD *VAR_4 = (ALD *) (VAR_1->map_data);

  if (VAR_4 == ((void*)0)) {
    FUNC_1("LDAP panic: unable to find map data\n");
    return (VAR_0);
  }
  if (FUNC_0(VAR_4)) {
    return (VAR_0);
  }
  if (FUNC_2(VAR_4, VAR_2, VAR_3)) {
    return (VAR_0);
  }
  return (0);
}
