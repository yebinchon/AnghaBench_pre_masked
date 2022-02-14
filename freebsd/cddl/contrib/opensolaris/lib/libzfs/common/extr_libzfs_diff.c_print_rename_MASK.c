
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zs_mode; scalar_t__* zs_ctime; } ;
typedef TYPE_1__ zfs_stat_t ;
typedef int longlong_t ;
struct TYPE_7__ {scalar_t__ scripted; scalar_t__ classify; scalar_t__ timestamped; } ;
typedef TYPE_2__ differ_info_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_2__*,char const*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_1, differ_info_t *VAR_2, const char *VAR_3, const char *VAR_4,
    zfs_stat_t *VAR_5)
{
 if (VAR_2->timestamped)
  (void) FUNC_0(VAR_1, "%10lld.%09lld\t",
      (longlong_t)VAR_5->zs_ctime[0],
      (longlong_t)VAR_5->zs_ctime[1]);
 (void) FUNC_0(VAR_1, "%c\t", VAR_0);
 if (VAR_2->classify) {
  FUNC_2(VAR_1, VAR_5->zs_mode);
  (void) FUNC_0(VAR_1, "\t");
 }
 FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_2->scripted)
  (void) FUNC_0(VAR_1, "\t");
 else
  (void) FUNC_0(VAR_1, " -> ");
 FUNC_1(VAR_1, VAR_2, VAR_4);
 (void) FUNC_0(VAR_1, "\n");
}
