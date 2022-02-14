
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ z_unmounted; int z_teardown_lock; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,TYPE_1__**) ;
 int FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (char const*,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, void *VAR_4, zfsvfs_t **VAR_5, boolean_t VAR_6)
{
 int VAR_7 = 0;

 if (FUNC_2(VAR_3, VAR_5) != 0)
  VAR_7 = FUNC_5(VAR_3, VAR_5);
 if (VAR_7 == 0) {
  FUNC_3(&(*VAR_5)->z_teardown_lock, (VAR_6) ? VAR_2 :
      VAR_1, VAR_4);
  FUNC_0(!(*VAR_5)->z_unmounted);

 }
 return (VAR_7);
}
