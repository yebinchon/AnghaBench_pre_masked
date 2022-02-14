
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* id; int const* url; int const* author; int const* date; int const* revision; } ;
typedef TYPE_1__ svn_subst_keywords_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int **,char const*,char const*,char const*,int ,char const*,int *) ;

svn_error_t *
FUNC_3(svn_subst_keywords_t *VAR_6,
                         const char *VAR_7,
                         const char *VAR_8,
                         const char *VAR_9,
                         apr_time_t VAR_10,
                         const char *VAR_11,
                         apr_pool_t *VAR_12)
{
  apr_hash_t *VAR_13;
  const svn_string_t *VAR_14;

  FUNC_0(FUNC_2(&VAR_13, VAR_7, VAR_8,
                                    VAR_9, VAR_10, VAR_11, VAR_12));






  VAR_14 = FUNC_1(VAR_13, VAR_3);
  if (VAR_14)
    VAR_6->revision = VAR_14;

  VAR_14 = FUNC_1(VAR_13, VAR_1);
  if (VAR_14)
    VAR_6->date = VAR_14;

  VAR_14 = FUNC_1(VAR_13, VAR_0);
  if (VAR_14)
    VAR_6->author = VAR_14;

  VAR_14 = FUNC_1(VAR_13, VAR_4);
  if (VAR_14)
    VAR_6->url = VAR_14;

  VAR_14 = FUNC_1(VAR_13, VAR_2);
  if (VAR_14)
    VAR_6->id = VAR_14;

  return VAR_5;
}
