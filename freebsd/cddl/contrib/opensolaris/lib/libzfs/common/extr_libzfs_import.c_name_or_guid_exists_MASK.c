
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ guid; int * poolname; } ;
typedef TYPE_2__ importargs_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char**) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_2, void *VAR_3)
{
 importargs_t *VAR_4 = VAR_3;
 int VAR_5 = 0;

 if (VAR_4->poolname != ((void*)0)) {
  char *VAR_6;

  FUNC_3(FUNC_0(VAR_2->zpool_config,
      VAR_1, &VAR_6) == 0);
  if (FUNC_2(VAR_6, VAR_4->poolname) == 0)
   VAR_5 = 1;
 } else {
  uint64_t VAR_7;

  FUNC_3(FUNC_1(VAR_2->zpool_config,
      VAR_0, &VAR_7) == 0);
  if (VAR_7 == VAR_4->guid)
   VAR_5 = 1;
 }

 FUNC_4(VAR_2);
 return (VAR_5);
}
