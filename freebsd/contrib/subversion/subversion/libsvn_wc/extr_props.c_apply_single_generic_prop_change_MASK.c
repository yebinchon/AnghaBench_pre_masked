
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const svn_string_t **VAR_2,
                                 svn_boolean_t *VAR_3,
                                 svn_boolean_t *VAR_4,
                                 const svn_string_t *VAR_5,
                                 const svn_string_t *VAR_6,
                                 const svn_string_t *VAR_7)
{
  FUNC_0(VAR_5 != ((void*)0));



  if (VAR_7 && VAR_6
      && FUNC_1(VAR_7, VAR_6))
    {

      if (! VAR_5 || ! FUNC_1(VAR_5, VAR_6))
        *VAR_4 = VAR_1;
    }

  else if (VAR_7 && VAR_5
      && FUNC_1(VAR_7, VAR_5))
    {

      *VAR_2 = VAR_6;
    }
  else
    {

      *VAR_3 = VAR_1;
    }

  return VAR_0;
}
