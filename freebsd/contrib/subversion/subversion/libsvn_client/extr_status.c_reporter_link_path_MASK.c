
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {char* ancestor; int wrapped_report_baton; TYPE_1__* wrapped_reporter; int depth; } ;
typedef TYPE_2__ report_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int * (* link_path ) (int ,char const*,char const*,int ,int ,int ,char const*,int *) ;} ;


 size_t FUNC_0 (char const*) ;
 int * FUNC_1 (int ,char const*,char const*,int ,int ,int ,char const*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1, const char *VAR_2, const char *VAR_3,
                   svn_revnum_t VAR_4, svn_depth_t VAR_5,
                   svn_boolean_t VAR_6,
                   const char *VAR_7, apr_pool_t *VAR_8)
{
  report_baton_t *VAR_9 = VAR_1;

  if (!FUNC_2(VAR_9->ancestor, VAR_3))
    {
      const char *VAR_10;

      VAR_10 = FUNC_3(VAR_3, VAR_9->ancestor, VAR_8);





      VAR_9->ancestor[FUNC_0(VAR_10)] = '\0';
      VAR_9->depth = VAR_0;
    }

  return VAR_9->wrapped_reporter->link_path(VAR_9->wrapped_report_baton, VAR_2, VAR_3,
                                         VAR_4, VAR_5, VAR_6,
                                         VAR_7, VAR_8);
}
