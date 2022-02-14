
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_10__ {int change_set; } ;
struct TYPE_8__ {scalar_t__ number; } ;
struct TYPE_7__ {scalar_t__ number; } ;
struct TYPE_9__ {TYPE_5__ noderev_id; int copyfrom_rev; int * copyfrom_path; int predecessor_count; TYPE_5__ predecessor_id; TYPE_2__ copy_id; TYPE_1__ node_id; } ;
typedef TYPE_3__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_3__**,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_t *VAR_2,
                                svn_fs_x__txn_id_t VAR_3,
                                svn_fs_x__id_t *VAR_4,
                                apr_pool_t *VAR_5)
{
  svn_fs_x__noderev_t *VAR_6;
  FUNC_0(FUNC_4(&VAR_6, VAR_2, VAR_4, VAR_5,
                                      VAR_5));


  FUNC_1( VAR_6->node_id.number == 0
                 && VAR_6->copy_id.number == 0);

  if (FUNC_6(VAR_6->noderev_id.change_set))
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_2("Copying from transactions not allowed"));

  VAR_6->predecessor_id = VAR_6->noderev_id;
  VAR_6->predecessor_count++;
  VAR_6->copyfrom_path = ((void*)0);
  VAR_6->copyfrom_rev = VAR_1;


  FUNC_5(&VAR_6->noderev_id, VAR_3);

  return FUNC_7(VAR_2, VAR_6, VAR_5);
}
