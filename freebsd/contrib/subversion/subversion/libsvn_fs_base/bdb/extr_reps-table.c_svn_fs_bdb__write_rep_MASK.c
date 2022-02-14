
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_10__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int representation_t ;
struct TYPE_11__ {TYPE_7__* representations; int format; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* put ) (TYPE_7__*,int ,int ,int ,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (int **,int const*,int ,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_0,
                      const char *VAR_1,
                      const representation_t *VAR_2,
                      trail_t *VAR_3,
                      apr_pool_t *VAR_4)
{
  base_fs_data_t *VAR_5 = VAR_0->fsap_data;
  DBT VAR_6, VAR_7;
  svn_skel_t *VAR_8;


  FUNC_2(FUNC_7(&VAR_8, VAR_2,
                                                   VAR_5->format, VAR_4));


  FUNC_6(VAR_3, "representations", "put");
  return FUNC_0(VAR_0, FUNC_1("storing representation"),
                  VAR_5->representations->put
                  (VAR_5->representations, VAR_3->db_txn,
                   FUNC_5(&VAR_6, VAR_1),
                   FUNC_4(&VAR_7, VAR_8, VAR_4),
                   0));
}
