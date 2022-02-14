
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int revision; void* prop_state; void* content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
struct TYPE_13__ {int abspath; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char const*,int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int ,int ,int (*) (void*,TYPE_1__*,int *),void*,int *) ;
 int FUNC_5 (TYPE_3__**,char const**,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int *,TYPE_3__*,char const*,int ,void*,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_4,
                            const char *VAR_5,
                            svn_cancel_func_t VAR_6,
                            void *VAR_7,
                            svn_wc_notify_func2_t VAR_8,
                            void *VAR_9,
                            apr_pool_t *VAR_10)
{
  svn_wc__db_wcroot_t *VAR_11;
  svn_revnum_t VAR_12;
  const char *VAR_13;

  FUNC_0(FUNC_5(&VAR_11, &VAR_13,
                                                VAR_4, VAR_5,
                                                VAR_10, VAR_10));
  FUNC_2(VAR_11);

  FUNC_1(FUNC_7(&VAR_12, VAR_4, VAR_11,
                                       VAR_13,
                                       VAR_6, VAR_7,
                                       VAR_10),
                      VAR_11);


  FUNC_0(FUNC_4(VAR_11, VAR_12, VAR_12,
                                             VAR_8, VAR_9,
                                             VAR_10));
  if (VAR_8)
    {
      svn_wc_notify_t *VAR_14;

      VAR_14 = FUNC_6(FUNC_3(VAR_11->abspath,
                                                    VAR_13,
                                                    VAR_10),
                                    VAR_3,
                                    VAR_10);
      VAR_14->kind = VAR_1;
      VAR_14->content_state = VAR_2;
      VAR_14->prop_state = VAR_2;
      VAR_14->revision = VAR_12;
      VAR_8(VAR_9, VAR_14, VAR_10);
    }


  return VAR_0;
}
