
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ kind; TYPE_4__* data_rep; TYPE_2__* prop_rep; } ;
typedef TYPE_5__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_19__ {int dir_cache; } ;
typedef TYPE_6__ svn_fs_x__data_t ;
struct TYPE_20__ {TYPE_6__* fsap_data; } ;
typedef TYPE_7__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_16__ {int change_set; } ;
struct TYPE_17__ {TYPE_3__ id; } ;
struct TYPE_14__ {int change_set; } ;
struct TYPE_15__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int const*,int *,int *) ;
 int * FUNC_2 (TYPE_5__**,TYPE_7__*,int const*,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*,int const*,int *,int *) ;
 int FUNC_5 (TYPE_7__*,int const*,int *,int *) ;
 int FUNC_6 (TYPE_7__*,int const*,int *,int *) ;
 int * FUNC_7 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_2,
                               const svn_fs_x__id_t *VAR_3,
                               apr_pool_t *VAR_4)
{
  svn_fs_x__noderev_t *VAR_5;
  FUNC_0(FUNC_2(&VAR_5, VAR_2, VAR_3, VAR_4,
                                      VAR_4));


  if (VAR_5->prop_rep
      && FUNC_3(VAR_5->prop_rep->id.change_set))
    FUNC_0(FUNC_7(FUNC_5(VAR_2, VAR_3,
                                                              VAR_4,
                                                              VAR_4),
                                VAR_0, VAR_4));


  if (VAR_5->data_rep
      && FUNC_3(VAR_5->data_rep->id.change_set)
      && VAR_5->kind == VAR_1)
    {
      svn_fs_x__data_t *VAR_6 = VAR_2->fsap_data;
      const svn_fs_x__id_t *VAR_7 = VAR_3;

      FUNC_0(FUNC_7(
                  FUNC_4(VAR_2, VAR_3, VAR_4,
                                                   VAR_4),
                  VAR_0, VAR_4));


      FUNC_0(FUNC_1(VAR_6->dir_cache, VAR_7, ((void*)0), VAR_4));
    }

  return FUNC_7(FUNC_6(VAR_2, VAR_3,
                                                         VAR_4,
                                                         VAR_4),
                             VAR_0, VAR_4);
}
