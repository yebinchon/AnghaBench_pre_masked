
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_6__ {scalar_t__ cleanupfd; int * zhp; } ;
typedef TYPE_1__ differ_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_3, const char *VAR_4,
    const char *VAR_5, differ_info_t *VAR_6)
{
 VAR_6->zhp = VAR_3;

 VAR_6->cleanupfd = FUNC_4(VAR_2, VAR_1|VAR_0);
 FUNC_0(VAR_6->cleanupfd >= 0);

 if (FUNC_3(VAR_6, VAR_4, VAR_5) != 0)
  return (-1);

 if (FUNC_2(VAR_6) != 0)
  return (-1);

 if (FUNC_1(VAR_6) != 0)
  return (-1);

 return (0);
}
