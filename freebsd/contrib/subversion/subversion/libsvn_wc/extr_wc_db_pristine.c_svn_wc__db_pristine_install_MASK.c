
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_11__ {int inner_stream; TYPE_1__* wcroot; } ;
typedef TYPE_2__ svn_wc__db_install_data_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const**,int ,TYPE_3__ const*,int *,int *) ;
 int FUNC_4 (int ,int ,char const*,TYPE_3__ const*,TYPE_3__ const*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_5(svn_wc__db_install_data_t *VAR_3,
                            const svn_checksum_t *VAR_4,
                            const svn_checksum_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7 = VAR_3->wcroot;
  const char *VAR_8;

  FUNC_1(VAR_4 != ((void*)0));
  FUNC_1(VAR_4->kind == VAR_2);
  FUNC_1(VAR_5 != ((void*)0));
  FUNC_1(VAR_5->kind == VAR_1);

  FUNC_0(FUNC_3(&VAR_8, VAR_7->abspath,
                             VAR_4,
                             VAR_6, VAR_6));



  FUNC_2(
    FUNC_4(VAR_7->sdb,
                         VAR_3->inner_stream, VAR_8,
                         VAR_4, VAR_5,
                         VAR_6),
    VAR_7->sdb);

  return VAR_0;
}
