
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct rep_write_baton {int dummy; } ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rep_write_baton**,int *,TYPE_1__*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int *) ;
 int * FUNC_6 (struct rep_write_baton*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_stream_t **VAR_4,
                   svn_fs_t *VAR_5,
                   node_revision_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  struct rep_write_baton *VAR_8;

  if (! FUNC_4(VAR_6->id))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Attempted to write to non-transaction '%s'"),
                             FUNC_5(VAR_6->id, VAR_7)->data);

  FUNC_0(FUNC_2(&VAR_8, VAR_5, VAR_6, VAR_7));

  *VAR_4 = FUNC_6(VAR_8, VAR_7);
  FUNC_8(*VAR_4, VAR_2);
  FUNC_7(*VAR_4, VAR_3);

  return VAR_1;
}
