
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const**,int ,int const*,int *,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc__db_wcroot_t *VAR_1,
                                const svn_checksum_t *VAR_2,
                                apr_pool_t *VAR_3)
{
  const char *VAR_4;

  FUNC_0(FUNC_2(&VAR_4, VAR_1->abspath,
                             VAR_2, VAR_3, VAR_3));



  FUNC_1(
    FUNC_3(
      VAR_1->sdb, VAR_1, VAR_2, VAR_4, VAR_3),
    VAR_1->sdb);

  return VAR_0;
}
