
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_10__ {int change_set; } ;
struct TYPE_9__ {TYPE_7__* prop_rep; TYPE_3__ noderev_id; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef TYPE_3__ svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
struct TYPE_8__ {int number; int change_set; } ;
struct TYPE_11__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int ,int *) ;
 TYPE_7__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int *,TYPE_3__ const*,int *,int *) ;
 int FUNC_6 (int *,TYPE_2__*,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,char const*,int,int ,int *) ;
 int * FUNC_10 (int *,int ,int *) ;

svn_error_t *
FUNC_11(svn_fs_t *VAR_7,
                       svn_fs_x__noderev_t *VAR_8,
                       apr_hash_t *VAR_9,
                       apr_pool_t *VAR_10)
{
  const svn_fs_x__id_t *VAR_11 = &VAR_8->noderev_id;
  const char *VAR_12 = FUNC_5(VAR_7, VAR_11, VAR_10,
                                                       VAR_10);
  apr_file_t *VAR_13;
  svn_stream_t *VAR_14;


  FUNC_0(FUNC_9(&VAR_13, VAR_12,
                           VAR_4 | VAR_1 | VAR_3
                           | VAR_0, VAR_2, VAR_10));
  VAR_14 = FUNC_10(VAR_13, VAR_6, VAR_10);
  FUNC_0(FUNC_7(VAR_14, VAR_9, VAR_10));
  FUNC_0(FUNC_8(VAR_13, VAR_10));


  if (!VAR_8->prop_rep
      || FUNC_4(VAR_8->prop_rep->id.change_set))
    {
      svn_fs_x__txn_id_t VAR_15
        = FUNC_3(VAR_8->noderev_id.change_set);
      VAR_8->prop_rep = FUNC_2(VAR_10,
                                      sizeof(*VAR_8->prop_rep));
      VAR_8->prop_rep->id.change_set = VAR_11->change_set;
      FUNC_0(FUNC_1(&VAR_8->prop_rep->id.number, VAR_7,
                                  VAR_15, VAR_10));
      FUNC_0(FUNC_6(VAR_7, VAR_8, VAR_10));
    }

  return VAR_5;
}
