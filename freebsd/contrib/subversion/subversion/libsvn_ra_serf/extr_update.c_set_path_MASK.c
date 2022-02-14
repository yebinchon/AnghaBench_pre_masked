
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {int body_template; } ;
typedef TYPE_2__ report_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_1__**,char const*,int *) ;
 int FUNC_5 (TYPE_1__**,int *,char*) ;
 int FUNC_6 (TYPE_1__**,int *,int ,char*,char*,int ,char*,char const*,char*,int ,char*,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3,
         const char *VAR_4,
         svn_revnum_t VAR_5,
         svn_depth_t VAR_6,
         svn_boolean_t VAR_7,
         const char *VAR_8,
         apr_pool_t *VAR_9)
{
  report_context_t *VAR_10 = VAR_3;
  svn_stringbuf_t *VAR_11 = ((void*)0);

  FUNC_6(&VAR_11, VAR_9, VAR_2, "S:entry",
                        "rev", FUNC_1(VAR_9, VAR_5),
                        "lock-token", VAR_8,
                        "depth", FUNC_2(VAR_6),
                        "start-empty", VAR_7 ? "true" : ((void*)0),
                        VAR_1);
  FUNC_4(&VAR_11, VAR_4, VAR_9);
  FUNC_5(&VAR_11, VAR_9, "S:entry");

  FUNC_0(FUNC_3(VAR_10->body_template, VAR_11->data, &VAR_11->len));

  return VAR_0;
}
