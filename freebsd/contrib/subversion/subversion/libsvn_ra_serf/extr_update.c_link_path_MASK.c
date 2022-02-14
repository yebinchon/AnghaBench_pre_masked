
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_9__ {char const* update_target; int switched_paths; int pool; int body_template; int sess; } ;
typedef TYPE_2__ report_context_t ;
struct TYPE_10__ {int path; } ;
typedef TYPE_3__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,char*,char const*,int ) ;
 char* FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int *,int ,char const*) ;
 int FUNC_8 (int ,char const*,char const*) ;
 int FUNC_9 (char const**,int ,int ,int *) ;
 int FUNC_10 (char const**,int ,int *) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (TYPE_1__**,char const*,int *) ;
 int FUNC_13 (TYPE_1__**,int *,char*) ;
 int FUNC_14 (TYPE_1__**,int *,int ,char*,char*,int ,char*,char const*,char*,int ,char*,char const*,char*,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_15(void *VAR_4,
          const char *VAR_5,
          const char *VAR_6,
          svn_revnum_t VAR_7,
          svn_depth_t VAR_8,
          svn_boolean_t VAR_9,
          const char *VAR_10,
          apr_pool_t *VAR_11)
{
  report_context_t *VAR_12 = VAR_4;
  const char *VAR_13, *VAR_14;
  apr_uri_t VAR_15;
  apr_status_t VAR_16;
  svn_stringbuf_t *VAR_17 = ((void*)0);





  VAR_16 = FUNC_5(VAR_11, VAR_6, &VAR_15);
  if (VAR_16)
    {
      return FUNC_7(VAR_1, ((void*)0),
                               FUNC_1("Unable to parse URL '%s'"), VAR_6);
    }

  FUNC_0(FUNC_10(&VAR_14, VAR_12->sess, VAR_11));
  FUNC_0(FUNC_9(&VAR_13, VAR_15.path, VAR_12->sess, VAR_11));

  VAR_13 = FUNC_3(VAR_11, "/", VAR_13, VAR_2);

  FUNC_14(&VAR_17, VAR_11, VAR_3, "S:entry",
                        "rev", FUNC_2(VAR_11, VAR_7),
                        "lock-token", VAR_10,
                        "depth", FUNC_6(VAR_8),
                        "linkpath", VAR_13,
                        "start-empty", VAR_9 ? "true" : ((void*)0),
                        VAR_2);
  FUNC_12(&VAR_17, VAR_5, VAR_11);
  FUNC_13(&VAR_17, VAR_11, "S:entry");

  FUNC_0(FUNC_11(VAR_12->body_template, VAR_17->data, &VAR_17->len));



  VAR_5 = FUNC_4(VAR_12->pool, VAR_5);
  VAR_13 = FUNC_4(VAR_12->pool, VAR_13 + 1);
  FUNC_8(VAR_12->switched_paths, VAR_5, VAR_13);

  if (!VAR_5[0] && VAR_12->update_target[0])
    {


      FUNC_8(VAR_12->switched_paths, VAR_12->update_target, VAR_13);
    }

  return VAR_0;
}
