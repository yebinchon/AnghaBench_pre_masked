
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* FUNC_0 (unsigned char const**,unsigned char const*,int*) ;
 TYPE_1__* FUNC_1 (unsigned char const**,unsigned char const*,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const unsigned char **VAR_6, const unsigned char *VAR_7, int *VAR_8)
{
  svn_error_t *VAR_9;
  ptrdiff_t VAR_10;






  VAR_9 = FUNC_1(VAR_6, VAR_7, &VAR_10,
                     VAR_1 | VAR_0 | 0);
  if (VAR_9)
    {
      if (VAR_9->apr_err == VAR_3)
        {
          FUNC_2(VAR_9);
          *VAR_8 = 0;
          return VAR_5;
        }

      return FUNC_4(VAR_9);
    }

  VAR_7 = *VAR_6 + VAR_10;

  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8);
  if (VAR_9)
    return FUNC_3(VAR_4, VAR_9, ((void*)0));

  if (*VAR_6 != VAR_7)
    {
      VAR_9 = FUNC_3(VAR_2, ((void*)0), ((void*)0));
      return FUNC_3(VAR_4, VAR_9, ((void*)0));
    }

  return VAR_5;
}
