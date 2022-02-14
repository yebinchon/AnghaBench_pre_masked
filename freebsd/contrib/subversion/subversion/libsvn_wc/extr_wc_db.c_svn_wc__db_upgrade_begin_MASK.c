
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_7__ {int dir_data; int state_pool; } ;
typedef TYPE_2__ svn_wc__db_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int **,int *,int *,char const*,char const*,char const*,int ,int *,int ,int ,int ,int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,int *,int ,int ,int ,int ,int *) ;

svn_error_t *
FUNC_5(svn_sqlite__db_t **VAR_7,
                         apr_int64_t *VAR_8,
                         apr_int64_t *VAR_9,
                         svn_wc__db_t *VAR_10,
                         const char *VAR_11,
                         const char *VAR_12,
                         const char *VAR_13,
                         apr_pool_t *VAR_14)
{
  svn_wc__db_wcroot_t *VAR_15;


  FUNC_0(FUNC_2(VAR_7, VAR_8, VAR_9, VAR_11,
                    VAR_12, VAR_13,
                    VAR_2,
                    ((void*)0), VAR_3, VAR_6,
                    VAR_5 ,
                    0 ,
                    VAR_10->state_pool, VAR_14));

  FUNC_0(FUNC_4(&VAR_15,
                                       FUNC_1(VAR_10->state_pool,
                                                   VAR_11),
                                       *VAR_7, *VAR_9, VAR_1,
                                       VAR_0 ,
                                       VAR_10->state_pool, VAR_14));


  FUNC_3(VAR_10->dir_data, VAR_15->abspath, VAR_15);

  return VAR_4;
}
