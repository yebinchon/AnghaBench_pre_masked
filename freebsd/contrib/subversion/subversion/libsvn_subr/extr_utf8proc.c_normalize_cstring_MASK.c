
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_ssize_t ;
typedef int apr_size_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char const*,int,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_size_t *VAR_6,
                  const char *VAR_7, apr_size_t VAR_8,
                  svn_boolean_t VAR_9,
                  svn_boolean_t VAR_10,
                  svn_membuf_t *VAR_11)
{
  int VAR_12 = 0;
  apr_ssize_t VAR_13;

  if (VAR_9)
    VAR_12 |= VAR_2;

  if (VAR_10)
    VAR_12 |= VAR_5;

  VAR_13 = FUNC_3(VAR_12, VAR_7, VAR_8, VAR_11);
  if (VAR_13 >= 0)
    {
      FUNC_2(VAR_11, VAR_13 * sizeof(apr_int32_t) + 1);
      VAR_13 = FUNC_5(VAR_11->data, VAR_13,
                                 VAR_3 | VAR_4);
    }
  if (VAR_13 < 0)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0(FUNC_4(VAR_13)));
  *VAR_6 = VAR_13;
  return VAR_1;
}
