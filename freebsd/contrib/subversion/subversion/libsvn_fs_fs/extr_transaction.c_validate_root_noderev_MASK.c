
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int predecessor_count; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int *,int ,int,scalar_t__,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__**,int *,int const*,int *,int *) ;
 int FUNC_5 (int const**,int *,char*,int *) ;
 int FUNC_6 (int **,int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_2,
                      node_revision_t *VAR_3,
                      svn_revnum_t VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_revnum_t VAR_6 = VAR_4-1;
  int VAR_7;

  FUNC_1(VAR_4 > 0);


  {
    svn_fs_root_t *VAR_8;
    const svn_fs_id_t *VAR_9;
    node_revision_t *VAR_10;


    FUNC_0(FUNC_6(&VAR_8, VAR_2, VAR_6, VAR_5));
    FUNC_0(FUNC_5(&VAR_9, VAR_8, "/", VAR_5));
    FUNC_0(FUNC_4(&VAR_10, VAR_2, VAR_9,
                                         VAR_5, VAR_5));
    VAR_7 = VAR_10->predecessor_count;
  }
  if ( (VAR_3->predecessor_count - VAR_7)
      != (VAR_4 - VAR_6))
    {
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_2("predecessor count for "
                                 "the root node-revision is wrong: "
                                 "found (%d+%ld != %d), committing r%ld"),
                                 VAR_7,
                                 VAR_4 - VAR_6,
                                 VAR_3->predecessor_count,
                                 VAR_4);
    }

  return VAR_1;
}
