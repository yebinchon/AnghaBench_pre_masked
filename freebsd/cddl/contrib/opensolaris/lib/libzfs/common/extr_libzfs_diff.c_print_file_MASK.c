
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zs_mode; scalar_t__* zs_ctime; } ;
typedef TYPE_1__ zfs_stat_t ;
typedef int longlong_t ;
struct TYPE_7__ {scalar_t__ classify; scalar_t__ timestamped; } ;
typedef TYPE_2__ differ_info_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_2__*,char const*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_0, differ_info_t *VAR_1, char VAR_2, const char *VAR_3,
    zfs_stat_t *VAR_4)
{
 if (VAR_1->timestamped)
  (void) FUNC_0(VAR_0, "%10lld.%09lld\t",
      (longlong_t)VAR_4->zs_ctime[0],
      (longlong_t)VAR_4->zs_ctime[1]);
 (void) FUNC_0(VAR_0, "%c\t", VAR_2);
 if (VAR_1->classify) {
  FUNC_2(VAR_0, VAR_4->zs_mode);
  (void) FUNC_0(VAR_0, "\t");
 }
 FUNC_1(VAR_0, VAR_1, VAR_3);
 (void) FUNC_0(VAR_0, "\n");
}
