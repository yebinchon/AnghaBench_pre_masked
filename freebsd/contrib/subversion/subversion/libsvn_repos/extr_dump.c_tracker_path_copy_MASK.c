
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int path_tracker_t ;
struct TYPE_3__ {int exists; int copyfrom_rev; int copyfrom_path; } ;
typedef TYPE_1__ path_tracker_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;

__attribute__((used)) static void
FUNC_2(path_tracker_t *VAR_1,
                  const char *VAR_2,
                  const char *VAR_3,
                  svn_revnum_t VAR_4)
{
  path_tracker_entry_t *VAR_5 = FUNC_1(VAR_1, VAR_2);

  FUNC_0(VAR_5->copyfrom_path, VAR_3);
  VAR_5->copyfrom_rev = VAR_4;
  VAR_5->exists = VAR_0;
}
