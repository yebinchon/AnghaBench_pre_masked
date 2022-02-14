
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_x509_certinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct walk_credentials_baton_t {scalar_t__ delete; int show_passwords; scalar_t__ list; int matches; TYPE_1__* patterns; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_2__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*,int *,int ,int *,int *) ;
 int FUNC_3 (int *,int **,char const*,char const*,TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (int *,int ,char const*,char const*) ;
 int * FUNC_5 (int *,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_4,
                 void *VAR_5,
                 const char *VAR_6,
                 const char *VAR_7,
                 apr_hash_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  struct walk_credentials_baton_t *VAR_10 = VAR_5;
  apr_array_header_t *VAR_11;
  svn_x509_certinfo_t *VAR_12 = ((void*)0);

  *VAR_4 = VAR_0;

  VAR_11 = FUNC_5(VAR_8,
                                     VAR_3,
                                     VAR_9);
  if (VAR_10->patterns->nelts > 0)
    {
      svn_boolean_t VAR_13;

      FUNC_0(FUNC_3(&VAR_13, &VAR_12, VAR_6, VAR_7,
                               VAR_10->patterns, VAR_11,
                               VAR_9, VAR_9));
      if (!VAR_13)
        return VAR_1;
    }

  VAR_10->matches++;

  if (VAR_10->list)
    FUNC_0(FUNC_2(VAR_6, VAR_7, VAR_11,
                            VAR_10->show_passwords, VAR_12, VAR_9));
  if (VAR_10->delete)
    {
      *VAR_4 = VAR_2;
      FUNC_0(FUNC_4(VAR_9,
                                 FUNC_1("Deleting %s credential for realm '%s'\n"),
                                 VAR_6, VAR_7));
    }

  return VAR_1;
}
