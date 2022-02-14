
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

svn_error_t *
FUNC_3(int *VAR_2,
                 const char *VAR_3, apr_size_t VAR_4,
                 const char *VAR_5, apr_size_t VAR_6,
                 svn_membuf_t *VAR_7, svn_membuf_t *VAR_8)
{
  apr_size_t VAR_9;
  apr_size_t VAR_10;


  const svn_boolean_t VAR_11 =
    (0 == VAR_4 || (VAR_4 == VAR_1 && !*VAR_3));
  const svn_boolean_t VAR_12 =
    (0 == VAR_6 || (VAR_6 == VAR_1 && !*VAR_5));
  if (VAR_11 || VAR_12)
    {
      *VAR_2 = (VAR_11 == VAR_12 ? 0 : (VAR_11 ? -1 : 1));
      return VAR_0;
    }

  FUNC_0(FUNC_1(&VAR_9, VAR_3, VAR_4, VAR_7));
  FUNC_0(FUNC_1(&VAR_10, VAR_5, VAR_6, VAR_8));
  *VAR_2 = FUNC_2(VAR_7->data, VAR_9, VAR_8->data, VAR_10);
  return VAR_0;
}
