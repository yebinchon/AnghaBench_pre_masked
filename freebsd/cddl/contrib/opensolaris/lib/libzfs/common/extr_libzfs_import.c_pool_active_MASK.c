
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char const*,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_4(libzfs_handle_t *VAR_2, const char *VAR_3, uint64_t VAR_4,
    boolean_t *VAR_5)
{
 zpool_handle_t *VAR_6;
 uint64_t VAR_7;

 if (FUNC_3(VAR_2, VAR_3, &VAR_6) != 0)
  return (-1);

 if (VAR_6 == ((void*)0)) {
  *VAR_5 = VAR_0;
  return (0);
 }

 FUNC_1(FUNC_0(VAR_6->zpool_config, VAR_1,
     &VAR_7) == 0);

 FUNC_2(VAR_6);

 *VAR_5 = (VAR_7 == VAR_4);
 return (0);
}
