
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_version_t ;
struct TYPE_4__ {char const* mime_type; int merged_file; int their_abspath; int base_abspath; int my_abspath; int const* src_right_version; int const* src_left_version; int operation; int is_binary; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int *,int *,int *,char const*,int const*,int *,int *) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc_conflict_description2_t **VAR_2,
                        svn_wc__db_t *VAR_3,
                        const char *VAR_4,
                        const svn_skel_t *VAR_5,
                        const char *VAR_6,
                        svn_wc_operation_t VAR_7,
                        const svn_wc_conflict_version_t *VAR_8,
                        const svn_wc_conflict_version_t *VAR_9,
                        apr_pool_t *VAR_10,
                        apr_pool_t *VAR_11)
{
  *VAR_2 = FUNC_4(VAR_4, VAR_10);
  (*VAR_2)->mime_type = VAR_6;
  (*VAR_2)->is_binary = VAR_6 ? FUNC_2(VAR_6) : VAR_0;
  (*VAR_2)->operation = VAR_7;
  (*VAR_2)->src_left_version = VAR_8;
  (*VAR_2)->src_right_version = VAR_9;

  FUNC_0(FUNC_3(&(*VAR_2)->my_abspath,
                                              &(*VAR_2)->base_abspath,
                                              &(*VAR_2)->their_abspath,
                                              VAR_3, VAR_4,
                                              VAR_5,
                                              VAR_10, VAR_11));
  (*VAR_2)->merged_file = FUNC_1(VAR_10, VAR_4);

  return VAR_1;
}
