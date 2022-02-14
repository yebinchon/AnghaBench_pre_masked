
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ summarize_kind; scalar_t__ prop_changed; int path; } ;
typedef TYPE_1__ svn_client_diff_summarize_t ;
struct summarize_baton_t {char* anchor; scalar_t__ ignore_properties; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,char,char const*) ;
 char* FUNC_4 (char const*,int ,int *) ;
 char* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const svn_client_diff_summarize_t *VAR_3,
                  void *VAR_4,
                  apr_pool_t *VAR_5)
{
  struct summarize_baton_t *VAR_6 = VAR_4;
  const char *VAR_7 = VAR_6->anchor;
  char VAR_8;

  if (VAR_6->ignore_properties &&
      VAR_3->summarize_kind == VAR_2)
    return VAR_0;



  if (FUNC_6(VAR_7))
    {
      VAR_7 = FUNC_7(VAR_7, VAR_3->path, VAR_5);
    }
  else
    {
      VAR_7 = FUNC_4(VAR_7, VAR_3->path, VAR_5);



      VAR_7 = FUNC_5(VAR_7, VAR_5);
    }





  VAR_8 = VAR_3->prop_changed ? 'M' : ' ';
  if (VAR_6->ignore_properties)
    VAR_8 = ' ';

  FUNC_0(FUNC_3(VAR_5, "%c%c      %s\n",
                             FUNC_1(VAR_3->summarize_kind),
                             VAR_8, VAR_7));

  return FUNC_2(VAR_1);
}
