
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int path_tracker_t ;
struct TYPE_3__ {int exists; int copyfrom_rev; int copyfrom_path; } ;
typedef TYPE_1__ path_tracker_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;

__attribute__((used)) static void
FUNC_2(path_tracker_t *VAR_2,
                 const char *VAR_3)
{
  path_tracker_entry_t *VAR_4 = FUNC_1(VAR_2, VAR_3);

  FUNC_0(VAR_4->copyfrom_path);
  VAR_4->copyfrom_rev = VAR_0;
  VAR_4->exists = VAR_1;
}
