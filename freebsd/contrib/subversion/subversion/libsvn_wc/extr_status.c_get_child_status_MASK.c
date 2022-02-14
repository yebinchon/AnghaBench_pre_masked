
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_status_func4_t ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
struct walk_status_baton {int db; int check_working_copy; } ;
struct svn_wc__db_info_t {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const**,char const**,char const**,struct svn_wc__db_info_t const*,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_2 (struct walk_status_baton const*,char const*,char const*,struct svn_wc__db_info_t const*,TYPE_1__ const*,char const*,char const*,char const*,int ,int **,int const*,int ,int ,int ,int ,void*,int (*) (void*),void*,int *,int *) ;
 int VAR_3 ;
 char* FUNC_3 (char const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct svn_wc__db_info_t const**,int ,char const*,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const struct walk_status_baton *VAR_5,
                 const char *VAR_6,
                 const struct svn_wc__db_info_t *VAR_7,
                 const svn_io_dirent2_t *VAR_8,
                 const apr_array_header_t *VAR_9,
                 svn_boolean_t VAR_10,
                 svn_wc_status_func4_t VAR_11,
                 void *VAR_12,
                 svn_cancel_func_t VAR_13,
                 void *VAR_14,
                 apr_pool_t *VAR_15)
{
  const char *VAR_16;
  const char *VAR_17;
  const char *VAR_18;
  const struct svn_wc__db_info_t *VAR_19;
  apr_array_header_t *VAR_20 = ((void*)0);
  const char *VAR_21 = FUNC_3(VAR_6,
                                                  VAR_15);

  if (VAR_13)
    FUNC_0(VAR_13(VAR_14));

  if (VAR_8->kind == VAR_4)
    VAR_8 = ((void*)0);

  FUNC_0(FUNC_4(&VAR_19,
                                      VAR_5->db, VAR_21,
                                      !VAR_5->check_working_copy,
                                      VAR_15, VAR_15));

  FUNC_0(FUNC_1(&VAR_17, &VAR_16,
                                     &VAR_18, VAR_19,
                                     ((void*)0), ((void*)0), ((void*)0),
                                     VAR_5->db, VAR_21,
                                     VAR_15, VAR_15));






  FUNC_0(FUNC_2(VAR_5,
                           VAR_6,
                           VAR_21,
                           VAR_7,
                           VAR_8,
                           VAR_16,
                           VAR_17,
                           VAR_18,
                           VAR_0,
                           &VAR_20,
                           VAR_9,
                           VAR_3,
                           VAR_10,
                           VAR_2,
                           VAR_11,
                           VAR_12,
                           VAR_13,
                           VAR_14,
                           VAR_15,
                           VAR_15));
  return VAR_1;
}
