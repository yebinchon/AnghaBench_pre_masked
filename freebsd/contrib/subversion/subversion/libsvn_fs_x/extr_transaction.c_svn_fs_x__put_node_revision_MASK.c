
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int change_set; } ;
struct TYPE_8__ {TYPE_2__ noderev_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef TYPE_2__ svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_10__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 TYPE_6__* FUNC_3 (TYPE_2__ const*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_2__ const*,int *,int *) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;

svn_error_t *
FUNC_10(svn_fs_t *VAR_8,
                            svn_fs_x__noderev_t *VAR_9,
                            apr_pool_t *VAR_10)
{
  apr_file_t *VAR_11;
  const svn_fs_x__id_t *VAR_12 = &VAR_9->noderev_id;

  if (! FUNC_4(VAR_12->change_set))
    return FUNC_2(VAR_5, ((void*)0),
                             FUNC_1("Attempted to write to non-transaction '%s'"),
                             FUNC_3(VAR_12, VAR_10)->data);

  FUNC_0(FUNC_8(&VAR_11,
                           FUNC_5(VAR_8, VAR_12, VAR_10,
                                                       VAR_10),
                           VAR_4 | VAR_1 | VAR_3
                           | VAR_0, VAR_2, VAR_10));

  FUNC_0(FUNC_6(FUNC_9(VAR_11, VAR_7,
                                                           VAR_10),
                                  VAR_9, VAR_10));

  FUNC_0(FUNC_7(VAR_11, VAR_10));

  return VAR_6;
}
