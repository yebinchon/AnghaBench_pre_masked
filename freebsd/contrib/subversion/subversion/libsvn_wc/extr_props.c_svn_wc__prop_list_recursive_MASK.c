
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int (* svn_wc__proplist_receiver_t ) (void*,char const*,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct propname_filter_baton_t {char const* propname; void* receiver_baton; int (* receiver_func ) (void*,char const*,int *,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (void*,char const*,int *,int *)) ;
 int FUNC_2 () ;
 int * VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,char const*,int *,int *) ;




 int FUNC_5 (int **,TYPE_2__ const*,int *) ;
 int FUNC_6 (int **,int ,char const*,int *,int *) ;
 int FUNC_7 (int **,int ,char const*,int *,int *) ;
 int FUNC_8 (int ,char const*,int,int ,TYPE_2__ const*,int (*) (void*,char const*,int *,int *),void*,int ,void*,int *) ;
 int FUNC_9 (int ,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc_context_t *VAR_1,
                            const char *VAR_2,
                            const char *VAR_3,
                            svn_depth_t VAR_4,
                            svn_boolean_t VAR_5,
                            const apr_array_header_t *VAR_6,
                            svn_wc__proplist_receiver_t VAR_7,
                            void *VAR_8,
                            svn_cancel_func_t VAR_9,
                            void *VAR_10,
                            apr_pool_t *VAR_11)
{
  svn_wc__proplist_receiver_t VAR_12 = VAR_7;
  void *VAR_13 = VAR_8;
  struct propname_filter_baton_t VAR_14;

  VAR_14.receiver_func = VAR_7;
  VAR_14.receiver_baton = VAR_8;
  VAR_14.propname = VAR_3;

  FUNC_1(VAR_7);

  if (VAR_3)
    {
      VAR_13 = &VAR_14;
      VAR_12 = FUNC_4;
    }

  switch (VAR_4)
    {
    case 131:
      {
        apr_hash_t *VAR_15;
        apr_hash_t *VAR_16 = ((void*)0);

        if (VAR_6 && VAR_6->nelts)
          FUNC_0(FUNC_5(&VAR_16,
                                             VAR_6, VAR_11));

        if (!FUNC_9(VAR_1->db, VAR_2,
                                               VAR_16, VAR_11))
          break;

        if (VAR_5)
          FUNC_0(FUNC_6(&VAR_15, VAR_1->db,
                                                 VAR_2,
                                                 VAR_11, VAR_11));
        else
          FUNC_0(FUNC_7(&VAR_15, VAR_1->db, VAR_2,
                                        VAR_11, VAR_11));

        if (VAR_15 && FUNC_3(VAR_15) > 0)
          FUNC_0(VAR_12(VAR_13, VAR_2, VAR_15, VAR_11));
      }
      break;
    case 130:
    case 129:
    case 128:
      {
        FUNC_0(FUNC_8(VAR_1->db, VAR_2,
                                                VAR_4, VAR_5,
                                                VAR_6, VAR_12, VAR_13,
                                                VAR_9, VAR_10,
                                                VAR_11));
      }
      break;
    default:
      FUNC_2();
    }

  return VAR_0;
}
