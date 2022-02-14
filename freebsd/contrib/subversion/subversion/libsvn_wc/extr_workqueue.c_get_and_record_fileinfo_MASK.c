
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int result_pool; scalar_t__ record_map; int used; } ;
typedef TYPE_1__ work_item_baton_t ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (scalar_t__,int ,TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__ const**,char const*,int ,int ,int ,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_5(work_item_baton_t *VAR_4,
                        const char *VAR_5,
                        svn_boolean_t VAR_6,
                        apr_pool_t *VAR_7)
{
  const svn_io_dirent2_t *VAR_8;

  FUNC_0(FUNC_4(&VAR_8, VAR_5, VAR_0, VAR_6,
                              VAR_4->result_pool, VAR_7));

  if (VAR_8->kind != VAR_3)
    return VAR_1;

  VAR_4->used = VAR_2;

  if (! VAR_4->record_map)
    VAR_4->record_map = FUNC_1(VAR_4->result_pool);

  FUNC_3(VAR_4->record_map, FUNC_2(VAR_4->result_pool, VAR_5),
                VAR_8);

  return VAR_1;
}
