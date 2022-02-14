
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int id; int copyfrom_rev; int * copyfrom_path; int predecessor_count; int predecessor_id; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_1__**,int *,int *,int *,int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int const*,int const*,int const*,int *) ;
 int * FUNC_8 (int *,int ,TYPE_1__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_t *VAR_3,
                                const svn_fs_fs__id_part_t *VAR_4,
                                svn_fs_id_t *VAR_5,
                                apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;
  const svn_fs_fs__id_part_t *VAR_8, *VAR_9;

  FUNC_0(FUNC_3(&VAR_7, VAR_3, VAR_5, VAR_6, VAR_6));

  if (FUNC_5(VAR_7->id))
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Copying from transactions not allowed"));

  VAR_7->predecessor_id = VAR_7->id;
  VAR_7->predecessor_count++;
  VAR_7->copyfrom_path = ((void*)0);
  VAR_7->copyfrom_rev = VAR_1;



  VAR_8 = FUNC_6(VAR_7->id);
  VAR_9 = FUNC_4(VAR_7->id);
  VAR_7->id = FUNC_7(VAR_8, VAR_9, VAR_4, VAR_6);

  return FUNC_8(VAR_3, VAR_7->id, VAR_7, VAR_2, VAR_6);
}
