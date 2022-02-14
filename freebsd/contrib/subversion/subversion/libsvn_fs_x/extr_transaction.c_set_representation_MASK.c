
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_8__ {int change_set; } ;
struct TYPE_6__ {TYPE_3__ noderev_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int rep_write_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int **,int *,TYPE_1__*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_stream_t **VAR_4,
                   svn_fs_t *VAR_5,
                   svn_fs_x__noderev_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  rep_write_baton_t *VAR_8;

  if (! FUNC_5(VAR_6->noderev_id.change_set))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Attempted to write to non-transaction '%s'"),
                             FUNC_4(&VAR_6->noderev_id,
                                                  VAR_7)->data);

  FUNC_0(FUNC_2(&VAR_8, VAR_5, VAR_6, VAR_7));

  *VAR_4 = FUNC_6(VAR_8, VAR_7);
  FUNC_8(*VAR_4, VAR_2);
  FUNC_7(*VAR_4, VAR_3);

  return VAR_1;
}
