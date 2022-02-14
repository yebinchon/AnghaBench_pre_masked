
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct zfs_stat {int dummy; } ;
struct TYPE_5__ {scalar_t__ zerr; int fromsnap; } ;
typedef TYPE_1__ differ_info_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,char*,int,struct zfs_stat*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,char*,struct zfs_stat*) ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_2, differ_info_t *VAR_3, uint64_t VAR_4, char *VAR_5,
    int VAR_6)
{
 struct zfs_stat VAR_7;

 if (FUNC_0(VAR_3, VAR_3->fromsnap, VAR_4, VAR_5,
     VAR_6, &VAR_7) != 0) {
  return (-1);
 }

 if (VAR_3->zerr == VAR_0) {
  VAR_3->zerr = 0;
  return (0);
 }

 FUNC_1(VAR_2, VAR_3, VAR_1, VAR_5, &VAR_7);
 return (0);
}
