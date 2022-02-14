
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const**,int const*,int const*,int const*,int *,int *) ;
 int FUNC_2 (int *,int *,int const*,int const*,int *) ;
 int FUNC_3 (int **,int ,int *) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const svn_string_t **VAR_2,
                                   svn_boolean_t *VAR_3,
                                   svn_boolean_t *VAR_4,
                                   const svn_string_t *VAR_5,
                                   const svn_string_t *VAR_6,
                                   const svn_string_t *VAR_7,
                                   const svn_string_t *VAR_8,
                                   apr_pool_t *VAR_9,
                                   apr_pool_t *VAR_10)
{
  if ((VAR_8 && ! VAR_5)
      || (! VAR_8 && VAR_5)
      || (VAR_8 && VAR_5
          && !FUNC_4(VAR_8, VAR_5)))
    {

      if (VAR_8)
        {
          if (FUNC_4(VAR_8, VAR_7))

            *VAR_4 = VAR_1;
          else
            {




              FUNC_0(FUNC_1(&VAR_7, VAR_6,
                                                     VAR_8,
                                                     VAR_7,
                                                     VAR_9,
                                                     VAR_10));
              *VAR_2 = VAR_7;
              *VAR_4 = VAR_1;
            }
        }
      else
        {

          *VAR_3 = VAR_1;
        }
    }

  else if (! VAR_8)

    {



      svn_mergeinfo_t VAR_11, VAR_12;
      svn_string_t *VAR_13;

      FUNC_0(FUNC_2(&VAR_11,
                                   &VAR_12,
                                   VAR_6, VAR_7, VAR_10));
      FUNC_0(FUNC_3(&VAR_13,
                                      VAR_12, VAR_9));
      *VAR_2 = VAR_13;
    }

  else
    {
      if (FUNC_4(VAR_6, VAR_5))
        *VAR_2 = VAR_7;
      else
        {




          FUNC_0(FUNC_1(&VAR_7, VAR_6,
                                                 VAR_8,
                                                 VAR_7, VAR_9,
                                                 VAR_10));
          *VAR_2 = VAR_7;
          *VAR_4 = VAR_1;
        }
    }

  return VAR_0;
}
