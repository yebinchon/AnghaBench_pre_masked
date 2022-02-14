
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int (* svn_wc_status_func4_t ) (void*,char const*,TYPE_1__*,int *) ;
struct TYPE_8__ {int repos_node_status; } ;
struct TYPE_9__ {TYPE_1__ s; scalar_t__ has_descendants; } ;
typedef TYPE_2__ svn_wc__internal_status_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct status_baton {void* real_status_baton; int (* real_status_func ) (void*,char const*,TYPE_1__*,int *) ;} ;
struct edit_baton {void* status_baton; int (* status_func ) (void*,char const*,TYPE_1__*,int *) ;int get_all; int no_ignore; int cancel_baton; int cancel_func; int wb; int * ignores; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int ,char const*,char const*,char const*,int *,int *,int const*,int ,int ,int ,int (*) (void*,char const*,TYPE_1__*,int *),void*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (void*,char const*,TYPE_1__*,int *) ;
 int FUNC_8 (void*,char const*,TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_12(struct edit_baton *VAR_5,
              const char *VAR_6,
              const char *VAR_7,
              const char *VAR_8,
              apr_hash_t *VAR_9,
              svn_boolean_t VAR_10,
              svn_depth_t VAR_11,
              apr_pool_t *VAR_12)
{
  const apr_array_header_t *VAR_13 = VAR_5->ignores;
  apr_hash_index_t *VAR_14;
  apr_pool_t *VAR_15 = FUNC_10(VAR_12);
  svn_wc_status_func4_t VAR_16 = VAR_5->status_func;
  void *VAR_17 = VAR_5->status_baton;
  struct status_baton VAR_18;

  if (VAR_10)
    {
      VAR_18.real_status_func = VAR_5->status_func;
      VAR_18.real_status_baton = VAR_5->status_baton;
      VAR_16 = FUNC_7;
      VAR_17 = &VAR_18;
    }


  for (VAR_14 = FUNC_1(VAR_12, VAR_9); VAR_14; VAR_14 = FUNC_2(VAR_14))
    {
      const char *VAR_19 = FUNC_3(VAR_14);
      svn_wc__internal_status_t *VAR_20 = FUNC_4(VAR_14);


      FUNC_9(VAR_15);



      if (VAR_20->has_descendants
          && (VAR_11 == VAR_3
              || VAR_11 == VAR_2))
        {
          FUNC_0(FUNC_5(&VAR_5->wb,
                                 VAR_19, VAR_1,
                                 VAR_6, VAR_7,
                                 VAR_8,
                                 ((void*)0),
                                 ((void*)0) ,
                                 VAR_13, VAR_11, VAR_5->get_all, VAR_5->no_ignore,
                                 VAR_16, VAR_17,
                                 VAR_5->cancel_func, VAR_5->cancel_baton,
                                 VAR_15));
        }
      if (VAR_10)
        VAR_20->s.repos_node_status = VAR_4;
      if (FUNC_6(VAR_20, VAR_5->no_ignore, VAR_5->get_all))
        FUNC_0((VAR_5->status_func)(VAR_5->status_baton, VAR_19, &VAR_20->s,
                                  VAR_15));
    }


  FUNC_11(VAR_15);

  return VAR_0;
}
