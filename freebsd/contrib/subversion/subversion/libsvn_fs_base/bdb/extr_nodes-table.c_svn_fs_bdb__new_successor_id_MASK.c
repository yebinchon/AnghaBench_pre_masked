
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int pool; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_17__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
struct TYPE_18__ {int path; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int const svn_fs_id_t ;
struct TYPE_19__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,TYPE_4__*,int ,int ,int ,int ) ;
 char const* FUNC_4 (int const*) ;
 int const* FUNC_5 (int ,char const*,char const*,int *) ;
 int FUNC_6 (int const*) ;
 TYPE_2__* FUNC_7 (int const*,int *) ;
 TYPE_4__* FUNC_8 (int *,TYPE_3__*,int const*,TYPE_1__*,int ) ;

svn_error_t *
FUNC_9(svn_fs_id_t **VAR_3,
                             svn_fs_t *VAR_4,
                             const svn_fs_id_t *VAR_5,
                             const char *VAR_6,
                             const char *VAR_7,
                             trail_t *VAR_8,
                             apr_pool_t *VAR_9)
{
  svn_fs_id_t *VAR_10;
  svn_error_t *VAR_11;

  FUNC_0(VAR_7);


  VAR_10 = FUNC_5(FUNC_6(VAR_5),
                                  VAR_6 ? VAR_6
                                  : FUNC_4(VAR_5),
                                  VAR_7, VAR_9);


  VAR_11 = FUNC_8(((void*)0), VAR_4, VAR_10, VAR_8, VAR_8->pool);
  if ((! VAR_11) || (VAR_11->apr_err != VAR_1))
    {
      svn_string_t *VAR_12 = FUNC_7(VAR_5, VAR_9);
      svn_string_t *VAR_13 = FUNC_7(VAR_10, VAR_9);
      return FUNC_3
        (VAR_0, VAR_11,
         FUNC_1("Successor id '%s' (for '%s') already exists in filesystem '%s'"),
         VAR_13->data, VAR_12->data, VAR_4->path);
    }



  FUNC_2(VAR_11);


  *VAR_3 = VAR_10;
  return VAR_2;
}
