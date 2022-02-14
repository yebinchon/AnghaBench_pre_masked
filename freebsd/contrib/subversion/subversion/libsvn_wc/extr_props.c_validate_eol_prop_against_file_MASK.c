
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* (* svn_wc_canonicalize_svn_prop_get_file_t ) (TYPE_2__ const**,int *,void*,int *) ;
struct TYPE_16__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char const* FUNC_2 (char const*,int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*,int ,char const*,...) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,char*,int ,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_4,
                               svn_wc_canonicalize_svn_prop_get_file_t VAR_5,
                               void *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  svn_error_t *VAR_9;
  const svn_string_t *VAR_10;
  const char *VAR_11
    = FUNC_7(VAR_4) ? VAR_4 : FUNC_2(VAR_4, VAR_7);


  FUNC_0(VAR_5(&VAR_10, ((void*)0), VAR_6, VAR_7));


  if (VAR_10 && FUNC_6(VAR_10->data))
    return FUNC_4
      (VAR_1, ((void*)0),
       FUNC_1("Can't set '%s': "
         "file '%s' has binary mime type property"),
       VAR_3, VAR_11);






  VAR_8 = FUNC_10(FUNC_9(VAR_7),
                                                   "", VAR_0, ((void*)0), VAR_0,
                                                   VAR_7);

  VAR_9 = VAR_5(((void*)0), VAR_8, VAR_6, VAR_7);

  VAR_9 = FUNC_3(VAR_9, FUNC_8(VAR_8));

  if (VAR_9 && VAR_9->apr_err == VAR_2)
    return FUNC_4(VAR_1, VAR_9,
                             FUNC_1("File '%s' has inconsistent newlines"),
                             VAR_11);

  return FUNC_5(VAR_9);
}
